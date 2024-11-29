#include <stdio.h>
int square();
int main() {
square();
}

int square() {
int a,s,m,i=1,b;
printf("enter the number for which multiples to be printed: ");
scanf("%d",&b);
printf("enter the number of multiple to be printed: ");
scanf("%d",&a);
while(i<=a){
m=b*i;
i++;
printf("%d\n",m);
}
}
