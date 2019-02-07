#pragma once
#include<malloc.h>
#include<string.h>

struct SierpinskiTriangle {
	float* positions;
	unsigned int count;
	unsigned int step;
};

SierpinskiTriangle setupTriangle(float positions[], unsigned int count);

SierpinskiTriangle sierpinski(SierpinskiTriangle* oldTriangle);