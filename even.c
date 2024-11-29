#include <stdio.h>
int main() {
int i,n;
printf("enter the number upto which even number to be printed: ");
scanf("%d",&n);
for(i=2;i<=n;i=i+2){
printf("%d ",i);
}
}
