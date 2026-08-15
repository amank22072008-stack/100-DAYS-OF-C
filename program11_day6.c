/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.


Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program11_day6.c -o program11_day6.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program11_day6.out
Enter an integer: 7
7 is odd
C:\Users\Asus\OneDrive\Desktop\C FILES>program11_day6.out
Enter an integer: 12
12 is even
C:\Users\Asus\OneDrive\Desktop\C FILES>