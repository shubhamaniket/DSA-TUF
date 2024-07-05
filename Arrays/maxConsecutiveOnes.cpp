#include<bits/stdc++.h>
using namespace std;

int maxOnes(int arr[], int n){
	int count = 0,maxCount = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == 1){
			count++;
			maxCount = max(maxCount, count);
		}
		else{
			count = 0;
		}
	}
	return maxCount;
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
	int res = maxOnes(arr, n);
	cout << res;
	return 0;
}