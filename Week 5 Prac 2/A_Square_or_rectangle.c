#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
    int w,h;
    scanf("%d %d",&w,&h);
    if(w==h)
    {
        printf("Square");
    }
    else
    {
        printf("Rectangle");
    }
    printf("\n");
    }
    
    return 0;
}