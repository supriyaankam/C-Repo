#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int l,r,c=0,i;
        scanf("%d%d",&l,&r);
        for(i=l;i<=r;i++){
            if(i%10==2||i%10==3||i%10==9){
                c++;
            }
        }
	 printf("%d",c);
	 printf("\n");
    }       
}
