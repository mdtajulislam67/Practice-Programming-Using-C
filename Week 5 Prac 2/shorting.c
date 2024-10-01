#include<stdio.h>
int main()
{
    int n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for (int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>a[i])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}