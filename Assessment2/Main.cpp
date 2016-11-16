#include <iostream>
#include "MathLibraryHeader.h"

int main()
{
	//Vector a = <3,4,2>, Vector b = <2,1,5>, Vector c = a + b
	Vec2 a(3, 4);
	Vec2 b(2, 1);
	Vec2 c = a + b;
	Vec2 d = a - b;
	Vec2 e = a * 5;
	a.Magnitude();
	Vec2 g = a.Normalize();
	a.DotProduct(b);
}