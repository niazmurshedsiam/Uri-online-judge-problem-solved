#include<stdio.h>
int main()
{
    double N[12][12],sum=0;
    char O[2];
    scanf("%s",&O);
    int n=10,m=1,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 0;i < 5;i++){

        for(j = m;j <= n;j++){
            sum += N[i][j];
        }
        n--;
        m++;
    }
    if (O[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);
    return 0;
}

