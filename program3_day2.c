/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program3_day2.c -o program3_day2.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program3_day2.out
5 10
Area=50, Perimeter=30
C:\Users\Asus\OneDrive\Desktop\C FILES>program3_day2.out
3 7
Area=21, Perimeter=20
C:\Users\Asus\OneDrive\Desktop\C FILES>

