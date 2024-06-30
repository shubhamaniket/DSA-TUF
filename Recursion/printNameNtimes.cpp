#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
	if(i > n) return;
	cout << "Test" << " ";
	printName(++i, n);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	printName(1, n);
	return 0;
}