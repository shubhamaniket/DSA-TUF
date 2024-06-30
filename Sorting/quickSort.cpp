/*
Quick Sort
*/

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int i=low, j=high;

	while(i < j){
		while(arr[i] <= pivot && i <= high-1){
			i++;
		}

		while(arr[j] > pivot && j >= low+1){
			j--;
		}

		if(i<j){
			swap(arr[i], arr[j]);
		}

	}
	swap(arr[low], arr[j]);
	return j;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
		int partitionIdx = partition(arr, low, high);
		quickSort(arr, low, partitionIdx-1);
		quickSort(arr, partitionIdx+1, high);
	}
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Array : ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSort(arr,0,n-1);
	cout << "Sorted Array : ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}