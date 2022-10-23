#include <iostream>
#include "File-Reader-To-Array.h"
#include <fstream>

using namespace std;

int array_check(int arr[], int look){
	int size = sizeof(arr);
	for(int i = 0; i < size; i++) {
		if (arr[i] == look) {
			return i;
		}
	}
	return -1;
}
int array_modify(int* arr[], int index){
	int input = 0, found = 0, old = 0;
	int size = sizeof(*arr);
	for (int i = 0; i < size; i++) {
		if (i == index) {
			found = i;
			cin >> input;
			break;
		}
	}
	old = *arr[found];
	*arr[found] = input;
	return arr[found], old;
}
void array_append(int* arr[], int value){
	int oldSize = sizeof(arr);
	int newSize = oldSize + 1;
	int* newArr = new int[newSize];
	std::copy(arr, arr + std::min(oldSize, newSize), newArr);
	delete[] arr;
	*arr = newArr;
}
void array_remove(int* arr[], int value){

}
int main()
{
	while (true); {

	}
}