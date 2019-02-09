#include<stdio.h>
#include<conio.h>
main()
{
  int num, num2;                                //  variables to store the input
  int *ptr1 = &num, *ptr2 = &num2;              //  pointers for respective variables
  printf("Enter first number: ");
  scanf("%d", ptr1);
  printf("Enter second number: ");
  scanf("%d", ptr2);
  *ptr1 += *ptr2                                //  Adding second number to the first number
  printf("Sum of the 2 numbers = %d", num);   //  printing the sum of the variables
  getch();
}
