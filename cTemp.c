#include<bits/stdc++.h>
#define bb "\n"

using namespace std;
int main() 
{
    double tax=1.08,ans;
    int n;
    cin>>n;
    ans=floor(n*tax);
    if(ans<206)
    {
        cout<<"Yay!"<<bb;
        return 0;
    }
    if(ans==206)
    {
        cout<<"so-so"<<bb;
        return 0;
    }

    cout<<":("<<bb;

    return 0;
}