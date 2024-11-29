#include <stdio.h>
int square();
int main() {
int a,s,r;
square();
}

int square() {
int a,s;
printf("enter the number to be squared: ");
scanf("%d",&a);
s=a*a;
printf("%d\n",s);
}
