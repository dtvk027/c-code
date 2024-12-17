#include <stdio.h>
int main() {
    int n, b=0, i=1, x;
    printf("Enter the decimal number: ");
    scanf("%d", &n) ;
    if (n == 0) {
        printf("0");
    }
	else {
        while (n > 0) {
            x = n % 2;
            b = x * i + b;
            n = n / 2;
            i *= 10;
        }
        printf("%d", b);
    }
}
