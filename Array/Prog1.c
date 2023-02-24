// Write a program to read and display n numbers using an array.

#include <stdio.h>
#include <conio.h>
int main()
{
  int i, n;
  clrscr();
  //Entering the Elements
  
  printf("\n Enter the number of elements in the array : ");
  scanf("%d", &n);
  int arr[n];
  for(i=0;i<n;i++)
    {
       printf("\n arr[%d] = ", i);
       scanf("%d",&arr[i]);
    }
  
  //Printing the Elements
 
  printf("\n The array elements are ");
  for(i=0;i<n;i++)
       printf("\t %d", arr[i]);
   return 0;
     
