/*
Largest element in an array
*/

#include<bits/stdc++.h>
using namespace std;

/*Brute Force Approach*/

// int largest(int arr[], int n){
// 	sort(arr, arr+n);
// 	return arr[n-1];
// }

/*Optimized approach*/
int largest(int arr[], int n){
	int max_ele = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i] > max_ele){
			max_ele = arr[i];
		}
	}
	return max_ele;
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
	int largestEle = largest(arr, n);
	cout << largestEle;

	return 0;
}