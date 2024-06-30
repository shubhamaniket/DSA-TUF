/*
Check if an array is sorted in ascending order
*/

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
	for(int i=1;i<n;i++){
		if(arr[i] >= arr[i-1]){

		}
		else{
			return false;
		}
	}
	return true;
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
	if(isSorted(arr, n)){
		cout << "Sorted";
	}
	else{
		cout << "Not Sorted";
	}

	return 0;
}