#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]<a[j])
          {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }  
        
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        if(a[i]>0)
        {
        sum+=a[i];
        }
        
    }
    printf("%lld",sum);
    
    return 0;
}