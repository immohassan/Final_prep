#include <stdio.h>
int single_finder(int array[], int size) // function declaration//
{
  int i, j;
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (array[i] == array[j] && i != j) // if elements of arrays matches with any other element, loop will terminate//
        break;
    }
    if (j == size) // it means loop has successfully reached the end of array because it didn't found any repitition of elements//
    {
      printf("Non-repeating element : %d \n", array[i]); // printing the single element
    }
  }
  return -1;
}

int main()
{
  int size, i;
  printf("\nEnter the number of elements : ");
  scanf("%d", &size); // taking input from user about array size//
  int arr[size];
  printf("Input the array elements : ");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }                         // input array //
  single_finder(arr, size); // calling function//
  return 0;
}