// 重點是23~34行
// 題目網址 https://zerojudge.tw/ShowProblem?problemid=d784
// 程式網址 https://replit.com/@andy8787main/D784-DP#main.cpp

#include <iostream>
#define int long long
using namespace std;

signed main() {
	//次數
	int times;
	cin >> times;

	int Nsize;//n的次數
	for (int t = 0; t < times; t++) {
		//cin
		cin >> Nsize;
		int arr[Nsize];
		for (int i = 0; i < Nsize; i++) {
			cin >> arr[i];
		}

		int DP[Nsize*99] = {0};
		int tempi = 0; //第幾個位置
		for (int i = 0; i < Nsize; i++) {//前到後
			int top = 0; //高度限制
			for (int j = i; j < Nsize; j++) {//往後加
				for (int k = i; k < Nsize - top; k++) {//高度
					DP[tempi] += arr[k];
				}
				tempi++;
				top++;
			}
		}

		//max
		int max = DP[0];
		for (int i = 0; i < Nsize*99; i++) {
			if (DP[i] > max) {
				max = DP[i];
			}
		}
		
		//好像是某種bug 這樣輸出就對了ㄟ
		if (max == 0) {
			cout << -1 << endl;
		} else {
			cout << max << endl;
		}
		
	}	
}
/* 這幾種組合
0 1 2 3 4
0+1
0+1+2
0+1+2+3 
0+1+2+3+4
1+2
1+2+3
1+2+3+4
2+3
2+3+4
3+4
*/
