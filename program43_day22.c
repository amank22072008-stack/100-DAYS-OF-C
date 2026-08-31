/*43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main()
{
    int n, temp, digit, fact, sum = 0, i;

    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
    {
        if (n == 145)
        {
            printf("Strong number");
        }
        else
        {
            printf("Strong number");
        }
    }
    else
    {
        if (sum != n)
        {
            printf("Not strong number");
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program43_day22.c -o program43_day22.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program43_day22.out
145
Strong number
C:\Users\Asus\OneDrive\Desktop\C FILES>program43_day22.out
123
Not strong number
C:\Users\Asus\OneDrive\Desktop\C FILES>