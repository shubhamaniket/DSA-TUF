/*
Left Rotate the array by one place by modifying the existing array.
*/

#include<bits/stdc++.h>
using namespace std;

/*Brute Force*/
// void leftRotateByD(int arr[], int n, int d){
// 	d = d%n;
// 	int temp[d];
// 	for(int i=0;i<d;i++){
// 		temp[i] = arr[i];
// 	}
// 	for(int i=d;i<n;i++){
// 		arr[i-d] = arr[i];
// 	}
// 	int j = 0;
// 	for(int i=n-d;i<n;i++){
// 		arr[i] = temp[j];
// 		j++;
// 	}
// }

void leftRotateByD(int arr[], int n, int d){
	d=d%n;
	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n,d;
	cin >> n >> d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	leftRotateByD(arr, n, d);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

	return 0;
}