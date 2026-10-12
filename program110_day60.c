/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program110_day60.c -o program110_day60.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program110_day60.out
Enter array size: 9
Enter array elements: 1 2 3 1 4
5 2 3 6
Enter k: 3
3 3 4 5 5 5 6
C:\Users\Asus\OneDrive\Desktop\C FILES>program110_day60.out
Enter array size: 5
Enter array elements: 5 1 3 4 2
Enter k: 1
5 1 3 4 2
C:\Users\Asus\OneDrive\Desktop\C FILES>