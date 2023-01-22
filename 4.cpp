#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(5);
    m.insert(10);
    m.insert(100);
    m.insert(3);

    cout<<"maximum element can hold is : "<<m.max_size()<<endl;

    return 0;
}