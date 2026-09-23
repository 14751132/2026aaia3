///week03-5.cpp 認識vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;///宣告伸縮自如的陣列
    a.push_back(99);///塞入99
    a.push_back(88);///塞入88
    a.push_back(77);///塞入77
    for(int i=0; i<a.size(); ++i)
        cout<< a[i] <<" ";
    cout<<"\n";///鎮列印完後 在印跳行
    a.push_back(88);///塞入88
    a.push_back(77);///塞入77
    for(int i=0; i<a.size(); ++i)
        cout<< a[i] <<" ";
    cout<<"\n";///鎮列印完後 在印跳行

}
