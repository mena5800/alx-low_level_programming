#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);

   s = "TutorialsPointm";
   f = "Pointk";
   t = _strstr(s, f);
   printf("%s\n", t);

   s = "Pointmkk";
   f = "Pkoint";
   t = _strstr(s, f);
   printf("%s\n", t);

   s = "Point";
   f = "kPoint";
   t = _strstr(s, f);
   printf("%s\n", t);

    return (0);
}
