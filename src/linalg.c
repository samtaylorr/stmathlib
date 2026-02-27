#include "linalg.h"
#include <math.h>

// ||v|| = sqrt(x^2 + y^2)
float stm_GetVectorMagnitude(Vector2 v){
	return sqrt(v.x*v.x + v.y*v.y);
}

// x = x/sqrt(x^2 + y^2)
// y = y/sqrt(x^2 + y^2)
Vector2 stm_GetVectorNormalized(Vector2 v){
	float magnitude = stm_GetVectorMagnitude(v);
	v.x /= magnitude;
	v.y /= magnitude;
  return v;
}
