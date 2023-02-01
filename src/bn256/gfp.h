
#ifndef GFP_H
#define GFP_H

#define D_LENGHT 4

typedef struct {
	uint32_t d[D_LENGHT][2];
} gfp;


void set_gpt(gfp* gfp1, gfp* gfp2);

void gfp_mul(gfp* gfp1, gfp* gfp2, gfp* result);

void gpf_add(gfp* gfp1, gfp* gfp2, gfp* result);

void gfp_carry(gfp* gfp1, gfp* gfp2, gfp* result);

#endif