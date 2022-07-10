#include "header.h"
/*
* Pointer function.
*
* @param missing input parameters
* @param missing output parameters
* @return function returns nothing
*/
int cmp(const void* a, const void* b)
{
    return *(const char*)a - *(const char*)b;
}

char mystring[300] = { 0 }, copystring[300]; //string declaration

char replace1() {
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
        return c;
    }
}

char replace2() {
    for (char* c = strtok(copystring, " "); c; c = strtok(NULL, " "))
    {
        qsort(c, strlen(c), 1, cmp);
        printf("%s ", c);
        return c;
    }
}