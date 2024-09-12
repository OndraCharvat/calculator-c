#include <stdio.h>


float calculator(int value1, char symbol, int value2) {
    if (symbol == '+') {
        return value1 + value2;
    } else if (symbol == '-') {
        return value1 - value2;
    } else if (symbol == '*') {
        return value1 * value2;
    } else if (symbol == '/') {
        return value1 / value2;
    } else {
        fprintf(stderr, "Unkown symbol '%c'\n", symbol);
    }
}

int main(void) {
    float input1, input2;
    char symbol;
    scanf("%f %c %f", &input1, &symbol, &input2);
    printf("%.2f\n", calculator(input1, symbol, input2));
}
