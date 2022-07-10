#include "header.h"
/*
* Фунція-вказівник.
*
* @param  відсутні вхідні параметри
* @param  відсутні вихідні параметри
* @return функція нічого не повертає
*/
int cmp(const void* a, const void* b)
{
    return *(const char*)a - *(const char*)b;
}