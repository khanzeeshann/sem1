#include <iostream>
using namespace std;

int main() {
	int n=17;
	cout<<"int result= "<<(n%2==0?0:1)<<endl;
	
	int(age)=20;
	cout<<"Age = "<<(age>=18?"Eligible":"Not Eligible")<<endl;
	
	int a=18 , b=25;
	cout<<"Answer "<<(a>b?a-b:b-a)<<endl;
	
	int x=40 , y=18;
	cout<<"Greatest of Two "<<(x>y?x:y>x?y:x)<<endl;
	
	int p=25, q=40, r=15;
	cout<<"Greatest of Three "<<(p>q?(p>q?p:r):(q>r?q:r))<<endl;
	
	int Marks=79;
	cout<<"Grade "<<(Marks>=90?"A+":Marks>=75?"A":Marks>=60?"B":"C")<<endl;
	

}
