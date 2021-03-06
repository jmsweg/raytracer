#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "Ray.h"
#include "Photon.h"

class Triangle : public Shape {

    private:
	vec4 v0;
	vec4 v1;
	vec4 v2;
        vec4 normal;

    public:
        // Constructor
        Triangle(vec4 v0, vec4 v1, vec4 v2, Material material);

        // Tests whether a triangle intersects a ray
        bool intersects(Ray * ray, Intersection & intersection, int index);

        //Test whether a photon intersects a ray
        bool intersects(Photon * photon, Intersection & intersection, int index);

        // Cramer
        bool cramer(mat3 A, vec3 b, vec3& solution);

        // Getters
        vec4 getV0();
        vec4 getV1();
        vec4 getV2();
        vec4 getNormal();

        // Setters
        void setV0(vec4 v0);
        void setV1(vec4 v1);
        void setV2(vec4 v2);
        void computeAndSetNormal();

};
#endif
