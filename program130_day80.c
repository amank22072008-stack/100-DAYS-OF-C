/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Open file for writing */
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    /* Write student records */
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for Student %d: ", i + 1);
        scanf("%49s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    /* Open file for reading */
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    /* Read and display records */
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program130_day80.c -o program130_day80.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program130_day80.out
Enter number of students: 2
Enter name, roll number and marks for Student 1: Asha 101 85
Enter name, roll number and marks for Student 2: Ravi 102 92
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

C:\Users\Asus\OneDrive\Desktop\C FILES>