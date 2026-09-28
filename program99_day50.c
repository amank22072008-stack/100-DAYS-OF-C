/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main()
{
    char date[11];

    scanf("%10s", date);

    printf("%c%c-Apr-%c%c%c%c",
           date[0], date[1],
           date[6], date[7], date[8], date[9]);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program99_day50.c -o program99_day50.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program99_day50.out
15/04/2025
15-Apr-2025
C:\Users\Asus\OneDrive\Desktop\C FILES>