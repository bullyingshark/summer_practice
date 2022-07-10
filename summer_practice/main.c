/*
* @file     main.c
* @author   Ганзера М.О., гр. 515
* @date     2 липень 2022
* @brief    Літня практика.
*
*Завдання: розробити програму, що створить анаграму.Букви повинні перемішуватись в межах слова.
*/
#include "header.h"
int main()
{
    srand(time(NULL));

    char mystring[300] = { 0 }, copystring[300];
    printf("Input line   : ");
    gets_s(mystring, 300);
    strcpy(copystring, mystring);

    for (char* c = strtok(mystring, " "); c; c = strtok(NULL, " "))
    {
        for (int i = strlen(c); i-- > 0;)
        {
            int j = rand() % (i + 1);
            char t = c[i];
            c[i] = c[j];
            c[j] = t;
        }
        printf("%s ", c);
    }
    puts("");

    for (char* c = strtok(copystring, " "); c; c = strtok(NULL, " "))
    {
        qsort(c, strlen(c), 1, cmp);
        printf("%s ", c);
    }
    puts("");
}