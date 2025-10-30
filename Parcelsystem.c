#include <stdio.h>
#include <stdlib.h>

void push(int stack[], int *top, int size, int parcelID);
void pop(int stack[], int *top);
void display(int stack[], int top);

int main() {
    int size;
    printf("Enter number of parcels: ");
    scanf("%d", &size);

    int *stack = malloc(sizeof(int) * size);
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
int top = -1;
    int choice, parcelID;

    while (1) {
        printf("\n--- Parcel Storage System ---\n");
        printf("1. Add Parcel (Push)\n");
        printf("2. Remove Parcel (Pop)\n");
        printf("3. Display Parcels\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Parcel ID to add: ");
                scanf("%d", &parcelID);
                push(stack, &top, size, parcelID);
                break;

            case 2:
                pop(stack, &top);
                break;

            case 3:
                display(stack, top);
                break;

            case 4:
                free(stack);
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter 1–4.\n");
        }
    }
}

void push(int stack[], int *top, int size, int parcelID) {
    if (*top == size - 1)
        printf("Stack Overflow! Cannot add more parcels.\n");
    else {
        (*top)++;
        stack[*top] = parcelID;
        printf("Parcel ID %d added successfully.\n", parcelID);
    }
}

















