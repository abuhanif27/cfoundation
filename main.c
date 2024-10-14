#include "exercise/basic_statistics.c"

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    staticWizard(array, size);
    return 0;
}
