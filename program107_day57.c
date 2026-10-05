/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.


Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>

int main() {

    // Input 1
    int arr1[] = {1, 3, 2, 4};
    int n1 = 4;

    printf("Input 1: ");
    for (int i = 0; i < n1; i++) {
        int found = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr1[j] > arr1[i]) {
                found = arr1[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", found);
    }

    printf("\n");


    // Input 2
    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = 5;

    printf("Input 2: ");
    for (int i = 0; i < n2; i++) {
        int found = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr2[j] > arr2[i]) {
                found = arr2[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", found);
    }

    printf("\n");


    // Input 3
    int arr3[] = {1, 2, 3, 5};
    int n3 = 4;

    printf("Input 3: ");
    for (int i = 0; i < n3; i++) {
        int found = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr3[j] > arr3[i]) {
                found = arr3[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", found);
    }

    printf("\n");


    // Input 4
    int arr4[] = {5, 4, 3, 1};
    int n4 = 4;

    printf("Input 4: ");
    for (int i = 0; i < n4; i++) {
        int found = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr4[j] > arr4[i]) {
                found = arr4[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", found);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program107_day57.c -o program107_day57.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program107_day57.out
Input 1: -1, -1, 3, -1
Input 2: -1, -1, 8, 8, 8
Input 3: -1, -1, -1, -1
Input 4: -1, 5, 4, 3
C:\Users\Asus\OneDrive\Desktop\C FILES>