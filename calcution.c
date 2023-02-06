#include <stdio.h>
int main()
 {
  double x;
  int N;
  int choice;
  double c;
  printf("Enter a value for x: ");
  scanf("%d", &x);
  printf("Enter a value for N: ");
  scanf("%d", &N);
  printf("Enter your choice:\n");
  printf("1. Pow(x,N)\n");
  printf("2. Add(x,N)\n");
  printf("3. Sub(x,N)\n");
  printf("4. Mul(x,N)\n");
  printf("5. Div(x,N)\n");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
      c= pow(x, N);
      break;
    case 2:
      c = x + N;
      break;
    case 3:
      c = x - N;
      break;
    case 4:
      c = x * N;
      break;
    case 5:
      c = x / N;
      break;
    default:
      printf("Invalid choice\n");
      return 0;
  }
  printf("c: %d\n", c);
  return 0;
}
