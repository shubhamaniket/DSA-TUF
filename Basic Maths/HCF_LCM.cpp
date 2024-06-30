#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b){
	int gcd = 1;
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0 && b%i==0){
			gcd = i;
			break;
		}
	}

	return gcd;
}

int LCM(int a, int b){
	return ((a*b)/HCF(a,b));
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;
    cin >> a >> b;

    int gcd = HCF(a, b);
    int lcm = LCM(a, b);
    cout << "GCD : " << gcd << endl;
    cout << "LCM : " << lcm << endl;
	return 0;
}