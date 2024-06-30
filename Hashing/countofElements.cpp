#include<bits/stdc++.h>
using namespace std;

int countOfElement(int arr[], int n, int x){
	int hashh[1000000] = {0};
	for(int i=0;i<n;i++){
		hashh[arr[i]]++;
	}
	return hashh[x];
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
    int x;
    cin >> x;
    int ans = countOfElement(arr,n,x);
    cout << ans;
	return 0;
}