/*
 * File: 3-op_functions.c
 * Author: Chidiadi E. Nwosu
 */

#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - returns the difference of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}



/**
 * op_mul - returns the multiplication of a by b
 * @a: first operand
 * @b: second operand
 *
 * Return: a multiply by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}




/**
 * op_div - returns the division of a by b
 * @a: first operand
 * @b: second operand
 *
 * Return: a divide b
 */
int op_div(int a, int b)
{
	return (a / b);
}



/**
 * op_mod - returns the modulus of a by b
 * @a: first operand
 * @b: second operand
 *
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
