#pragma once

#ifndef __VEC2_H__
#define __VEC2_H__

#include "mathLib.h"

class DLLEXPORT vec2
{
public:

	vec2	();
	vec2	(float a_x, float a_y);
	vec2	(const vec2& a_v2);
	vec2	(float v2[2]);
	~vec2	();

	// operator overloads
	vec2			operator +		(const vec2& a_v2) const;
	vec2&			operator +=		(const vec2& a_v2);
	vec2			operator -		(const vec2& a_v2) const;
	vec2&			operator -=		(const vec2& a_v2);
	vec2			operator *		(const float& a_fS)const;
	vec2&			operator *=		(const float& a_fS);
	vec2			operator *		(const int& a_iS)const;
	vec2&			operator *=		(const int& a_iS);
	bool			operator ==		(const vec2& a_v2) const;
	bool			operator !=		(const vec2& a_v2) const;
	friend vec2		operator *		(int a_iS, const vec2& a_v2) 
	{
		return vec2(a_v2.x * a_iS, a_v2.y * a_iS);
	}
	friend vec2		operator *		(float a_fS, const vec2& a_v2)
	{
		return vec2(a_v2.x * a_fS, a_v2.y * a_fS);
	}

	// magnitude
	float	mag		();
	// normalization
	vec2	norm	();
	// dot product
	float	dot		(vec2& a_v2);
	// vector projection
	vec2	proj	(vec2& a_v2);

	// component variables
	/*union
	{
		struct
		{*/
			float x;
			float y;
		/*};
		struct
		{
			float u;
			float v;
		};
		struct
		{
			float i[2];
		};
	};*/
	
};

#endif //__VEC2_H__