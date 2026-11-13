/*Q142: Store details of 5 students in an array of structures and print all.


Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\nName\tRoll\tMarks\n");
    printf("-----------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program142_day92.c -o program142_day92.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program142_day92.out
Enter details of student 1:
Enter Name: Aman
Enter Roll Number: 101
Enter Marks: 95
Enter details of student 2:
Enter Name: Jay
Enter Roll Number: 102
Enter Marks: 94
Enter details of student 3:
Enter Name: Vansh
Enter Roll Number: 103
Enter Marks: 93
Enter details of student 4:
Enter Name: Atul
Enter Roll Number: 104
Enter Marks: 92
Enter details of student 5:
Enter Name: Tejas
Enter Roll Number: 105
Enter Marks: 91

Name    Roll    Marks
-----------------------------
Aman    101     95.00
Jay     102     94.00
Vansh   103     93.00
Atul    104     92.00
Tejas   105     91.00

C:\Users\Asus\OneDrive\Desktop\C FILES>