#include<stdio.h>
int sum(int a[],int n,int i)
{
    sum(a,n,i+1);
    int flag=0;
    return flag;

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
   {
    scanf("%d",a[i]);
   }
   int total=sum(a,n,0);
   printf("%d",total);
    return 0;
}