/* 
faith 
reg no.ct101/g/26530/25
programme .multiple_branches.c
*/#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0)); // Initialize random seed

    for(branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        for(floor = 0; floor < 5; floor++) {
            int occupied = 0;
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random occupancy
                if(chain[branch][floor][room] == 1)
                    occupied++;
            }
            totalOccupied += occupied;
            printf("Floor %d - Occupied rooms: %d, Vacant rooms: %d\n",
                   floor + 1, occupied, 10 - occupied);
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}