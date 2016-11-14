#pragma once

#ifndef __VEC3_H__
#define __VEC3_H__

#include "mathLib.h"

class DLLEXPORT vec3
{
public:

	vec3();
	vec3(float a_x, float a_y, float a_z);
	vec3(const vec3& a_v3);
	vec3(float v3[3]);
	~vec3();

	// operator overloads
	vec3			operator +		(const vec3& a_v3) const;
	vec3&			operator +=		(const vec3& a_v3);
	vec3			operator -		(const vec3& a_v3) const;
	vec3&			operator -=		(const vec3& a_v3);
	vec3			operator *		(const float& a_fS)const;
	vec3&			operator *=		(const float& a_fS);
	vec3			operator *		(const int& a_iS)const;
	vec3&			operator *=		(const int& a_iS);
	bool			operator ==		(const vec3& a_v3) const;
	bool			operator !=		(const vec3& a_v3) const;
	friend vec3		operator *		(int a_iS, const vec3& a_v3)
	{
		return vec3(a_v3.x * a_iS, a_v3.y * a_iS, a_v3.z * a_iS);
	}
	friend vec3		operator *		(float a_fS, const vec3& a_v3)
	{
		return vec3(a_v3.x * a_fS, a_v3.y * a_fS, a_v3.z * a_fS);
	}

	// magnitude
	float	mag();
	// normalization
	vec3	norm();
	// cross product
	vec3	cross	(vec3& a_v3);
	// dot product
	float	dot(vec3& a_v3);
	// vector projection
	vec3	proj(vec3& a_v3);

	// component variables
	/*union
	{
		struct
		{*/
			float x;
			float y;
			float z;
		/*};
		struct
		{
			float r;
			float g;
			float b;
		};
		struct
		{
			float i[3];
		};
	};*/

};

#endif //__VEC3_H__