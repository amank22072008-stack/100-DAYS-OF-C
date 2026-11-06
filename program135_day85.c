/*Q135: Assign explicit values starting from 10 and print them.


Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

enum Values {
    A = 10,
    B,
    C
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program135_day85.c -o program135_day85.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program135_day85.out
A=10
B=11
C=12

C:\Users\Asus\OneDrive\Desktop\C FILES>

