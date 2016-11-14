#include "mat3x3.h"

mat3x3::mat3x3()
{
	m11 = 0; m12 = 0; m13 = 0;
	m21 = 0; m22 = 0; m23 = 0;
	m31 = 0; m32 = 0; m33 = 0;
}

mat3x3::mat3x3(float a_m11, float a_m12, float a_m13, float a_m21, float a_m22, float a_m23, float a_m31, float a_m32, float a_m33)
{
	m11 = a_m11;
	m12 = a_m12;
	m13 = a_m13;
	m21 = a_m21;
	m22 = a_m22;
	m23 = a_m23;
	m31 = a_m31;
	m32 = a_m32;
	m33 = a_m33;
}

mat3x3::mat3x3(float a_m3[3][3])
{
	m11 = m[0][0];
	m12 = m[0][1];
	m13 = m[0][2];
	m21 = m[1][0];
	m22 = m[1][1];
	m23 = m[1][2];
	m31 = m[2][0];
	m32 = m[2][1];
	m33 = m[2][2];
}

mat3x3::mat3x3(mat3x3 & a_m3)
{
	m11 = a_m3.m11;
	m12 = a_m3.m12;
	m13 = a_m3.m13;
	m21 = a_m3.m21;
	m22 = a_m3.m22;
	m23 = a_m3.m23;
	m31 = a_m3.m31;
	m32 = a_m3.m32;
	m33 = a_m3.m33;
}

mat3x3::~mat3x3()
{
}

mat3x3 mat3x3::operator+(const mat3x3 & a_m3) const
{
	float temp[3][3];
	temp[0][0] = m11 + a_m3.m11;
	temp[0][1] = m12 + a_m3.m12;
	temp[0][2] = m13 + a_m3.m13;
	temp[1][0] = m21 + a_m3.m21;
	temp[1][1] = m22 + a_m3.m22;
	temp[1][2] = m23 + a_m3.m23;
	temp[2][0] = m31 + a_m3.m31;
	temp[2][1] = m32 + a_m3.m32;
	temp[2][2] = m33 + a_m3.m33;
	return mat3x3(temp);
}

mat3x3 & mat3x3::operator+=(const mat3x3 & a_m3)
{
	m11 += a_m3.m11;
	m12 += a_m3.m12;
	m13 += a_m3.m13;
	m21 += a_m3.m21;
	m22 += a_m3.m22;
	m23 += a_m3.m23;
	m31 += a_m3.m31;
	m32 += a_m3.m32;
	m33 += a_m3.m33;
	return *this;
}

mat3x3 mat3x3::operator-(const mat3x3 & a_m3) const
{
	float temp[3][3];
	temp[0][0] = m11 - a_m3.m11;
	temp[0][1] = m12 - a_m3.m12;
	temp[0][2] = m13 - a_m3.m13;
	temp[1][0] = m21 - a_m3.m21;
	temp[1][1] = m22 - a_m3.m22;
	temp[1][2] = m23 - a_m3.m23;
	temp[2][0] = m31 - a_m3.m31;
	temp[2][1] = m32 - a_m3.m32;
	temp[2][2] = m33 - a_m3.m33;
	return mat3x3(temp);
}

mat3x3 & mat3x3::operator-=(const mat3x3 & a_m3)
{
	m11 -= a_m3.m11;
	m12 -= a_m3.m12;
	m13 -= a_m3.m13;
	m21 -= a_m3.m21;
	m22 -= a_m3.m22;
	m23 -= a_m3.m23;
	m31 -= a_m3.m31;
	m32 -= a_m3.m32;
	m33 -= a_m3.m33;
	return *this;
}

mat3x3 mat3x3::operator*(const int & a_i) const
{
	float temp[3][3];
	temp[0][0] = m11 * a_i;
	temp[0][1] = m12 * a_i;
	temp[0][2] = m13 * a_i;
	temp[1][0] = m21 * a_i;
	temp[1][1] = m22 * a_i;
	temp[1][2] = m23 * a_i;
	temp[2][0] = m31 * a_i;
	temp[2][1] = m32 * a_i;
	temp[2][2] = m33 * a_i;
	return mat3x3(temp);
}

mat3x3 & mat3x3::operator*=(const int & a_i)
{
	m11 *= a_i;
	m12 *= a_i;
	m13 *= a_i;
	m21 *= a_i;
	m22 *= a_i;
	m23 *= a_i;
	m31 *= a_i;
	m32 *= a_i;
	m33 *= a_i;
	return *this;
}

mat3x3 mat3x3::operator*(const float & a_f) const
{
	float temp[3][3];
	temp[0][0] = m11 * a_f;
	temp[0][1] = m12 * a_f;
	temp[0][2] = m13 * a_f;
	temp[1][0] = m21 * a_f;
	temp[1][1] = m22 * a_f;
	temp[1][2] = m23 * a_f;
	temp[2][0] = m31 * a_f;
	temp[2][1] = m32 * a_f;
	temp[2][2] = m33 * a_f;
	return mat3x3(temp);
}

mat3x3 & mat3x3::operator*=(const float & a_f)
{
	m11 *= a_f;
	m12 *= a_f;
	m13 *= a_f;
	m21 *= a_f;
	m22 *= a_f;
	m23 *= a_f;
	m31 *= a_f;
	m32 *= a_f;
	m33 *= a_f;
	return *this;
}

mat3x3 mat3x3::operator*(mat3x3 & a_m3)
{
	vec3 v1 = m[0];
	vec3 v2 = m[1];
	vec3 v3 = m[2];
	vec3 v4 = vec3(a_m3.GetCol(1));
	vec3 v5 = vec3(a_m3.GetCol(2));
	vec3 v6 = vec3(a_m3.GetCol(3));
	float temp[3][3];
	temp[0][0] = v1.dot(v4);
	temp[0][1] = v1.dot(v5);
	temp[0][2] = v1.dot(v6);
	temp[1][0] = v2.dot(v4);
	temp[1][1] = v2.dot(v5);
	temp[1][2] = v2.dot(v6);
	temp[2][0] = v3.dot(v4);
	temp[2][1] = v3.dot(v5);
	temp[2][2] = v3.dot(v6);
	return mat3x3(temp);
}

mat3x3 & mat3x3::operator*=(mat3x3 & a_m3)
{
	vec3 v1 = m[0];
	vec3 v2 = m[1];
	vec3 v3 = m[2];
	vec3 v4 = vec3(a_m3.GetCol(1));
	vec3 v5 = vec3(a_m3.GetCol(2));
	vec3 v6 = vec3(a_m3.GetCol(3));
	m[0][0] = v1.dot(v4);
	m[0][1] = v1.dot(v5);
	m[0][2] = v1.dot(v6);
	m[1][0] = v2.dot(v4);
	m[1][1] = v2.dot(v5);
	m[1][2] = v2.dot(v6);
	m[2][0] = v3.dot(v4);
	m[2][1] = v3.dot(v5);
	m[2][2] = v3.dot(v6);
	return *this;
}

bool mat3x3::operator==(const mat3x3 & a_m3) const
{
	return (m11 == a_m3.m11 && m12 == a_m3.m12 && m13 == a_m3.m13 &&
		m21 == a_m3.m21 && m22 == a_m3.m22 && m23 == a_m3.m23 &&
		m31 == a_m3.m31 && m32 == a_m3.m32 && m33 == a_m3.m33);
}

bool mat3x3::operator!=(const mat3x3 & a_m3) const
{
	return (m11 != a_m3.m11 || m12 != a_m3.m12 || m13 != a_m3.m13 &&
		m21 != a_m3.m21 || m22 != a_m3.m22 && m23 != a_m3.m23 &&
		m31 != a_m3.m31 || m32 != a_m3.m32 && m33 != a_m3.m33);
}

mat3x3 mat3x3::Identity()
{
	return mat3x3(1,0,0,0,1,0,0,0,1);
}

mat3x3 mat3x3::Current()
{
	return mat3x3(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

vec3 mat3x3::GetCol(int col)
{
	vec3 temp;
	switch (col)
	{
	case 1: temp = vec3(m11,m12,m13);
		break;
	case 2: temp = vec3(m31, m22, m23);
		break;
	case 3: temp = vec3(m31, m32, m33);
		break;
	}
	return temp;
}

vec3 mat3x3::GetRow(int row)
{
	return vec3(m[row-1]);
}

void mat3x3::SetCol(int col, vec3 val)
{
	switch (col)
	{
	case 1: m11 = val.x;
			m21 = val.y;
			m31 = val.z;
		break;
	case 2: m11 = val.x;
			m21 = val.y;
			m31 = val.z;
		break;
	case 3: m11 = val.x;
			m21 = val.y;
			m31 = val.z;
		break;
	}
}

void mat3x3::SetRow(int row, vec3 val)
{
	switch (row)
	{
	case 1: m11 = val.x;
		m21 = val.y;
		m31 = val.z;
		break;
	case 2: m11 = val.x;
		m21 = val.y;
		m31 = val.z;
		break;
	case 3: m11 = val.x;
		m21 = val.y;
		m31 = val.z;
		break;
	}
}

mat3x3 mat3x3::Transpose()
{
	mat3x3 temp;
	temp.m11 = m11 ;
	temp.m12 = m21 ;
	temp.m13 = m31 ;
	temp.m21 = m12 ;
	temp.m22 = m22 ;
	temp.m23 = m32 ;
	temp.m31 = m13 ;
	temp.m32 = m23 ;
	temp.m33 = m33 ;
	return temp;
}

float mat3x3::Determinant()
{
	return	( (m11 * ( (m22 * m33) - (m23 * m32) ) )
			- (m12 * ( (m21 * m33) - (m23 * m31) ) )
			+ (m13 * ( (m21 * m32) - (m22 * m31) ) ) );
}

mat3x3 mat3x3::Adjoint()
{
	mat3x3 temp;
	temp.m11 = (m22 * m33) - (m23 * m32);
	temp.m12 = 0 - (m21 * m33) - (m23 * m31);
	temp.m13 = (m21 * m32) - (m22 * m31);
	temp.m21 = 0 - (m12 * m33) - (m13 * m32);
	temp.m22 = (m11 * m33) - (m13 * m31);
	temp.m23 = 0 - (m11 * m32) - (m12 * m31);
	temp.m31 = (m12 * m23) - (m13 * m22);
	temp.m32 = 0 - (m11 * m23) - (m13 * m21);
	temp.m33 = (m11 * m22) - (m12 * m21);	
	return temp.Transpose();
}

mat3x3 mat3x3::Inverse()
{
	mat3x3 inv = ( Adjoint() * ( 1 / Determinant() ) );
	if ((inv * Current()) == Identity())
	{

		return inv;
	}
	else
	{
		return Current();
	}
}
