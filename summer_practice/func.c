#include "header.h"
/*
* 
*
* @param  - ����� ���������
* @param  - ������ ���������
* @return ������� ������� a, b
*/
int cmp(const void* a, const void* b)
{
    return *(const char*)a - *(const char*)b;
}