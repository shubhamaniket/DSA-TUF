#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
	int actualSum = ((n+1)*(n+2))/2;
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	return (actualSum - sum);
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
	int missing = missingNumber(arr, n);
	cout << missing;
	return 0;
}