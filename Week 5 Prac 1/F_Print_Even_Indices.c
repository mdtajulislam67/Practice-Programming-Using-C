#include<stdio.h>

void fun(int n,int a[],int i)
{
    if(i==n) return;
    fun(a,n,i+1);
    if(a[i]%2==0)
    {
        printf("%d",a[i]);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(n,a,0);
            
              
    return 0;
}