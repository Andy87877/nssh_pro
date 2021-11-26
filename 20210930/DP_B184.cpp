// 重點是20~29行
// 題目網址 https://zerojudge.tw/ShowProblem?problemid=b184
// 程式網址 https://replit.com/@andy8787main/B184-DP#main.cpp
#include <iostream>
using namespace std;
struct item{
    int v;// 體積
    int c;// 利潤
};

int main() {
    int times;
    
    while(cin >> times) {
        item data[times]; //數據 幾筆
        for (int t = 0; t < times; t++) {
            cin >> data[t].v >> data[t].c;
        }

        //DP
        int all[101] = {0}; //全歸零
        for (int i = 0; i < times; i++) {
            for (int j = 100; j-data[i].v >= 0; j--) {//由後往前
                if (all[j] < all[j-data[i].v]+data[i].c) { //如果DP(後到前) 小於 DP[後-前的體積]+前的價值
                    all[j] = all[j-data[i].v]+data[i].c; //DP裡的數 等於 DP[後-前的體積]+前的價值
                }
            }
        }
        cout << all[100] << endl;
    }
    
} 

/*
提示
https://replit.com/@hansen033/b184-5-Zhuang-Huo-Gui-Wen-Ti#main.cpp
把問題拆成小問題：在每個容量(0、1、2、...、100)可以裝得下的最大價值是多少?
每一次比較是在比「該貨品的價值」加上「扣掉該貨品的容量後能裝的最大價值」有沒有比原先「不裝該貨品的最大價值」還要大
如果想要的話硬爆也可以

如果不過的話
要用while(cin>>變數)包起來
輸出要換行
可能需要開101格因為在往前找該容量上限時，最後一次會需要容量上限0
https://hackmd.io/@nssh/nscsc/%2FgDamy4sXS8WFZMrNFAGx2A
*/
