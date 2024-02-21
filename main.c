#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b,c,d;
    b=++a;
    c=a--;
    d=++a;
    printf("%d,%d,%d,%d",a,b,c,d);
    return 0;
}
