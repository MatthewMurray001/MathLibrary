#include "CoreMath.h"

CoreMath::temp4x4::temp4x4(float a_11, float a_12, float a_13, float a_14, float a_21, float a_22, float a_23, float a_24, float a_31, float a_32, float a_33, float a_34, float a_41, float a_42, float a_43, float a_44)
{
	m11 = a_11; m12 = a_12;	m13 = a_13;	m14 = a_14;
	m21 = a_21;	m22 = a_22;	m23 = a_23;	m24 = a_24;
	m31 = a_31;	m32 = a_32;	m33 = a_33;	m34 = a_34;
	m41 = a_41;	m42 = a_42;	m43 = a_43;	m44 = a_44;
}