#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n <= 1){
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
	int n;
	cin >> n;
	int nth = fibonacci(n);
	cout << nth;
	return 0;
}