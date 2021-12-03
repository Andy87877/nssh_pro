// 重點是17~19行
// 題目網址 https://zerojudge.tw/ShowProblem?problemid=a251
// 程式網址 https://replit.com/@andy8787main/A251-DP#main.cpp
#include <iostream>
#define int long long
using namespace std;

signed main() {
	int times;
	cin >> times;
	for (int t = 0; t < times; t++) {
		int n;
		cin >> n;
		int s[n] = {0};

		cin >> s[0] >> s[1] >> s[2] >> s[3];
		for (int i = 4; i < n; i++) {
			s[i] = s[i-4] + s[i-1];
		}

		//sort
		int temp;
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (s[i] > s[j]) {
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		cout << s[n/2] << endl;
	}
}
