#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m1,m2;
    m1.insert(5);
    m1.insert(10);
    m1.insert(100);
    m1.insert(3);

    m2.insert(5);
    m2.insert(10);
    m2.insert(100);
    m2.insert(3);

    if(m1.size()!=m2.size())
    {
        cout<<"both multiset is not equal "<<endl;
        return 0;
    } 
    for(auto it1=m1.begin(),it2=m2.begin();it1!=m1.end()&&it2!=m2.end();it1++,it2++)
    {
        if(*it1!=*it2)
        {
            cout<<"both multiset is not equal "<<endl;
            return 0;
        }

    } 
    cout<<"both multiset is equal "<<endl;
  
    return 0;
}