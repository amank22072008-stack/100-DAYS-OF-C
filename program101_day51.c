/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.


Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

// Function to find the first occurrence of the target using binary search
int findFirst(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            first = mid;     // Potential answer found
            high = mid - 1;  // Keep searching on the left side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of the target using binary search
int findLast(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            last = mid;      // Potential answer found
            low = mid + 1;   // Keep searching on the right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    // Read array size
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int nums[n];

    // Read array elements
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read target element
    printf("Enter target element: ");
    scanf("%d", &target);

    // Find indices
    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    // Print result
    printf("\nOutput:\n%d,%d\n", first, last);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program101_day51.c -o program101_day51.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program101_day51.out
Enter number of elements: nums = [5,7,7,8,8,10], target = 8

C:\Users\Asus\OneDrive\Desktop\C FILES>program101_day51.out
Enter number of elements: nums = [5,7,7,8,8,10], target = 6

C:\Users\Asus\OneDrive\Desktop\C FILES>program101_day51.out
Enter number of elements: nums = [5,7,7,8,8,10], target = 10

C:\Users\Asus\OneDrive\Desktop\C FILES>