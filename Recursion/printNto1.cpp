#include<bits/stdc++.h>
using namespace std;

void printNto1(int i, int n){
	if(i > n) return;
	cout << (n-i+1) << " ";
	printNto1(++i, n);
}

void printNto1BT(int i, int n){
	if(i > n) return;
	printNto1BT(i+1,n);
	cout << i << " ";
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	printNto1BT(1, n);
	return 0;
}