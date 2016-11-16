#include <iostream>
#include "MathLibraryHeader.h"
#include <cassert>
int main()
{
	//Vector a = <3,4,2>, Vector b = <2,1,5>, Vector c = a + b
	Vec4 a = Vec4 (3, 4, 2);
	Vec4 b = Vec4 (2, 1, 5);
	Vec4 c = a + b;
	Vec4 d = a - b;
	Vec4 e = a * 5;
	assert(a.Magnitude());
	Vec4 g = a.Normalize();
	assert(a.DotProduct(b));
	Vec4 h = a.CrossProduct(b);
	float Array[4] = { 1,2,3,4 };
	Mat2(Array[4]);
}