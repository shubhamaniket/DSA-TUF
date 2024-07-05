#include<bits/stdc++.h>
using namespace std;

int uniqueEle(int arr[], int n){
	int ele = 0;
	for(int i=0;i<n;i++){
		ele ^= arr[i];
	}
	return ele;
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
	int res = uniqueEle(arr, n);
	cout << res;
	return 0;
}