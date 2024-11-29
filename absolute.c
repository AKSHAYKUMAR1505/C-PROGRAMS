#include <stdio.h>
int absolute();
int main() {
absolute();
}

int absolute(){
int a;
printf("enter the value : ");
scanf("%d",&a);
if (a<0) {
a=-1*a;
printf("%d\n",a);
} else {
printf("%d\n",a);
}
}

