#pragma once

#ifndef __MAT3X3_H__
#define __MAT3X3_H__

#include "mathLib.h"
#include "vec3.h"

class DLLEXPORT mat3x3
{
public:
	//constructors
	mat3x3();
	mat3x3(float a_m11, float a_m12, float a_m13
		, float a_m21, float a_m22, float a_m23
		, float a_m31, float a_m32, float a_m33);
	mat3x3(float a_m3[3][3]);
	mat3x3(mat3x3& a_m3);
	//destructor
	~mat3x3();

	// operator overloads
	mat3x3			operator +		(const mat3x3& a_m3) const;
	mat3x3&			operator +=		(const mat3x3& a_m3);
	mat3x3			operator -		(const mat3x3& a_m3) const;
	mat3x3&			operator -=		(const mat3x3& a_m3);
	mat3x3			operator *		(const int& a_i)const;
	mat3x3&			operator *=		(const int& a_i);
	mat3x3			operator *		(const float& a_f)const;
	mat3x3&			operator *=		(const float& a_f);
	mat3x3			operator *		(mat3x3& a_m3);
	mat3x3&			operator *=		(mat3x3& a_m3);
	bool			operator ==		(const mat3x3& a_m3)const;
	bool			operator !=		(const mat3x3& a_m3)const;


	//void SetArr();
	mat3x3		Identity	();
	mat3x3		Current		();
	vec3		GetCol		(int col);
	vec3		GetRow		(int row);
	void		SetCol		(int col, vec3 val);
	void		SetRow		(int row, vec3 val);
	mat3x3		Transpose	();
	float		Determinant	();
	mat3x3		Adjoint		();
	mat3x3		Inverse		();

	union
	{
		struct 
		{
			float	m11, m12, m13,
					m21, m22, m23,
					m31, m32, m33;
		};
		float m[3][3];
	};
	
};

#endif //__MAT3X3_H__
