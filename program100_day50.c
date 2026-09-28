/*Q100: Print all sub-strings of a string.


Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i; str[j] != '\0'; j++)
        {
            if(i != 0 || j != i)
                printf(",");

            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
        }
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program100_day50.c -o program100_day50.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program100_day50.out
abc
a,ab,abc,b,bc,c
C:\Users\Asus\OneDrive\Desktop\C FILES>