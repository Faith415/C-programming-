/*
name:Faith
reg no:CT101/G/26530/25
programme :eligibility
*/
#include<stdio.h>
int main() {
int attendance, marks;
printf("enter percentage attendance: \n");
scanf("%d", &attendance);
printf("enter average marks: \n");
scanf("%d", &marks);
if(attendance>70 && marks>40) {
    printf("elligible");
}else{
    printf("not elligible");
}
return 0;
}