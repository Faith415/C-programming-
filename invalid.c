/*
name:faith.c
reg no:CT101/G/26530/25
programme:invalid 
*/
#include<stdio.h>
int main() {
    int choice;
printf("===============================\n");
printf("| option | Bundle | Cost(KES) |\n");
printf("========= ======== ============\n");
printf("| 1      | 100MB  | 50        |\n");
printf("--------- -------- ------------\n");
printf("| 2      |500MB   | 200       |\n");
printf("--------- -------- ------------\n");
printf("| 3      | 1GB    | 350       |\n");
printf("--------- -------- ------------\n");
printf("| 4      | 2GB    | 600       |\n");
printf("-------------------------------\n");
printf("enter your choice(1-4)\n");
scanf("%d", &choice);
switch (choice) {
    case 1:
    printf("you selected 100 MB cost 50KES\n");
    break;
    case 2:
    printf("you selected 500MB cost 200KES\n");
    break;
    case 3:
    printf("you selected 1GB cost 350KES\n");
    break;
    case 4:
    printf("you selected 2GB cost 600KES\n");
    break;
    default:
    printf("invalid choice!\n");
}
return 0;
}