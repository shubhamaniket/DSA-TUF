/*
Intersection of 2 sorted array
*/

#include<bits/stdc++.h>
using namespace std;

/*Optimal Force Approach*/
void intersectionArray(int a[], int b[], int n, int m){
	vector<int> v;
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			v.push_back(a[i]);
			i++;
			j++;
		}
	}

	for(auto it : v){
		cout << it << " ";
	}
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		intersectionArray(a,b,n,m);
		cout << endl << endl;
	}
	return 0;
}