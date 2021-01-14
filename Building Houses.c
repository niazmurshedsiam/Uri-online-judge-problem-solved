#include<stdio.h>
int main(){
int A,B,C,s;
double area;
while(scanf("%d",&A)!='0'){

if(A==0)break;
scanf("%d %d",&B,&C);
area=A*B*100.0/C;
for(s=1;s*s<area;s++)

s--;
printf("%d\n",s);
}


}
