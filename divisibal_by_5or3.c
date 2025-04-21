#include <stdio.h>

int main()
 {
 
 	
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 15 == 0) {
        printf("num divisible by 5");
    } else {
        printf("num is NOT divisible by 5");
    }

}
