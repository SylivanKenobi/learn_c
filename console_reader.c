#include<stdio.h>

char getOperator()
{
    char operator;
    printf("+-*/??\n");
    scanf("%c", &operator);
    return operator;
}

float getNumber()
{   
    float number;
    printf("number?");
    scanf("%f", &number);
    return number;
}

int main(void) 
{
    char operator = getOperator();
    float numberOne = getNumber();
    float numberTwo = getNumber();
    switch (operator)
    {
    case '+':
        printf("%f\n", numberOne + numberTwo);
        break;
    case '-':
        printf("%f\n", numberOne - numberTwo);
        break;
    case '*':
        printf("%f\n", numberOne * numberTwo);
        break;
    case '/':
        printf("%f\n", numberOne / numberTwo);
    }
    return 0;
}
