#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        float px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        float rx = (2*qx - py);
        float ry = (2*qy - py);
        cout<<rx<<" "<<ry<<endl; 
    }
    return 0;
}