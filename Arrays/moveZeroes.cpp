/*
Move Zeroes to the end of the array
*/

#include<bits/stdc++.h>
using namespace std;

/*Better Approach*/
// void moveZeroes(int arr[], int n){
// 	int count = 0;
// 	int j=0;
// 	for(int i=0;i<n;i++){
// 		if(arr[i] != 0){
// 			arr[j] = arr[i];
// 			j++;
// 		}
// 		else{
// 			count++;
// 		}
// 	}
// 	while(count--){
// 		arr[j] = 0;
// 		j++;
// 	}
// }

/*Optimal approach*/
void moveZeroes(int arr[], int n){
	int j=-1;
	for(int i=0;i<n;i++){
		if(arr[i] == 0){
			j = i;
			break;
		}
	}

	if(j==-1) return;
	else{
		for(int i=j+1;i<n;i++){
			if(arr[i] != 0){
				swap(arr[i], arr[j]);
				j++;
			}
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
	moveZeroes(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

	return 0;
}