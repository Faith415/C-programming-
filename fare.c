/*
name:Faith
reg no:CT101/G/26530

🔹 Q2: calculateFare() Function
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));

    return 0;
}