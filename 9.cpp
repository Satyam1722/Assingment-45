#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(10);
    m.insert(100);
    m.insert(3);
    m.insert(5);
    
    int x;
    cout<<"enter the element you want to remove"<<endl;
    cin>>x;

    for(auto it=m.begin();it!=m.end();it++)
    {
        if(*it==x)
        {
            m.erase(it);
            break;
        }
    }
    
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}