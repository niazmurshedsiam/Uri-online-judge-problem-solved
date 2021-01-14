#include<stdio.h>
int main()
{
    int C,i,b;
    char str[100];
    scanf("%d",&C);
    for(i = 0;i < C;i++){
        scanf("%s %d",str,&b);
        if(!strcmp(str, "Thor"))printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
