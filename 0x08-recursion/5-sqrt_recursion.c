#include "main.h"
/**
 * helperFunction - check if the sqrt of number exist
 * @num: number
 * @pSprt: Possible sqrt of number
 * Return: Sqrt of number ot -1 for error
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to fnd sqrt of
 * Retiurn: squareroot of n
 * -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
