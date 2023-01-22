#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(10);
    m.insert(100);
    m.insert(3);

    cout<<"number of element is : "<<m.size()<<endl;

    return 0;
}