/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, num, den;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = 2 * i;
        den = 4 * i - 1;

        if(i <= n)
        {
            sum = sum + (num / den);
        }
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program45_day23.c -o program45_day23.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program45_day23.out
3
Approximate sum: 1.78
C:\Users\Asus\OneDrive\Desktop\C FILES>program45_day23.out
5
Approximate sum: 2.84
C:\Users\Asus\OneDrive\Desktop\C FILES>