#pragma once

#ifndef __COREMATH_H__
#define __COREMATH_H__

#include "mathLib.h"

class DLLEXPORT CoreMath
{
public:
	const float PI = 3.14159265359f;
	const float TWOPI = 6.28318530717958657692f;
	const float HALFPI = 1.57079632679489661923f;
	const float TREEHALFPI = 4.71238898038468985769f;

	const float EPSILON = 0.00000000001f;
	const float DEG2RAD = 0.01745329251994329577f;
	const float RAD2DEG = 57.2957795130823208768f;

	// quick fix so that Sprite::Update will work
	struct temp4x4
	{
		temp4x4(float a_11, float a_12, float a_13, float a_14,
			float a_21, float a_22, float a_23, float a_24,
			float a_31, float a_32, float a_33, float a_34,
			float a_41, float a_42, float a_43, float a_44);
		
		union
		{
			struct
			{
				float
					m11, m12, m13, m14,
					m21, m22, m23, m24,
					m31, m32, m33, m34,
					m41, m42, m43, m44;
			};
			struct
			{
				float m[16];
			};

		};
	};

};

#endif //__COREMATH_H__