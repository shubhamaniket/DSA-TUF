#include<bits/stdc++.h>
using namespace std;

void printDivisors(int num){
	// TC - O(sqrt(n))
	// To print in a sorted way use set
	set<int> st;

	for(int i=1;i<=sqrt(num);i++){
		if(num%i == 0){
			st.insert(i);
			if((num/i) != i){
				st.insert(num/i);
			}
		}
	}

	for(auto itr : st){
		cout << itr << " ";
	}
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num;
    cin >> num;

    printDivisors(num);

	return 0;
}