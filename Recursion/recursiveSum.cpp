/*
Given a number ‘N’, 
find out the sum of the first N natural numbers
using recursion
*/

#include<bits/stdc++.h>
using namespace std;

int recursiveSum(int n){
	if(n==0) return 0;
	return n + recursiveSum(n-1);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	int sum = recursiveSum(n);
	cout << sum;
	return 0;
}