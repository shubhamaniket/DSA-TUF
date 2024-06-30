/*
	Given a number N. 
	Count the number of digits in N which evenly divide N.
	Note :- Evenly divides means whether N is divisible by a digit 
	i.e. leaves a remainder 0 when divided.
*/

#include<bits/stdc++.h>
using namespace std;

void countDigits(int num){
	int count = 0;
	int copyNum = num;
	while(num != 0){
		int digit = num % 10;
		if(digit != 0){
			if(copyNum%digit == 0){
				count++;
			}
		}
		num = num/10;
	}
	cout << count;
}

int countDigitsShortcut(int num){
	return (int)(log10(num)+1);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int N;
	cin >> N;
	countDigits(N);
	cout << endl;
	int count = countDigitsShortcut(N);
	cout << count;
	return 0;
}