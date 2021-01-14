#include<stdio.h>
int main(){
double M[12][12],sum=0;
char O[2];
int i,j,m=1,n=11;
scanf("%s",&O);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%lf",&M[i][j]);
    }
}
for(i=0;i<5;i++)
{

    for(j=m;j<n;j++){
        sum+=M[i][j];

    }
    n++;
    m--;

}
if(O[0]="S")
{
    printf("%.1lf",sum);

}
else if(O[0]="M"){
    printf("%.1lf",sum/30.0);
}
}
