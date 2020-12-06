/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>
double do_cm_m(double input1);
double do_km_m(double input1);
double do_miles_km(double input1);
double do_miles_m(double input1);
double do_km_miles(double input1);

int area_circle(float a);
int area_square(int a1);
int area_triangle(int h, int b);
int area_rectangle(int a1, int b);
int perimeter_square(int a1);
int perimeter_triangle(int a1, int b, int c);
int perimeter_rectangle(int l, int w);
int perimeter_circle(float r);
int celsius_fahrenheit(float c1);
int celsius_kelvin(float c1);
int fahrenheit_celsius(float f);
int fahrenheit_kelvin(float f);
int kelvin_celsius(float k);
int kelvin_fahrenheit(float k);
float do_cm_m(float input1);
float do_km_m(float input1);
float do_miles_km(float input1);
float do_miles_m(float input1);
float do_km_miles(float input1);

#endif  /* #define __CALCULATOR_H__ */
