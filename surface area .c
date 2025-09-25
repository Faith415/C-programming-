/*
name:Faithe Achieng
reg no:CT101/G/26530
unit:programming
#include<studio.h>
*/
//volume and surface area
#define pi 3.141592
int main () {
// surface area and volume
 double radius,height,volume,area;
 printf("enter radius :\n");// input radius
 scanf("%lf",&radius);
    printf("enter height:\n");
    scanf("%lf",&height);
    volume = pi*radius*radius*height;
    printf("volume is:%lf\n",volume);
    area =2*pi*radius*radius + 2*pi*radius *height;
    printf("area is :% 2lf \n",area);
    return 0;
    }