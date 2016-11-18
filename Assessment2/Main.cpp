#include <iostream>
#include "MathLibraryHeader.h"
#include "LinkedListHeader.h"
#include <cassert>
int main()
{
	/*Vector a = <3,4,2>, Vector b = <2,1,5>, Vector c = a + b
	Vec4 a = Vec4(3, 4, 2);
	Vec4 b = Vec4(2, 1, 5);
	Vec4 c = a + b;
	Vec4 d = a - b;
	Vec4 e = a * 5;
	assert(a.Magnitude());
	Vec4 g = a.Normalize();
	assert(a.DotProduct(b));
	Vec4 h = a.CrossProduct(b);
	*/
	Mat4 a(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
	Mat4 b(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
	Mat4 c = a.Multiplication(b);
}