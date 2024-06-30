/*
Given an integer N, return true it is an Armstrong number otherwise 
return false.
An Amrstrong number is a number that is equal to the sum of its own digits 
each raised to the power of the number of digits.
*/

#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
	// 153 = 1^3+5^3+3^3
	int copy = n;
	int sum = 0;

	while(n!=0){
		int digit = n%10;
		sum += pow(digit, (int)(log10(copy)+1));
		n = n/10;
	}

	if(sum == copy){
		return true;
	}
	return false;
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	if(armstrong(n)){
		cout << "Armstrong";
	}
	else{
		cout << "Not Armstrong";
	}
	return 0;
}