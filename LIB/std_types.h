#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef signed long long int s64;

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef unsigned long long int u64;

typedef float f32;
typedef double f64;
typedef long double f96;

#define NULL 	((void *)0)

typedef enum
{
    STD_TYPES_NOK=0,
    STD_TYPES_OK=1

}ERROR_enumSTATE;

#endif