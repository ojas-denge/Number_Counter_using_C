//Program to count numbers till given value.
#include <stdio.h>
int main () {
    int n1, n2;
    
    printf("Enter a number:\n");
    scanf("%d", &n2);
    
    for (n1=0; n1<=n2; n1++) {
        printf("%d\n", n1);
    }
    return 0;
} 