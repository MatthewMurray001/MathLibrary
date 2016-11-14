#pragma once


#ifndef __MAT2X2_H__
#define __MAT2X2_H__

#include "mathLib.h"
#include "vec2.h"

class DLLEXPORT mat2x2
{
public:

	//constructors
	mat2x2();
	mat2x2(float a_m11, float a_m12, float a_m21, float a_m22);
	mat2x2(float a_m2[2][2]);
	mat2x2(mat2x2& a_m2);
	// destructor
	~mat2x2();

	// operator overloads
	mat2x2			operator +		(const mat2x2& a_m2) const;
	mat2x2&			operator +=		(const mat2x2& a_m2);
	mat2x2			operator -		(const mat2x2& a_m2) const;
	mat2x2&			operator -=		(const mat2x2& a_m2);
	mat2x2			operator *		(const int& a_i)const;
	mat2x2&			operator *=		(const int& a_i);
	mat2x2			operator *		(const float& a_f)const;
	mat2x2&			operator *=		(const float& a_f);
	mat2x2			operator *		(mat2x2& a_m2);
	mat2x2&			operator *=		(mat2x2& a_m2);
	bool			operator ==		(const mat2x2& a_m2)const;
	bool			operator !=		(const mat2x2& a_m2)const;

	
	// Identity
	mat2x2		Identity	();
	// returns current matrix
	mat2x2		Current		();
	// get col
	vec2		GetCol		(int col);
	// get row
	vec2		GetRow		(int row);
	// set col
	void		SetCol		(int col, vec2 val);
	// set row
	void		SetRow		(int row, vec2 val);
	// transpose
	mat2x2		Transpose	();
	// determinant
	float		Determinant	();
	// adjoint
	mat2x2		Adjoint		();
	// inverse
	mat2x2		Inverse		();

	// transform
	// rotate
	// scale


	// orthonormalise ?

	union
	{
		struct
		{
			float m11, m12;
			float m21, m22;
		};
		float m[2][2];
	};
};

#endif //__MAT2X2_H__
