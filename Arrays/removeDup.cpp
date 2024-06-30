/*
Remove duplicate elements from a sorted array by modifying it, 
show unique elements in the starting indexes and leave the rest same.
*/

#include<bits/stdc++.h>
using namespace std;

void removeDup(int arr[], int n){
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i] != arr[j]){
			arr[i+1] = arr[j];
			i++;
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
	removeDup(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

	return 0;
}