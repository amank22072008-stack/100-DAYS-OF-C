/*Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main(void) {
	int numbers[100], n, sum = 0;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements:\n", n);
	for (int index = 0; index < n; index++) {
		scanf("%d", &numbers[index]);
		sum += numbers[index];
	}

	printf("Sum of array elements: %d\n", sum);

	return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program57_day29.c -o program57_day29.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program57_day29.out
Enter number of elements: 4
Enter 4 elements:
2 4 6 8
Sum of array elements: 20

C:\Users\Asus\OneDrive\Desktop\C FILES>program57_day29.out
Enter number of elements: 3
Enter 3 elements:
1 1 1
Sum of array elements: 3

C:\Users\Asus\OneDrive\Desktop\C FILES>

