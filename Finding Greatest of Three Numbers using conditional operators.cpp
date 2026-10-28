#include <bits/stdc++.h>
using namespace std;

int main() {
    int M1,M2,M3;
	cin>>M1>>M2>>M3;
	if(M1 > M2 && M1 > M3) {
	    cout<<M1;
	}
	else if (M2 > M1 && M2 > M3) {
	    cout<<M2;
	}
	else
	    cout<<M3;

}
