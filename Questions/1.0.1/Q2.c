#include<stdio.h>
#include<conio.h>
void addNum(int *n1, int *n2)
{
  *n1 += *n2;
}
main()
{
  int num, num2;
  int *ptr1 = &num, *ptr2 = &num2;
  printf("Enter first number: ");
  scanf("%d", ptr1);
  printf("Enter second number: ");
  scanf("%d", ptr2);
  addNum(ptr1, ptr2);
  printf("Sum of the 2 numbers = %d", *ptr1);
  getch();
}
