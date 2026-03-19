#include <stdio.h>
int main()
{
  int result;
  printf("enter character: ");
  result= (getchar() != 'x');
  printf("value of expression (getchar() != 'x') = %d\n", result);
 return 0;
}
