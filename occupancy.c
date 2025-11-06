/* 
faith 
reg no.ct101/g/26530/25
programme .occupancy.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0)); // Seed random number generator

    printf("Room Occupancy (1 = occupied, 0 = vacant)\n\n");

    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", floor + 1);
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Randomly assign 0 or 1
            printf("%d ", occupancy[floor][room]);
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf(" | Occupied: %d, Vacant: %d\n", occupied, vacant);
    }

    return 0;
}