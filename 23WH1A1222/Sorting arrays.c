#include <stdio.h>
void main()
{
    int i, j, a, n, b[30];
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for (i = 0; i < n; ++i)
        scanf("%d", &b[i]);
    for (i = 0; i < n; ++i)
    {
      for (j = i + 1; j < n; ++j)
        {
          if (b[i] > b[j])
            {
                a =  b[i];
                b[i] = b[j];
                b[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", b[i]);
}
