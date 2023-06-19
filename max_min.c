#include <stdio.h>

int main() {
    int magic[] = {10, 5, 20, 15, 8, 25, 30, 40, 45, 100};
    int num_elements = sizeof(magic) / sizeof(int);  
    int max = magic[0];  
    int min = magic[0];  
    for (int i = 1; i < num_elements; i++) {
        if (magic[i] > max) {
            max = magic[i];
        }
        if (magic[i] < min) {
            min = magic[i];
        }
    }
    printf("The maximum number in the array is: %d\n", max);
    printf("The minimum number in the array is: %d\n", min);
    
    return 0;
}
