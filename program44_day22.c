/*44:Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2*i - 1) / (2*i - 2);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program44_day22.c -o program44_day22.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program44_day22.out
Enter n: 3
Approximate sum: 3.75
C:\Users\Asus\OneDrive\Desktop\C FILES>program44_day22.out
Enter n: 5
Approximate sum: 6.04
C:\Users\Asus\OneDrive\Desktop\C FILES>

