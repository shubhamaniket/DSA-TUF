/*
Reverse an Array
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int l, int r, int arr[]){
	if(l >= r) return;
	swap(arr[l], arr[r]);
	reverseArray(l+1, r-1, arr);
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
	cout << "Array : - ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	reverseArray(0,n-1,arr);
	cout << "Reverse Array : - ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}