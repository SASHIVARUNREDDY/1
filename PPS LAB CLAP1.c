#include <stdio.h>
int main() {
    double n1;
    printf("Give a number to check its sign: ");
    scanf("%lf", &n1);
    if (n1 <= 0.0) {
        if (n1 == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");
    return 0;
}

/*Out put:
Enter a number: 12.3
You entered a positive number.
*/
