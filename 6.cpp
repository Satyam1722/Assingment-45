#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    int n;
    cout<<"enter element you want to insert : ";
    cin>>n;
    m.insert(n);
    cout<<*m.begin()<<endl;

    return 0;
}