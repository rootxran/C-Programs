#include <iostream>
using namespace std;
int ArraySize;

void displayArray(int arr[])
{
  for(int i = 0; i < ArraySize; i++)
  {
    cout << arr[i] << " ";
  }
}
void checkArray(int arr1[], int arr2[], int arr3[])
{
  for(int i = 0; i < ArraySize/2; i++)
  {
    for(int j = 0; j < ArraySize; j++)
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
  for(int i = 0; i < ArraySize; i++)
  {
    ans[i] = arr1[i] | arr2[i];
  }
}
void andOperation(int arr1[], int arr2[], int ans[])
{
  for(int i = 0; i < ArraySize; i++)
  {
    ans[i] = arr1[i] & arr2[i];
  }
}
int duplicateCheck(int arr1[], int end, int number)
{
  for(int i = 0; i < end; i++)
  {
    if(number == arr1[i])
    {
      return 0;
    }
  }
  return 1;
}
void inputArray(int arr1[], int size)
{
  int input;
  for(int i = 0; i < size;)
  {
    cout << "Index " << i << " :";
    cin >> input;
    if(duplicateCheck(arr1, i, input))
    {
      arr1[i] = input;
      i++;
    }
  }
}
void inputSubArray(int arr1[], int arr2[], int size)
{
  int input;
  for(int i = 0; i < size;)
  {
    cout << "Index " << i << " : ";
    cin >> input;
    if(duplicateCheck(arr2, ArraySize, input) == 0)
    {
      if(duplicateCheck(arr1, i, input)) 
      {
        arr1[i] = input;
        i++;
      }
      else
      {
        cout << endl << "Duplicate in Subset" << endl;
      }
    }
    else
    {
      cout << endl << "Not in universal Set" << endl;
    }
  }
}
int main()
{
  int size = 1;
  while(size % 2 == 1)
  {
    cout << "Enter even size of array : ";
    cin >> size;
  }
  ArraySize = size;
  int universal_set[size];
  cout << "------------------------" << endl;
  cout << "Universal Set : " << endl;
  inputArray(universal_set, size);
  cout << "------------------------" << endl;
  cout << "A SubArray: " << endl;
  int A[size/2];
  inputSubArray(A, universal_set, size/2);
  cout << "------------------------" << endl;
  cout << "B SubArray: " << endl;
  int B[size/2];
  inputSubArray(B, universal_set, size/2);
  int bit_A[size] = {0};
  int bit_B[size] = {0};
  int union_array[size];
  int intersection_array[size];
  checkArray(universal_set, A, bit_A);
  checkArray(universal_set, B, bit_B);
  cout << endl << "------------------------" << endl;
  cout << "A : ";
  displayArray(bit_A);
  cout << endl;
  cout << "B : ";
  displayArray(bit_B);
  cout << endl << "------------------------";
  cout << endl << "Union : ";
  orOperation(bit_A, bit_B, union_array);
  displayArray(union_array);
  cout << endl << "------------------------";
  cout << endl << "Intersection : ";
  andOperation(bit_A, bit_B, intersection_array);
  displayArray(intersection_array);
  cout << endl;
}
