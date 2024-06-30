#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
	int count = 0;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i == 0){
			count++;
			if((num/i) != i){
				count++;
			}
		}
	}
	return (count == 2);
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num;
    cin >> num;

    if(checkPrime(num)){
    	cout << "Prime";
    }
    else{
    	cout << "Not Prime";
    }
	return 0;
}