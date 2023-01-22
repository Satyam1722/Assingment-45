#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(10);
    m.insert(100);
    m.insert(3);

    m.clear();

    if(m.empty())
    cout<<"multiset is empty "<<endl;
    else
    cout<<"multiset is not empty "<<endl;

    return 0;
}