#include "vec3.h"
#include <math.h>

vec3::vec3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

vec3::vec3(float a_x, float a_y, float a_z)
{
	x = a_x;
	y = a_y;
	z = a_z;
}

vec3::vec3(const vec3 & a_v3)
{
	x = a_v3.x;
	y = a_v3.y;
	z = a_v3.z;
}

vec3::vec3(float v3[3])
{
	x = v3[0];
	y = v3[1];
	z = v3[2];
}

vec3::~vec3()
{
}


vec3 vec3::operator+(const vec3 & a_v3) const
{
	return vec3(x + a_v3.x, y + a_v3.y, z + a_v3.z);
}

vec3 & vec3::operator+=(const vec3 & a_v3)
{
	x += a_v3.x;
	y += a_v3.y;
	z += a_v3.z;
	return *this;
}

vec3 vec3::operator-(const vec3 & a_v3) const
{
	return vec3(x - a_v3.x, y - a_v3.y, z - a_v3.z);
}

vec3 & vec3::operator-=(const vec3 & a_v3)
{
	x -= a_v3.x;
	y -= a_v3.y;
	z -= a_v3.z;
	return *this;
}

vec3 vec3::operator*(const float & a_fS) const
{
	return vec3(x * a_fS, y * a_fS, z * a_fS);
}

vec3 & vec3::operator*=(const float & a_fS)
{
	x *= a_fS;
	y *= a_fS;
	z *= a_fS;
	return *this;
}

vec3 vec3::operator*(const int & a_iS) const
{
	return vec3(x * a_iS, y * a_iS, z * a_iS);
}

vec3 & vec3::operator*=(const int & a_iS)
{
	x *= a_iS;
	y *= a_iS;
	z *= a_iS;
	return *this;
}

bool vec3::operator==(const vec3 & a_v3) const
{
	return (x == a_v3.x && y == a_v3.y && z == a_v3.z);
}

bool vec3::operator!=(const vec3 & a_v3) const
{
	return (x != a_v3.x || y != a_v3.y || z != a_v3.z);
}

float vec3::mag()
{
	return sqrtf((x * x) + (y * y) + (z * z));
}

vec3 vec3::norm()
{
	vec3 tmp(x, y, z);
	tmp *= (1 / tmp.mag());
	return tmp;
}

vec3 vec3::cross(vec3 & a_v3)
{
	return vec3( (y * a_v3.z)-(z * a_v3.y) , (z * a_v3.x)-(x * a_v3.z) , (x * a_v3.y)-(y * a_v3.x) );
}

float vec3::dot(vec3 & a_v3)
{
	return (x * a_v3.x) + (y * a_v3.y) + (z * a_v3.z);
}

vec3 vec3::proj(vec3 & a_v3)
{
	vec3 temp(x, y, z);
	return (a_v3.dot(temp) / (temp.mag() * temp.mag())) * temp;
}