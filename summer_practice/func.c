#include "header.h"
/*
* ������-��������.
*
* @param  ������ ����� ���������
* @param  ������ ������ ���������
* @return ������� ����� �� �������
*/
int cmp(const void* a, const void* b)
{
    return *(const char*)a - *(const char*)b;
}