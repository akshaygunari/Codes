#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i = 0 ; i < t ; i++)
	{
	    int N;
	    cin>>N;
	    int digits = floor(log10(N)+1);
	    cout<<"Number Of Digits"<<digits<<endl;
	}
	return 0;
}
