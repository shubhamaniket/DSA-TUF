/*
Given a number ‘N’, 
find out the factorial of N using recursion
*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	if(n==0) return 1;
	return n * factorial(n-1);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	int fact = factorial(n);
	cout << fact;
	return 0;
}