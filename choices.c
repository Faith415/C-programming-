/*
name:faith415
reg no:CT101/I/26530/25
program:choices
*/
#include<stdio.h>
int main() {
int choice;
printf("select data bundle: \n");
printf("1. 100MB @ 50 KES\n");
printf("2. 500MB @ 200 KES\n");
printf("3. 1GB @ 350 KES\n");
printf("4. 2GB @ 600 KES\n");
printf("enter your choice(1-4): ");
scanf("%d", &choice);
switch(choice) {
    case 1:
    printf("you chose 100MB cost=50KES \n");
    break;
    case 2:
    printf("you chose 500MB cost=200KES\n");
    break;
    case 3:
    printf("you chose 1GB cost=350KES\n");
    break;
    case 4:
    printf("you chose 2GB cost=600KES\n");
    break;
    default:
    printf("invalid choice\n");
}
return 0;
}