#include<bits/stdc++.h>
using namespace std;

void print1toN(int i, int n){
	if(i > n) return;
	cout << "Test" << " ";
	print1toN(++i, n);
}

void print1toNBT(int i, int n){
	if(i < 1) return;
	print1toNBT(i-1,n);
	cout << i << " ";
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	print1toNBT(n, n);
	return 0;
}