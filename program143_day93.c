/*Q143: Find and print the student with the highest marks.


Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/


#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[5];
    int n, i, max = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[max].name, s[max].marks);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program143_day93.c -o program143_day93.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program143_day93.out
3
Ravi 101 95
Sita 102 85
Aman 103 88
Topper: Ravi (Marks: 95)

C:\Users\Asus\OneDrive\Desktop\C FILES>