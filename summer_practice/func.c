#include "header.h"
/*
* 
*
* @param  - вхідні параметри
* @param  - вихідні параметри
* @return функція повертає a, b
*/
int cmp(const void* a, const void* b)
{
    return *(const char*)a - *(const char*)b;
}