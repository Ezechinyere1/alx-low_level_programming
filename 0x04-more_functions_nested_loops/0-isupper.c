#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
=======
* _isupper - checks for uppercase character
* @c: Variable text
* @x: The number to be checked
*
* Return: 1 for upper letter or 0 for any else
*/
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
>>>>>>> 0079e61d4b0c90db4a23150e809f47c1e7c8d130
	{
		return (1);
	}
	
                return (0);       
}
