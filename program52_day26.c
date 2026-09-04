/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main()
{
    int rows[] = {1, 4, 5, 3, 1};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < rows[i]; j++)
        {
            printf("*\n");
        }

        if (i < n - 1)
            printf("\n");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program52_day26.c -o program52_day26.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program52_day26.out
*

*
*
*
*

*
*
*
*
*

*
*
*

*

C:\Users\Asus\OneDrive\Desktop\C FILES>