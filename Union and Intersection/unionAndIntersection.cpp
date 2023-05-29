#include <iostream>
using namespace std;
void displayArray(int arr[])
{
  for(int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
}
void checkArray(int arr1[], int arr2[], int arr3[])
{
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      if(arr2[i] == arr1[j])
      {
        arr3[j] = 1;
      }
    }
  }
}
void orOperation(int arr1[], int arr2[], int ans[])
{
  for(int i = 0; i < 10; i++)
  {
    ans[i] = arr1[i] | arr2[i];
  }
}
void andOperation(int arr1[], int arr2[], int ans[])
{
  for(int i = 0; i < 10; i++)
  {
    ans[i] = arr1[i] & arr2[i];
  }
}
int main()
{
  int universal_set[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int A[5] = {1, 2, 5, 6, 10};
  int B[5] = {4, 5, 6, 3, 1};
  int bit_A[10] = {0};
  int bit_B[10] = {0};
  int union_array[10];
  int intersection_array[10];
  checkArray(universal_set, A, bit_A);
  checkArray(universal_set, B, bit_B);
  cout << "A : ";
  displayArray(bit_A);
  cout << endl;
  cout << "B : ";
  displayArray(bit_B);
  cout << endl << "Union : ";
  orOperation(bit_A, bit_B, union_array);
  displayArray(union_array);
  cout << endl << "Intersection : ";
  andOperation(bit_A, bit_B, intersection_array);
  displayArray(intersection_array);
  cout << endl;
}
