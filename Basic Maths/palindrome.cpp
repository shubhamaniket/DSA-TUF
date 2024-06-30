#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
	int copy = n;
	
	int rev = 0;
	while(n != 0){
		int digit = n%10;
		rev = rev * 10 + digit;
		n = n/10;
	}

	if(copy == rev){
		return true;
	}
	return false;
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	if(checkPalindrome(n)){
		cout << "Palindrome";
	}
	else{
		cout << "Not Palindrome";
	}
	return 0;
}