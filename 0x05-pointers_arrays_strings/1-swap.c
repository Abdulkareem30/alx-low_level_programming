#include "main.h"
/**
* swap - swap the value of two in
* @a: first int
* @b: second int
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
