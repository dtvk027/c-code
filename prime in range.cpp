#include <stdio.h>
int main()
{
    int n1, n2, c, i;
    printf("Enter the value of n1: ");
    scanf("%d", &n1);
    printf("Enter the value of n2: ");
    scanf("%d", &n2);
    for (; n1<=n2; n1++)
    {
        c = 0;
        for (i=2; i<n1; i++)
        {
            if (n1%i == 0){
            c+=1;
            break;
            }
        }
        if (c == 0)
        printf("%d\n", n1);
    }
}
