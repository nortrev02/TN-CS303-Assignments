#include <iostream>
#include "File-Reader-To-Array.h"

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
	int input, found, old;
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
	return *arr[found], old;
}
void array_append(int* arr[], int value){

}
void array_remove(int* arr[]){

}
int main()
{
	while (true); {

	}
}