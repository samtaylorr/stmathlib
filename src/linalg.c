#include "linalg.h"
#include <math.h>

// ||v|| = sqrt(x^2 + y^2)
float stm_GetVectorMagnitude(Vector2 v){
	return sqrtf(v.x*v.x + v.y*v.y);
}

// x = x/sqrt(x^2 + y^2)
// y = y/sqrt(x^2 + y^2)
Vector2 stm_GetUnitVector(Vector2 v){
	float magnitude = stm_GetVectorMagnitude(v);

	if (magnitude == 0.0f) {
        Vector2 zero = {0.0f, 0.0f};
        return zero;
    }

	v.x /= magnitude;
	v.y /= magnitude;
  return v;
}
