// 題目網址 https://zerojudge.tw/ShowProblem?problemid=f832
// 程式網址 https://replit.com/@andy8787main/f832-Greedy#main.cpp
// 教學網址 https://medium.com/@chiahunglin/%E6%88%91%E7%9A%84dsa%E6%97%A5%E8%A8%98-7-e15613948c91

#include <iostream>
#include <algorithm>
using namespace std;

int main() { // long保險一點
    long n, m;
    cin >> n >> m;
    long w[n], c[m]; //重量 最多重量

    for (long i = 0; i < n; i++) {
        cin >> w[i];
    }
    for (long i = 0; i < m; i++) {
        cin >> c[i];
    }

    //sort greater遞減
    sort(w,w+n,greater<long>()); 
    sort(c,c+m,greater<long>());

    /*
    cout << "原本: ";
    for (long long i = 0; i < n; i++) {
        cout << w[i] << " ";
    }
    cout << endl << "最重: ";
    for (long long i = 0; i < m; i++) {
        cout << c[i] << " ";
    }
    cout << endl << "============\n";
    */

    //judge
    long total = 0;
    long temp = -1; //第幾個位置超過
    for (long i = 0; i < m; i++) {//看最多
        for (long j = temp+1; j < n; j++) {
            if (w[j] > c[i]) {
                //最大重量都不合  
            } else {
                temp = j;
                total += w[j];
                //cout << total << " i" << i << " j" << j << endl;
                break;
            }
        }
    }
    
    cout << total << endl;
    
} 
