/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (sum == original) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program33_day17.c -o program33_day17.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program33_day17.out
Enter a number: 153
Armstrong
C:\Users\Asus\OneDrive\Desktop\C FILES>program33_day17.out
Enter a number: 123
Not Armstrong
C:\Users\Asus\OneDrive\Desktop\C FILES>