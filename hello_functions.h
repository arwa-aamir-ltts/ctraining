#ifndef HELLO_FUNCTIONS_H

#define HELLO_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int add(int a, int b);
float temp_sensor_converter(int temp_ensor_value, bool *success);
float temp_c_to_f(float temp_C);

#endif
