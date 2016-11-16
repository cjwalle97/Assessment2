#include <iostream>
#include "MathLibraryHeader.h"


Vec2::Vec2(float a, float b) {
	x = a;
	y = b;
}

Vec2 Vec2::operator + (Vec2 other)
{
	return Vec2(x + other.x, y + other.y);
}

Vec2 Vec2::operator - (Vec2 other)
{
	return Vec2(x - other.x, y - other.y);
}
Vec2 Vec2::operator * (float scalar)
{
	return Vec2(x * scalar, y * scalar);
}
float Vec2::Magnitude()
{
	return sqrt((x*x) + (y*y));
}
Vec2 Vec2::Normalize()
{
	return Vec2(x / Magnitude(), y / Magnitude());
}
float Vec2::DotProduct(Vec2 other)
{
	return x*other.x + y*other.y;
}



Vec3::Vec3(float a, float b, float c) {
	x = a;
	y = b;
	z = c;
}
Vec3 Vec3::operator + (Vec3 other)
{
	return Vec3(x + other.x, y + other.y, z + other.z);
}
Vec3 Vec3::operator - (Vec3 other)
{
	return Vec3(x - other.x, y - other.y, z - other.z);
}
Vec3 Vec3::operator *(float scalar)
{
	return Vec3(x * scalar, y* scalar, z * scalar);
}
float Vec3::Magnitude()
{
	return sqrt((x*x) + (y*y) + (z*z));
}
Vec3 Vec3::Normalize()
{
	return Vec3(x / Magnitude(), y / Magnitude(), z / Magnitude());
}
float Vec3::DotProduct(Vec3 other)
{
	return x*other.x + y*other.y + z*other.z;
}
Vec3 Vec3::CrossProduct(Vec3 other)
{
	float Crossx = y*other.z - z* other.y;
	float Crossy = x*other.z - z*other.x;
	float Crossz = x*other.y - y*other.x;
	return Vec3(Crossx, Crossy, Crossz);
}

Vec4::Vec4(float a, float b, float c) {
	x = a;
	y = b;
	z = c;
}
Vec4 Vec4::operator + (Vec4 other)
{
	return Vec4(x + other.x, y + other.y, z + other.z);
}
Vec4 Vec4::operator - (Vec4 other)
{
	return Vec4(x - other.x, y - other.y, z - other.z);
}
Vec4 Vec4::operator * (float scalar)
{
	return Vec4(x*scalar, y*scalar, z*scalar);
}
float Vec4::Magnitude()
{
	return sqrt((x*x) + (y*y) + (z*z));
}
Vec4 Vec4::Normalize()
{
	return Vec4(x / Magnitude(), y / Magnitude(), z / Magnitude());
}
float Vec4::DotProduct(Vec4 other)
{
	return x*other.x + y*other.y + z*other.z;
}
Vec4 Vec4::CrossProduct(Vec4 other)
{
	float Crossx = y*other.z - z* other.y;
	float Crossy = x*other.z - z*other.x;
	float Crossz = x*other.y - y*other.x;
	return Vec4(Crossx, Crossy, Crossz);
}

/*class Mat2
{
private:
	float mat2[4];
public:
	Mat2() {};
	Mat2(float x1, float x2, float y1, float y2) {
		mat2[0] = x1;
		mat2[1] = y1;
		mat2[2] = x2;
		mat2[3] = y2;
	}
};*/

//class Mat3
//{
//private: 
//	float mat3[9];
//public:
//	Mat3() {};
//	Mat3(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3 ) {
//		mat3[0] = x1;
//		mat3[1] = y1;
//		mat3[2] = z1;
//		mat3[3] = x2;
//		mat3[4] = y2;
//		mat3[5] = z2;
//		mat3[6] = x3;
//		mat3[7] = y3;
//		mat3[8] = z3;
//	}
//};
//
//class Mat4
//{
//private:
//	float mat4[16];
//public:
//	Mat4() {};
//	Mat4(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float t1, float t2, float t3, float b1, float b2, float b3, float b4) {
//		mat4[0] = x1;
//		mat4[1] = y1;
//		mat4[2] = z1;
//		mat4[3] = t1;
//		mat4[4] = x2;
//		mat4[5] = y2;
//		mat4[6] = z2;
//		mat4[7] = t2;
//		mat4[8] = x3;
//		mat4[9] = y3;
//		mat4[10] = z3;
//		mat4[11] = t3;
//		mat4[12] = b1;
//		mat4[13] = b2;
//		mat4[14] = b3;
//		mat4[15] = b4;
//	}
//};
//
//class Math
//{
//private:
//
//public:
//};
