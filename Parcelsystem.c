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
