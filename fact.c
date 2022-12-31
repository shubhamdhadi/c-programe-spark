#include<stdio.h>
main()
{
int i,n,fact=1;
printf("\n enter n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n fact=%d",fact);
  printf("welcome");
  
  
  add();
}
void add()
{
  int a,b,c;
  printf("\n enter a and b=");
  scanf("%d%d",a,b);
  c=a+b;
  printf("\n add=%d",c);
}
