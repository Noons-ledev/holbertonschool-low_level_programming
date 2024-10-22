#include "main.h"
/**
* _isalpha- Checks for lower or uppercase
* Description : Checks for alphanumeric
* Return: Always return 1 for lowercase (true)
*/
int _isalpha(int b)
{
return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}
