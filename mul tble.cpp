#include <stdio.h>
int main()
{
    int n1, n2, i;
    printf("Enter the value of n1: ");
    scanf("%d", &n1);
    printf("Enter the value of n2: ");
    scanf("%d", &n2);
    for (; n1<=n2; n1++)
    {
      for (i=1; i<=10; i++)
      {
        printf("%d x %d = %d\n", n1, i, n1*i);
      }
    }
}
