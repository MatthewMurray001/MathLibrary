#pragma once

#ifndef __VEC4_H__
#define __VEC4_H__

#include "mathLib.h"

class DLLEXPORT vec4
{
public:

	// constructors & destructor
	vec4();
	vec4(float a_x, float a_y, float a_z, float a_w);
	vec4(const vec4& a_v4);
	vec4(float v4[4]);
	~vec4();

	// operator overloads
	vec4			operator +		(const vec4& a_v4) const;
	vec4&			operator +=		(const vec4& a_v4);
	vec4			operator -		(const vec4& a_v4) const;
	vec4&			operator -=		(const vec4& a_v4);
	vec4			operator *		(const float& a_fS)const;
	vec4&			operator *=		(const float& a_fS);
	vec4			operator *		(const int& a_iS)const;
	vec4&			operator *=		(const int& a_iS);
	bool			operator ==		(const vec4& a_v4) const;
	bool			operator !=		(const vec4& a_v4) const;
	friend vec4		operator *		(int a_iS, const vec4& a_v4)
	{
		return vec4(a_v4.x * a_iS, a_v4.y * a_iS, a_v4.z * a_iS, a_v4.w * a_iS);
	}
	friend vec4		operator *		(float a_fS, const vec4& a_v4)
	{
		return vec4(a_v4.x * a_fS, a_v4.y * a_fS, a_v4.z * a_fS, a_v4.w * a_fS);
	}

	// magnitude
	float	mag();
	// normalization
	vec4	norm();
	// dot product
	float	dot(vec4& a_v4);
	// vector projection
	vec4	proj(vec4& a_v4);

	// component variables
	/*union
	{
		struct
		{*/
			float x;
			float y;
			float z;
			float w;
		/*};
		struct
		{
			float r;
			float g;
			float b;
			float a;
		};
		struct
		{
			float i[4];
		};
	};*/

};

#endif //__VEC4_H__