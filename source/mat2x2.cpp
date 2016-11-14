#include "mat2x2.h"

mat2x2::mat2x2()
{
	m11 = 0; m12 = 0; 
	m21 = 0; m22 = 0;
}

mat2x2::mat2x2(float a_m11, float a_m12, float a_m21, float a_m22)
{
	m11 = a_m11;
	m12 = a_m12;
	m21 = a_m21;
	m22 = a_m22;
}

mat2x2::mat2x2(float a_m2[2][2])
{
	m11 = a_m2[0][0];
	m12 = a_m2[0][1];
	m21 = a_m2[1][0];
	m22 = a_m2[1][1];
}

mat2x2::mat2x2(mat2x2 & a_m2)
{
	m11 = a_m2.m11;
	m12 = a_m2.m12;
	m21 = a_m2.m21;
	m22 = a_m2.m22;
}

mat2x2::~mat2x2()
{
}


mat2x2 mat2x2::operator+(const mat2x2 & a_m2) const
{
	float temp[2][2];
	temp[0][0] = m11 + a_m2.m11;
	temp[0][1] = m12 + a_m2.m12;
	temp[1][0] = m21 + a_m2.m21;
	temp[1][1] = m22 + a_m2.m22;
	return mat2x2(temp);
}

mat2x2 & mat2x2::operator+=(const mat2x2 & a_m2)
{
	m11 += a_m2.m11;
	m12 += a_m2.m12;
	m21 += a_m2.m21;
	m22 += a_m2.m22;
	return *this;
}

mat2x2 mat2x2::operator-(const mat2x2 & a_m2) const
{
	float temp[2][2];
	temp[0][0] = m11 - a_m2.m11;
	temp[0][1] = m12 - a_m2.m12;
	temp[1][0] = m21 - a_m2.m21;
	temp[1][1] = m22 - a_m2.m22;
	return mat2x2(temp);
}

mat2x2 & mat2x2::operator-=(const mat2x2 & a_m2)
{
	m11 -= a_m2.m11;
	m12 -= a_m2.m12;
	m21 -= a_m2.m21;
	m22 -= a_m2.m22;
	return *this;
}

mat2x2 mat2x2::operator*(const int & a_i) const
{
	float temp[2][2];
	temp[0][0] = m11 * a_i;
	temp[0][1] = m12 * a_i;
	temp[1][0] = m21 * a_i;
	temp[1][1] = m22 * a_i;
	return mat2x2(temp);
}

mat2x2 & mat2x2::operator*=(const int & a_i)
{
	m11 *= a_i;
	m12 *= a_i;
	m21 *= a_i;
	m22 *= a_i;
	return *this;
}

mat2x2 mat2x2::operator*(const float & a_f) const
{
	float temp[2][2];
	temp[0][0] = m11 * a_f;
	temp[0][1] = m12 * a_f;
	temp[1][0] = m21 * a_f;
	temp[1][1] = m22 * a_f;
	return mat2x2(temp);
}

mat2x2 & mat2x2::operator*=(const float & a_f)
{
	m11 *= a_f;
	m12 *= a_f;
	m21 *= a_f;
	m22 *= a_f;
	return *this;
}

mat2x2 mat2x2::operator*(mat2x2 & a_m2)
{
	vec2 v1 = m[0];
	vec2 v2 = m[1];
	vec2 v3 = vec2(a_m2.GetCol(1));
	vec2 v4 = vec2(a_m2.GetCol(2));
	float temp[2][2];
	temp[0][0] = v1.dot(v3);
	temp[0][1] = v1.dot(v4);
	temp[1][0] = v2.dot(v3);
	temp[1][1] = v2.dot(v4);	
	return mat2x2(temp);
}

mat2x2 & mat2x2::operator*=(mat2x2 & a_m2)
{
	vec2 v1 = m[0];
	vec2 v2 = m[1];
	vec2 v3 = vec2(a_m2.GetCol(1));
	vec2 v4 = vec2(a_m2.GetCol(2));
	m[0][0] = v1.dot(v3);
	m[0][1] = v1.dot(v4);
	m[1][0] = v2.dot(v3);
	m[1][1] = v2.dot(v4);
	return *this;
}

bool mat2x2::operator==(const mat2x2 & a_m2) const
{
	return (m11 == a_m2.m11 && m12 == a_m2.m12 &&
		m21 == a_m2.m21 && m22 == a_m2.m22);
}

bool mat2x2::operator!=(const mat2x2 & a_m2) const
{
	return (m11 != a_m2.m11 || m12 != a_m2.m12 ||
		m21 != a_m2.m21 || m22 != a_m2.m22);
}

mat2x2 mat2x2::Identity()
{
	return mat2x2(1,0,0,1);
}

mat2x2 mat2x2::Current()
{
	return mat2x2(m11, m12, m21, m22);
}

vec2 mat2x2::GetCol(int col)
{
	vec2 temp;
	switch (col)
	{
	case 1: temp = vec2(m11, m21);
		break;
	case 2: temp = vec2(m12, m22);
		break;
	}
	return temp;
}

vec2 mat2x2::GetRow(int row)
{
	return vec2(m[row-1]);
}

void mat2x2::SetCol(int col, vec2 val)
{
	switch (col)
	{
	case 1: m11 = val.x;
			m21 = val.y;
		break;
	case 2: m12 = val.x;
			m22 = val.y;
		break;
	}
}

void mat2x2::SetRow(int row, vec2 val)
{
	switch (row)
	{
	case 1: m11 = val.x;
			m12 = val.y;
		break;
	case 2: m21 = val.x;
			m22 = val.y;
		break;
	}
}

mat2x2 mat2x2::Transpose()
{
	mat2x2 temp ;
	temp.m11 = m11;
	temp.m12 = m21;
	temp.m21 = m12;
	temp.m22 = m22;
	return temp;
}

float mat2x2::Determinant()
{
	return (m11*m22)-(m12*21);
}

mat2x2 mat2x2::Adjoint()
{
	mat2x2 temp;
	temp.m11 = m22;
	temp.m12 = -m21;
	temp.m21 = -m12;
	temp.m22 = m11;
	return temp;
}

mat2x2 mat2x2::Inverse()
{
	mat2x2 inv = Adjoint()*(1 / Determinant());
	if ((inv * Current()) == Identity())
	{
		
		return inv;
	}
	else
	{
		return Current();
	}	
}
