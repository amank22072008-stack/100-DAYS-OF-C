/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.


Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int main()
{
    int n, i, j, count, found = 0;
    int nums[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            printf("%d", nums[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program105_day55.c -o program105_day55.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program105_day55.out
3
3 2 3
3
C:\Users\Asus\OneDrive\Desktop\C FILES>program105_day55.out
7
2 2 1 1 1 2 2
2
C:\Users\Asus\OneDrive\Desktop\C FILES>program105_day55.out
8
2 2 1 1 1 2 2 3
-1
C:\Users\Asus\OneDrive\Desktop\C FILES>