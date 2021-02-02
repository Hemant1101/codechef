// author:Hemant1101
// lang:  C++
// topic: Codechef problem ( file name is the problem code )

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n,x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;cin>>y;cin>>z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end());
        if(v[0]+v[1]==v[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        v.clear();

    }
}
