/*
* @file     main.c
* @author   ������� �.�., ��. 515
* @date     2 ������ 2022
* @brief    ˳��� ��������.
*
*��������: ��������� ��������, �� �������� ��������.����� ������ ������������� � ����� �����.
*/
#include "header.h"
int main()
{
    srand(time(NULL));

    char mystring[300] = { 0 }, copystring[300];
    printf("Input line   : ");
    gets_s(mystring, 300);
    strcpy(copystring, mystring);

}