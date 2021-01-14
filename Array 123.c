#include<stdio.h>
int main(){
int i,j,n,a[72][72],l;
while(scanf("%d",&n)!=EOF){
        l=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)a[i][j]=1;
            else a[i][j]=3;
if (j==l)a[i][j]=2;
        }
        l--;
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
}


