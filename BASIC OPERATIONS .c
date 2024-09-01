#include <stdio.h>

#define SIZE 100  // Define maximum size of the array

void insert(int arr[], int *n, int pos, int value) {
    if (*n >= SIZE) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }
    
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    if (pos >= *n || pos < 0) {
        printf("Invalid position. Deletion not possible.\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void update(int arr[], int pos, int value) {
    if (pos >= 0 && pos < *n) {
        arr[pos] = value;
    } else {
        printf("Invalid position. Update not possible.\n");
    }
}

void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];
    int n = 0; // Current number of elements in the array
    int choice, pos, value;

    while (1) {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Update\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position (0-based index) where you want to insert: ");
                scanf("%d", &pos);
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insert(arr, &n, pos, value);
                break;
            case 2:
                printf("Enter the position (0-based index) of the element to delete: ");
                scanf("%d", &pos);
                delete(arr, &n, pos);
                break;
            case 3:
                printf("Enter the position (0-based index) of the element to update: ");
                scanf("%d", &pos);
                printf("Enter the new value: ");
                scanf("%d", &value);
                update(arr, pos, value);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
