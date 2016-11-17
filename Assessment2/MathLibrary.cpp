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

Mat2::Mat2(float x1, float y1, float x2, float y2) {
	data[0] = x1;
	data[1] = y1;
	data[2] = x2;
	data[3] = y2;
}
//Mat2::Mat2(float Array[4]) {
//	for (int i = 0; i < 3; i++)
//	{
//		Array[i] = data[i];
//	}
//}

Mat2 Mat2::CrossProduct(Mat2 other)
{
	return Mat2((data[0] * other.data[0]) - (data[1] * other.data[2]), (data[0] * other.data[1]) - (data[1] * other.data[3]),
		(data[2] * other.data[0]) - (data[3] * other.data[1]), (data[2] * other.data[2]) - (data[3] * data[3]));
}

Mat3::Mat3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {
	data[0] = x1;
	data[1] = y1;
	data[2] = z1;
	data[3] = x2;
	data[4] = y2;
	data[5] = z2;
	data[6] = x3;
	data[7] = y3;
	data[8] = z3;
}

Mat3 Mat3::CrossProduct(Mat3 other)
{
	return Mat3(
		(data[0] * other.data[0]) - (data[1] * other.data[1]) - (data[2] * other.data[2]),
		(data[0] * other.data[3]) - (data[1] * other.data[4]) - (data[2] * other.data[5]),
		(data[0] * other.data[6]) - (data[1] * other.data[7]) - (data[2] * other.data[8]),
		(data[3] * other.data[0]) - (data[4] * other.data[1]) - (data[5] * other.data[2]),
		(data[3] * other.data[3]) - (data[4] * other.data[4]) - (data[5] * other.data[5]),
		(data[3] * other.data[6]) - (data[4] * other.data[7]) - (data[5] * other.data[8]),
		(data[6] * other.data[0]) - (data[7] * other.data[1]) - (data[8] * other.data[2]),
		(data[6] * other.data[3]) - (data[7] * other.data[4]) - (data[8] * other.data[5]),
		(data[6] * other.data[6]) - (data[7] * other.data[7]) - (data[8] * other.data[8]));
}

Mat4::Mat4(float x1, float y1, float z1, float t1, float x2, float y2, float z2, float t2, float x3, float y3, float z3, float t3, float b1, float b2, float b3, float b4) {
	data[0] = x1;
	data[1] = y1;
	data[2] = z1;
	data[3] = t1;
	data[4] = x2;
	data[5] = y2;
	data[6] = z2;
	data[7] = t2;
	data[8] = x3;
	data[9] = y3;
	data[10] = z3;
	data[11] = t3;
	data[12] = b1;
	data[13] = b2;
	data[14] = b3;
	data[15] = b4;
}

Mat4 Mat4::CrossProduct(Mat4 other)
{
	return Mat4(
		(data[0] * other.data[0]) - (data[1] * other.data[1]) - (data[2] * other.data[2]) - (data[3] * other.data[3]),
		(data[0] * other.data[4]) - (data[1] * other.data[5]) - (data[2] * other.data[6]) - (data[3] * other.data[7]),
		(data[0] * other.data[8]) - (data[1] * other.data[9]) - (data[2] * other.data[10]) - (data[3] * other.data[11]),
		(data[0] * other.data[12]) - (data[1] * other.data[13]) - (data[2] * other.data[14]) - (data[3] * other.data[15]),
		(data[4] * other.data[0]) - (data[5] * other.data[1]) - (data[6] * other.data[2]) - (data[7] * other.data[3]),
		(data[4] * other.data[4]) - (data[5] * other.data[5]) - (data[6] * other.data[6]) - (data[7] * other.data[7]),
		(data[4] * other.data[8]) - (data[5] * other.data[9]) - (data[6] * other.data[10]) - (data[7] * other.data[11]),
		(data[4] * other.data[12]) - (data[5] * other.data[13]) - (data[6] * other.data[14]) - (data[7] * other.data[15]),
		(data[8] * other.data[0]) - (data[9] * other.data[1]) - (data[10] * other.data[2]) - (data[11] * other.data[3]),
		(data[8] * other.data[4]) - (data[9] * other.data[5]) - (data[10] * other.data[6]) - (data[11] * other.data[7]),
		(data[8] * other.data[8]) - (data[9] * other.data[9]) - (data[10] * other.data[10]) - (data[11] * other.data[11]),
		(data[8] * other.data[12]) - (data[9] * other.data[13]) - (data[10] * other.data[14]) - (data[11] * other.data[15]),
		(data[12] * other.data[0]) - (data[13] * other.data[1]) - (data[14] * other.data[2]) - (data[15] * other.data[3]),
		(data[12] * other.data[4]) - (data[13] * other.data[5]) - (data[14] * other.data[6]) - (data[15] * other.data[7]),
		(data[12] * other.data[8]) - (data[13] * other.data[9]) - (data[14] * other.data[10]) - (data[15] * other.data[11]),
		(data[12] * other.data[12]) - (data[13] * other.data[13]) - (data[14] * other.data[14]) - (data[15] * other.data[15])
		);
}