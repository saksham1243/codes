// program 12 pass by value and reference
#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Function to swap two numbers using pass by reference
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}