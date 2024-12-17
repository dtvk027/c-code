#include <stdio.h>
int main()
{
    int n, i;
    float a=0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        a = a+1.0/i;
    }
    printf("%.2f", a);
}
