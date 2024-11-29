#include <stdio.h>
int display();
int main() {
int marks[5]={99,29,17,38,49};
display(marks);
}
int display(int marks[]){
int i;
for(i=0;i<=4;i++){
printf("%d\t",marks[i]);
}}

