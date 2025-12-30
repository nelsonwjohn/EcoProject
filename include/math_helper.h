#ifndef MATH_HELPER_H
#define MATH_HELPER_H

// Vector math helpers for Vec3 / Pos3 (from float3.h)
typedef struct float3 Vec3;
typedef struct float3 Pos3;

Vec3 cross_product3(Vec3 a, Vec3 b);
float dot_product3(Vec3 a, Vec3 b);
float magnitude3(Vec3 v);
Pos3 centroid(Pos3 a, Pos3 b, Pos3 c);

Pos3 aabb_min(Pos3 p1, Pos3 p2, Pos3 p3, Pos3 p4);
Pos3 aabb_max(Pos3 p1, Pos3 p2, Pos3 p3, Pos3 p4);

#endif
