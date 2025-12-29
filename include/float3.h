#ifndef FLOAT3_H
#define FLOAT3_H

typedef struct float3{
    float x;
    float y;
    float z;
} Vec3, Pos3;

// Construct a float3/Vec3/Pos3 from components.
Vec3 create_float3(float a, float b, float c);

#endif