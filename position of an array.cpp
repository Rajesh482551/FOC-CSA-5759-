#include <stdio.h>
int main()
 {
  int n, i, a[100];
  printf("Enter size of array: ");
  scanf("%d", &n);
  printf("Enter elements: ");
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  printf("Enter position: ");
   for (i = 0; i < n; i++)
    {
      printf("Found at position %d\n", i + 1);
      return 0;
    }
}
