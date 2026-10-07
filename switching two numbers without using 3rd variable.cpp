#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"before switching a: "<<a<<endl;
    cout<<"before switching b: "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter switching a: "<<a<<endl;
    cout<<"after switching b: "<<b<<endl;

}
