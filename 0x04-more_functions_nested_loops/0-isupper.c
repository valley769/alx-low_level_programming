#include "main.h"
/**
  * _isupper - check if a letter is upper
  * @x: The number to be checked 
  *
  *Return: 1 for upper letter or 0 for any else
  */
int _isupper(int x)
{
    if (x >= 65 && x <= 90)  /* ASCII values for A and Z */
    {
        return 1;  /* c is an uppercase character */
    }
    else
    {
        return 0;
	}
}
