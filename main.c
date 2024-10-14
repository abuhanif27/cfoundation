#include "exercise/decimalToBinary.c"

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
    return 0;
}
