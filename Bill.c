#include<stdio.h>
int main(){
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&j);
    if(j%2==0)printf("0\n");
    else printf("1\n");
}
}
