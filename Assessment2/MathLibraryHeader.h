#pragma once

class Vec2
{
private:
	float x;
	float y;
public:
	Vec2() {};
	Vec2(float a, float b);
	Vec2 operator + (Vec2 other);
	Vec2 operator - (Vec2 other);
	Vec2 operator * (float scalar);
	float Magnitude();
	Vec2 Normalize();
	float DotProduct(Vec2 other);
};

class Vec3
{
private:
	float x;
	float y;
	float z;
public:
	Vec3() {};
	Vec3(float a, float b, float c);
	Vec3 operator + (Vec3 other);
	Vec3 operator - (Vec3 other);
	Vec3 operator *(float scalar);
	float Magnitude();
	Vec3 Normalize();
	float DotProduct(Vec3 other);
	Vec3 CrossProduct(Vec3 other);
};

class Vec4
{
private:
	float x;
	float y;
	float z;
public:
	Vec4() {};
	Vec4(float a, float b, float c);
	Vec4 operator + (Vec4 other);

	Vec4 operator - (Vec4 other);
	Vec4 operator * (float scalar);
	float Magnitude();
	Vec4 Normalize();
	float DotProduct(Vec4 other);
	Vec4 CrossProduct(Vec4 other);
};

//class Mat2
//{
//
//};
//
//class Mat3
//{
//
//};
//
//class Mat4
//{
//
//};