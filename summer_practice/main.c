/*
* @file     main.c
* @author   Ганзера М.О., гр. 515
* @date     2 липень 2022
* @brief    Літня практика.
*
* Завдання: розробити програму, що створить анаграму.Букви повинні перемішуватись в межах слова.
*/
#include "header.h"
int main()
{
    srand(time(NULL)); //оголошення таймеру

    char mystring[300] = { 0 }, copystring[300]; //оголошення рядку
    printf("Input line   : "); //введеня рядку
    gets_s(mystring, 300); 
    strcpy(copystring, mystring);
}