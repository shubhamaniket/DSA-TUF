/*
Union of 2 sorted arra
*/

#include<bits/stdc++.h>
using namespace std;

/*Brute Force Approach*/
// void unionArray(int a[], int b[], int n, int m){
// 	set<int> st;
// 	for(int i=0;i<n;i++){
// 		st.insert(a[i]);
// 	}
// 	for(int i=0;i<m;i++){
// 		st.insert(b[i]);
// 	}

// 	for(auto it : st){
// 		cout << it << " ";
// 	}
// }


/*Optimal Force Approach*/
void unionArray(int a[], int b[], int n, int m){
	vector<int> v;
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] <= b[j]){
			if(v.size()==0 || v.back() != a[i]){
				v.push_back(a[i]);
			}
			i++;
		}
		else{
			if(v.size()==0 || v.back() != b[j]){
				v.push_back(b[j]);
			}
			j++;
		}
	}

	while(i<n){
		if(v.size()==0 || v.back() != a[i]){
			v.push_back(a[i]);
		}
		i++;
	}

	while(j<m){
		if(v.size()==0 || v.back() != b[j]){
			v.push_back(b[j]);
		}
		j++;
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
		unionArray(a,b,n,m);
		cout << endl << endl;
	}
	return 0;
}