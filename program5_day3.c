/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%.0f", fahrenheit);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program5_day3.c -o program5_day3.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program5_day3.out
0
Fahrenheit=32
C:\Users\Asus\OneDrive\Desktop\C FILES>program5_day3.out
100
Fahrenheit=212
C:\Users\Asus\OneDrive\Desktop\C FILES>