/*Q55: Write a program to print all the prime numbers from 1 to n.


Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main()
{
    int n, i, j, count;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program55_day28.c -o program55_day28.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program55_day28.out
10
2 3 5 7
C:\Users\Asus\OneDrive\Desktop\C FILES>program55_day28.out
20
2 3 5 7 11 13 17 19
C:\Users\Asus\OneDrive\Desktop\C FILES>