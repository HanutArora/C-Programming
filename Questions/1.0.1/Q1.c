#include<stdio.h>
#include<conio.h>
int uniqPrint(int *arr, int lenArr);     //  declaration of function to print only unique elements of an array
main()
{
  int i;                                  //  for loops
  int lenArray;                           //  for storing the length of the array / total number of elements
  printf("Enter number of elements: ");
  scanf("%d", &lenArray);
  int Arr[lenArray];                      //  creating array for storing the elements
  for (i = 0; i < lenArray; i++)          //  populating the array
  {
    printf("Enter %d element: ", i+1);
    scanf("%d", &Arr[i]);
  }
  uniqPrint(Arr, lenArray);               //  calling function to print unique elements
}
int uniqPrint(int *arr, int lenArr)
{
  int i, j;         //  for loops
  int flag = 0;     //  for checking if the element is duplicate or not
  printf("\nUnique Elements:\t%d\t", arr[0]);    //  starting the list of unique elements alongwith the first element
  for (i = 1; i < lenArr; i++)      //  for printing unique elements
  {
    for (j = i-1; j>=0; j--)        //  loop for checking if the element is duplicate
    {
      if (arr[i] == arr[j])
        flag = 1;
    }
    if (flag == 0)                  //  printing only unique elements
    	printf("%d\t", arr[i]);
    flag = 0;
  }
  getch();
  return 0;
}
