#include <iostream>
using namespace std;

int main() {
int a,b,c;
	cin>>a,b;
	cout << "\nBefore swapping:" << endl;
    cout << "First number = " <<a<< endl;
    cout << "Second number = " <<b<< endl;
    
    c = a;
    a = b;
    b = c;
    
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " <<a<< endl;
    cout << "Second number = " <<b<< endl;
}
