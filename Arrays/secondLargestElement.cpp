/*
2nd Largest element & 2nd Smallest element in an array without sorting
Assuming no negative elements are present in the array
*/

#include<bits/stdc++.h>
using namespace std;

/*Optimized approach*/
int secondlargest(int arr[], int n){
	int largest = arr[0], sLargest = -1;
	for(int i=1;i<n;i++){
		if(arr[i] > largest){
			sLargest = largest;
			largest = arr[i];
		}
		else if(arr[i] > sLargest && arr[i] < largest){
			sLargest = arr[i];
		}
	}

	return sLargest;
}

int secondSmallest(int arr[], int n){
	int smallest = arr[0], ssmallest = INT_MAX;
	for(int i=1;i<n;i++){
		if(arr[i] < smallest){
			ssmallest = smallest;
			smallest = arr[i];
		}
		else if(arr[i] < ssmallest && arr[i] != smallest){
			ssmallest = arr[i];
		}
	}

	return ssmallest;
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
	int seclargestEle = secondlargest(arr, n);
	int secSmallestEle = secondSmallest(arr, n);
	cout << seclargestEle << " " << secSmallestEle;

	return 0;
}