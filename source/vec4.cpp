#include "vec4.h"
#include <math.h>

vec4::vec4()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}

vec4::vec4(float a_x, float a_y, float a_z, float a_w)
{
	x = a_x;
	y = a_y;
	z = a_z;
	w = a_w;
}

vec4::vec4(const vec4 & a_v4)
{
	x = a_v4.x;
	y = a_v4.y;
	z = a_v4.z;
	w = a_v4.w;
}

vec4::vec4(float v4[4])
{
	x = v4[0];
	y = v4[1];
	z = v4[2];
	w = v4[3];
}

vec4::~vec4()
{
}


vec4 vec4::operator+(const vec4 & a_v4) const
{
	return vec4(x + a_v4.x, y + a_v4.y, z + a_v4.z, w + a_v4.w);
}

vec4 & vec4::operator+=(const vec4 & a_v4)
{
	x += a_v4.x;
	y += a_v4.y;
	z += a_v4.z;
	w += a_v4.w;
	return *this;
}

vec4 vec4::operator-(const vec4 & a_v4) const
{
	return vec4(x - a_v4.x, y - a_v4.y, z - a_v4.z, w - a_v4.w);
}

vec4 & vec4::operator-=(const vec4 & a_v4)
{
	x -= a_v4.x;
	y -= a_v4.y;
	z -= a_v4.z;
	w -= a_v4.w;
	return *this;
}

vec4 vec4::operator*(const float & a_fS) const
{
	return vec4(x * a_fS, y * a_fS, z * a_fS, w * a_fS);
}

vec4 & vec4::operator*=(const float & a_fS)
{
	x *= a_fS;
	y *= a_fS;
	z *= a_fS;
	w *= a_fS;
	return *this;
}

vec4 vec4::operator*(const int & a_iS) const
{
	return vec4(x * a_iS, y * a_iS, z * a_iS, w * a_iS);
}

vec4 & vec4::operator*=(const int & a_iS)
{
	x *= a_iS;
	y *= a_iS;
	z *= a_iS;
	w *= a_iS;
	return *this;
}

bool vec4::operator==(const vec4 & a_v4) const
{
	return (x == a_v4.x && y == a_v4.y && z == a_v4.z && w == a_v4.w);
}

bool vec4::operator!=(const vec4 & a_v4) const
{
	return (x != a_v4.x || y != a_v4.y || z != a_v4.z || w != a_v4.w);
}

float vec4::mag()
{
	return sqrtf((x * x) + (y * y) + (z * z) + (w * w));
}

vec4 vec4::norm()
{
	vec4 tmp(x, y, z, w);
	tmp *= (1 / tmp.mag());
	return tmp;
}

float vec4::dot(vec4 & a_v4)
{
	return (x * a_v4.x) + (y * a_v4.y) + (z * a_v4.z) + (w * a_v4.w);
}

vec4 vec4::proj(vec4 & a_v4)
{
	vec4 temp(x, y, z, w);
	return (a_v4.dot(temp) / (temp.mag() * temp.mag())) * temp;
}
