#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char a[60],b[60];
        scanf("%s %s",a,b);

        int alen = strlen(a);
        int blen = strlen(b);
        int mx;
        if(alen>blen) mx = alen;
        else mx = blen;

        for(int i=0;i<mx;i++){
            if(i<alen){
                printf("%c",a[i]);
            }
            if(i<blen){
                printf("%c",b[i]);
            }
        }
        printf("\n");
    }        
              
    return 0;
}