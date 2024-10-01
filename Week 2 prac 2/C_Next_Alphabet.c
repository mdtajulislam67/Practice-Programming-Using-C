#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    char sum=x+1;
    if(x>='a' && x<'z')
    {
        printf("%c",sum);
    }
    else if(x=='z'){
        printf("%c",x-25);
    }

    return 0;
}