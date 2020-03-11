#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	for(int j = 0; j < size - 1; ++j){
		int swap = 0;
		for(int i = 0; i < size - j - 1; ++i){
			
			//Sorting in ascending order.
			if(arr[i] > arr[i + 1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = 1;
			}
		}
		//if theres no swapping in the last element, then the array is already sorted
		if(swap == 0)
		break;
	}
}
void getArray(int arr[], int size){
	for(int i = 0; i < size; ++i){
		cout <<" " << arr[i];
	}
	cout << "\n";
}
int main(){
	int data[] = {2,5,9,4,3,7};
	int size = sizeof(data) / sizeof(data[0]);
	bubbleSort(data, size);
	cout <<"The sorted array in ascending order is :\n";
	getArray(data, size);
}
