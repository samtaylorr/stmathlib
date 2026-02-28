#ifndef LINALG_H
#define LINALG_H

typedef struct {
    float x, y;
} Vector2;

float stm_GetVectorMagnitude(Vector2 v);

Vector2 stm_GetUnitVector(Vector2 v);

#endif
