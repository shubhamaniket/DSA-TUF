/*
Selection Sort
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i=0;i<=n-2;i++){
		int min = i;
		for(int j=i;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr[i], arr[min]);
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
	selectionSort(arr,n);
	cout << "Sorted Array : ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}