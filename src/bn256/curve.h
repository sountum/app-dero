
#ifndef BN256CURVE_H
#define BN256CURVE_H

#include "gfp.h"

typedef struct {
    gfp x;
    gfp y;
    gfp z;
    gfp t;
} curvePoint;

void set_curve(curvePoint* c1, curvePoint* c2);

int is_infinity(curvePoint* c);

void add_curve(curvePoint* c1, curvePoint* c2, curvePoint* result);

void double_curve(curvePoint* c, curvePoint* result);


#endif