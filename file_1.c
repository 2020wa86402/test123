#include <stdio.h>
int main() {
 
    int number1, number2, sum;
 
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
 
    // calculate the sum
    sum = number1 + number2;
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
//function added in branch1
int func_add(int c, int d)
{
        // i am in main branch
        // i am making this changes in
        // one more change
<<<<<<< HEAD
        return c+d;
=======
        return a+b;
>>>>>>> branch
}
