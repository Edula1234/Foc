#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    int* array;

    // Getting the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Dynamically allocating memory for the array
    array = (int*)malloc(num_elements * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Getting array elements from the user
    printf("Enter the elements:\n");
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Freeing the dynamically allocated memory
    free(array);

    return 0;
}
//output 
Enter the number of elements: 5
Enter the elements:
10
20
30
40
50
Array elements: 10 20 30 40 50
