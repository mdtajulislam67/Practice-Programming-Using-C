#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    int Rah=0;
    int Kar=0;
    for (int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            Rah++;
        }
        else
        {
            Kar++;
        }
    }
    if(Rah>Kar)
    {
        printf("Rahim Win\n");
    }
    else if(Kar>Rah)
    {
        printf("Karim Win\n");
    }
    else{
        printf("Draw\n");
    }
    return 0;
}