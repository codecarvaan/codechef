#include<stdio.h>
#include<stdlib.h>
char tr()
{
    return 4;
}
int main()
{
    int a=4;
   char *p=(char *)&a;
   //char *p=tr();
    while(*p&1)
    {
        printf("working");
        break;
    }
            printf(tr());
    int j=*p&1;
    printf("%d",j);

    return 0;
}
