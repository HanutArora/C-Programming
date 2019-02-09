#include<stdio.h>
#include<conio.h>
void maxNum(int *n1, int *n2, int *resp)
{
  if(*n1 > *n2)
    resp = n1;
  else
    resp = n2;
}
main()
{
  int num, num2, res;                                           //  variables to store the input
  int *ptr1 = &num, *ptr2 = &num2, *resptr = &res;              //  pointers for respective variables
  printf("Enter first number: ");
  scanf("%d", ptr1);
  printf("Enter second number: ");
  scanf("%d", ptr2);
  maxNum(&ptr1, &ptr2, &resptr);                                //  passing pointers to the function
  printf("Greater of the 2 numbers = %d", res);                 //  printing the greater variable
  getch();
}
