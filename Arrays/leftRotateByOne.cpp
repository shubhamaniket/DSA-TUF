/*
Left Rotate the array by one place by modifying the existing array.
*/

#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){
	int temp = arr[0];
	for(int i=1;i<n;i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
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
	leftRotateByOne(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

	return 0;
}