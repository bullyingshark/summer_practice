/*
* @file main.c
* @author Ganzera M.O., gr. 515
* @date July 2, 2022
* @brief Summer internship.
*
* Task: develop a program that will create an anagram. The letters must be mixed within the word.
*/
#include "header.h"
int main()
{
    srand(time(NULL)); //timer announcement

    char mystring[300] = { 0 }, copystring[300]; //string declaration
    printf("Input line   : "); //line input
    gets_s(mystring, 300); 
    strcpy(copystring, mystring);
}