#include<stdio.h>
int main()
{
	int i,a[i];
    int b[i];
    int x=0,y=0;
    scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            x++;
        }
        else if(a[i]<b[i]){
            y++;
        }
    }
    printf("%d %d",x,y);
}
