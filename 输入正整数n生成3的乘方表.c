#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("please enter n:");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Input is not a positive integer.\n");
        return 1;
    } else {
    printf("Table of powers of 3:\n");
    for (int i = 0; i <= n; i++) {
        printf("pow(3, %d) = %.0f\n", i, pow(3, i));
    }
}
    return 0;

}