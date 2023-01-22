#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(10);
    m.insert(100);
    m.insert(3);

    auto it=m.end();
    it--;
    cout<<*it<<endl;

    return 0;
}