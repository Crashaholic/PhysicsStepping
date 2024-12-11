#ifndef MYMATH_HPP
#define MYMATH_HPP

#define _USE_MATH_DEFINES
#include <math.h>

#define PI M_PI
#define GRAVITY 9.8
#define EPSILON 1e09

inline double deg2rad(double a)
{
	return a * PI / 180.0;
}

inline double rad2deg(double a)
{
	return a * 180.0 / PI;
}


#endif
