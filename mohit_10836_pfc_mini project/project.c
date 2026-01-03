#include <stdio.h>

// Function to display vehicle report
void displayReport(int vehicles[], int size) {
    int total = 0;

    printf("\n--- Toll Booth Vehicle Report ---\n");
    printf("Cars   : %d\n", vehicles[0]);
    printf("Buses  : %d\n", vehicles[1]);
    printf("Trucks : %d\n", vehicles[2]);
    printf("Bikes  : %d\n", vehicles[3]);

    // Calculate total vehicles
    for (int i = 0; i < size; i++) {
        total += vehicles[i];
    }

    printf("Total Vehicles Passed: %d\n", total);
}

int main() {
    int vehicles[4] = {0, 0, 0, 0}; // Step 1 & 2
    int n, choice;

    printf("Toll Booth Vehicle Count System\n");
    printf("--------------------------------\n");
    printf("Vehicle Type Mapping:\n");
    printf("0 - Car\n");
    printf("1 - Bus\n");
    printf("2 - Truck\n");
    printf("3 - Bike\n");

    printf("\nEnter number of vehicle entries: ");
    scanf("%d", &n);

    // Step 3 to 6
    for (int i = 0; i < n; i++) {
        printf("Enter vehicle type (0-3): ");
        scanf("%d", &choice);

        if (choice >= 0 && choice <= 3) {
            vehicles[choice]++;
        } else {
            printf("Invalid vehicle type! Try again.\n");
            i--; // repeat this entry
        }
    }

    // Step 7 & 8
    displayReport(vehicles, 4);

    return 0; // Step 10
}