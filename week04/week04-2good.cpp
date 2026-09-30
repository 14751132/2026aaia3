///week04-2.bad.cpp SOIT108_ADVANCE_008
///程式對的 但codeblocks 出錯 warning: rande-based for only avaliable with...
///2011年之後 只有在-std=c++11 或 -std=gnu++11才能用
///所以需要修改設定
///下面是week04小考題
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for(int i=0; i<20; ++i){
		cin >> now;
		if(now == 0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num : a) {///codeblocks設定出錯時永遠跑不出答案
		if(num == now) ans++;
	}
	cout << ans << "\n";
}
