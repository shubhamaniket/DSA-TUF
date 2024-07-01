/*
Move Zeroes to the end of the array
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int num){
	int res = -1;
	for(int i=0;i<n;i++){
		if(arr[i] == num){
			res = i;
			break;
		}
	}
	return res;
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
	int num;
	cin >> num;
	int index = linearSearch(arr, n, num);
	cout << index;

	return 0;
}