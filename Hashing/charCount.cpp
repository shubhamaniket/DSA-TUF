#include<bits/stdc++.h>
using namespace std;

int charCount(string &s, char ch){
	int hash[256] = {0};
	for(int i=0;i<s.size();i++){
		hash[s[i]]++;
	}
	return hash[ch];
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;
    char ch;
    cin >> ch;
    int ans = charCount(s, ch);
    cout << ans;

	return 0;
}