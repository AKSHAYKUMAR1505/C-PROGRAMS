#include <stdio.h>
int main() {
int n1,n2,n3,n4,i=1653;
n1=i%10;
printf("%d ",n1);
i=i/10;
n2=i%10;
printf("%d ",n2);
i=i/10;
n3=i%10;
printf("%d",n3);
i=i/10;
n4=i%10;
printf("%d\n",n4);
printf("%d%d%d%d\n",n1,n3,n2,n4);
}
