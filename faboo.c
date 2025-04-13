#include<stdio.h>
int main(){
 int a=0,b=1,c,i,n;
 printf("enter n value\n");
 scanf("%d",&n);
 printf("%d %d ",a,b);
 for(i=0;i<=n;i++){
 c=a+b;
 printf("%d ",c);
 a=b;
 b=c;
 }
 printf("fabonnaci series: ",c);
 return 0;
}
