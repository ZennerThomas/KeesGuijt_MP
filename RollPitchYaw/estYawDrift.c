#include "p30f4011.h"
#include "defines.h"


fractional rmat1filt = 0 ;
fractional rmat4filt = RMAX ;

signed char GPS_pitch = 0 ;

int velocity_magnitude = 0 ;
int forward_acceleration = 0 ;
int velocity_previous = 0 ;

#define GPSTAU 3.0

#define GPSFILT (4.0/GPSTAU)*RMAX

void estYawDrift(void)
{
	union longbbbb accum ;
	struct xypair velocity_3D ;
	accum.WW = __builtin_mulss ( COURSEDEG_2_BYTECIR , cog_gps.BB ) ;
	actual_dir = -accum.__.B2 + 64 ;
	accum.WW = __builtin_mulss( GPSFILT , (rmat[1] - rmat1filt )) ;
	rmat1filt = rmat1filt + accum._.W1 ;
	accum.WW = __builtin_mulss( GPSFILT , (rmat[4] - rmat4filt )) ;
	rmat4filt = rmat4filt + accum._.W1 ;

	dirovergndHRmat[0] = rmat1filt ;
	dirovergndHRmat[1] = rmat4filt ;
	dirovergndHRmat[2] = 0 ;

	if ( nav_valid_.BB == 0 )
	{
		__builtin_btg ( &LATF , 0 ) ;
		dirovergndHGPS[0] = -cosine ( actual_dir ) ;
		dirovergndHGPS[1] = sine ( actual_dir ) ;

		velocity_3D.x = sog_gps.BB ;
		velocity_3D.y = climb_gps.BB ;
		GPS_pitch = rect_to_polar( &velocity_3D ) ;
		velocity_magnitude = velocity_3D.x ;
		forward_acceleration = ((velocity_magnitude - velocity_previous)/10)*SCALEDVDT ;
		velocity_previous = velocity_magnitude ;
	}
	else
	{
		dirovergndHGPS[0] = rmat1filt ;
		dirovergndHGPS[1] = rmat4filt ;
	}
	dirovergndHGPS[2] = 0 ;
	flags._.yaw_req = 1 ;
	return ;
}