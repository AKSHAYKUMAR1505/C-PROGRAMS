#include <math.h>
int main()
{
int p,r,n,t,a,b,c,d,e;
printf("enter the value of p: \n");
printf("enter the value of r: \n");
printf("enter the value of n: \n");
printf("enter the value of t: \n");
scanf("%d%d%d%d",&p,&r,&n,&t);
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
a=n+r/n;
b=pow(a,n);
c=pow(b,t);
d=p*c;
e=d-p;
printf("the value of compound interest:%d",e);
}
