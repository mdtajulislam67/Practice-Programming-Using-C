#include<stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    int sum=a+b;
    printf("%lld + %lld = %d\n", a,b,sum);

    int sub=a-b;
    printf("%lld - %lld = %d\n", a,b,sub);

    int mul=a*b;
    printf("%lld * %lld = %d\n", a,b,mul);

    float div=a*1.0/b;
    printf("%lld / %lld = %0.2f\n", a,b,div);

    return 0;
}