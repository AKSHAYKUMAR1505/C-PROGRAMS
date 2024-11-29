#include <stdio.h>
void fact();
int main() {
fact();
}

void fact() {
int num=0,f=1,n=5;
while(num<=n-1)
{
f=f+f*num;
num++;
}
}
