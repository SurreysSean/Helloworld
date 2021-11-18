#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
inline string input()
{
    string r;
    cin>>r;
    return r;
}

constexpr int  substract(int a,const int b )
{
    return a-b;
}

int main()
{
    // constexpr int res = isShorter(3,2);
    // cout<<res<<endl;
    // cout<<input()<<endl;
    int a=30,b=2;
    int res0 = substract(a,b);
    cout<<res0<<endl;
    return 0;
}