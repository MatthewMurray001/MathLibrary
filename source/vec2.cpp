
#include "vec2.h"
#include <math.h>

vec2::vec2()
{
	x = 0.f;
	y = 0.f;
}

vec2::vec2(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

vec2::vec2(const vec2& a_v2)
{
	x = a_v2.x;
	y = a_v2.y;
}

vec2::vec2(float a_v2[2])
{
	x = a_v2[0];
	y = a_v2[1];
}

vec2::~vec2(){}

vec2 vec2::operator +(const vec2& a_v2) const
{
	return vec2(x + a_v2.x, y + a_v2.y);
}

vec2& vec2::operator +=(const vec2& a_v2)
{
	x += a_v2.x;
	y += a_v2.y;
	return *this;
}

vec2 vec2::operator -(const vec2& a_v2) const
{
	return vec2(x - a_v2.x, y - a_v2.y);
}

vec2& vec2::operator -=(const vec2& a_v2)
{
	x -= a_v2.x;
	y -= a_v2.y;
	return *this;
}

vec2 vec2::operator *(const float& a_fS)const 
{
	return vec2(x * a_fS, y * a_fS);
}

vec2& vec2::operator *=(const float& a_fS) 
{
	x *= a_fS;
	y *= a_fS;
	return *this;
}

vec2 vec2::operator *(const int& a_iS)const
{
	return vec2(x * a_iS, y * a_iS);
}

vec2& vec2::operator *=(const int& a_iS)
{
	x *= a_iS;
	y *= a_iS;
	return *this;
}

bool vec2::operator ==(const vec2& a_v2) const
{
	return (x == a_v2.x && y == a_v2.y);
}

bool vec2::operator !=(const vec2& a_v2) const
{
	return (x != a_v2.x || y != a_v2.y);
}

float vec2::mag()
{
	return sqrtf((x * x) + (y * y));
}

vec2 vec2::norm()
{
	vec2 tmp(x, y);
	tmp *= (1 / tmp.mag());
	return tmp;
}

float vec2::dot(vec2 & a_v2)
{	
	return (x * a_v2.x) + (y * a_v2.y);
}

vec2 vec2::proj(vec2 & a_v2)
{
	vec2 temp(x, y);
	return (a_v2.dot(temp) / (temp.mag() * temp.mag())) * temp;
}