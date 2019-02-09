#include<stdio.h>
#include<conio.h>
void addNum(int *n1, int *n2)
{
  *n1 += *n2;                                   //  calculating the sum i.e., adding 2nd element to the first element
}
main()
{
  int num, num2;                                //  variables to store the input
  int *ptr1 = &num, *ptr2 = &num2;              //  pointers for respective variables
  printf("Enter first number: ");
  scanf("%d", ptr1);
  printf("Enter second number: ");
  scanf("%d", ptr2);
  addNum(&ptr1, &ptr2);                           //  passing pointers to the function
  printf("Sum of the 2 numbers = %d", *ptr1);   //  printing the sum of the variables
  getch();
}
