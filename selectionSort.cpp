#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void getArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void select_Sort(int arr[], int size){
  for (int j = 0; j < size - 1; j++){
    int min = j;
    for (int i = j + 1; i < size; i++){
      if (arr[i] < arr[min])
        min = i;
    }
    swap(&arr[min], &arr[j]);
  }
}
int main(){
  int data[] = {16, 4, 5, 78, 6, 12, 9, 60};
  int size = sizeof(data) / sizeof(data[0]);
  select_Sort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  getArray(data, size);
}
