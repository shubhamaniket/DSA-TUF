/*
	Check if a string is a palindrome
*/

#include<bits/stdc++.h>
using namespace std;

void reverseString(int l, int r, string &s){
	if(l >= r) return;
	swap(s[l], s[r]);
	reverseString(l+1, r-1, s);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	string s;
	cin >> s;

	string copy = s;
	reverseString(0, s.length()-1, s);

	if(copy == s){
		cout << "Paldindrome";
	}
	else{
		cout << "Not a Palindrome";
	}

	return 0;
}