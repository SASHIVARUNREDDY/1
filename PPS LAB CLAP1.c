#include <stdio.h>
int main() {
    double n1;
    printf("Give a number to check its sign: ");
    scanf("%lf", &n1);
    if (n1 <= 0.0) {
        if (n1 == 0.0)
            printf("It is a 0.");
        else
            printf("A negative number.");
    } 
    else
        printf("A positive number.");
    return 0;
}

/*Out put:
Enter a number: 12.3
You entered a positive number.
*/
