/*
	To Print the following pattern, given n (number of rows)
	* * * *
	* * * *
	* * * *
	* * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cout << "* ";
    	}
    	cout << endl;
    }
}