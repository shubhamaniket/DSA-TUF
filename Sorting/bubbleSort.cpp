/*
Bubble Sort
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i=n-1;i>=1;i--){
		for(int j=0;j<=i-1;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
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
	bubbleSort(arr,n);
	cout << "Sorted Array : ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}