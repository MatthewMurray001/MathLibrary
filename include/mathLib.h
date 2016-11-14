
/**
* DLL Export Define
* - This is a define for building this library as a DLL or as a static library
* - The syntax and meaning of this will be covered in class when we are covering
*   building a math library
**/
#ifdef MATH_DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#elif MATH_DLL
#define DLLEXPORT __declspec(dllimport)
#else
#define DLLEXPORT 
#endif

// TODO: reference additional headers your program requires here

#include "CoreMath.h"
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"
#include "mat2x2.h"
#include "mat3x3.h"