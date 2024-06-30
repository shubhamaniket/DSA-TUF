/*
	Given an array of size N. Find the highest and lowest frequency element.
*/
#include<bits/stdc++.h>
using namespace std;

void lowHighFreq(int arr[], int n){
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int maxFreq = INT_MIN;
	int maxEle = 0;
	int lowFreq = INT_MAX;
	int minEle = 0;

	for(auto i : mp){
		if(i.second > maxFreq){
			maxFreq = i.second;
			maxEle = i.first;
		}
	}

	for(auto i : mp){
		if(i.second < lowFreq){
			lowFreq = i.second;
			minEle = i.first;
		}
	}

	cout << "Max Occuring Element : " << maxEle << endl;
	cout << "Min Occuring Element : " << minEle << endl;
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

    lowHighFreq(arr, n);

	return 0;
}