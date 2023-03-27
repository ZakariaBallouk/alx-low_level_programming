#include "main.h"
#include <stdio.h>
/*
*
*function swap_int()
*used to swap two integers values
*main goes there
*
*
*
**/
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
