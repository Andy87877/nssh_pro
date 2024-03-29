# https://hackmd.io/@nssh/nscsc/%2FLFTk2vVVTPyoD3hgdzwfYg

# 資培0916 
## 貪婪演算法(Greedy algorithm) 
## 動態規劃 (Dynamic programming)

### 貪婪演算法
局部最佳解，且之前做的選擇不會影響到後續的選擇
例如泡沫排序每次都取最大的
定義原則
拆成小問題
#### 1.最多可以去幾個工作(sec.4)
有n個工作，每個工作有個開始和結束的時間，請算出最多可以去幾個工作
**正解** 以工作結束(或開始)時間排序，如果有衝突以早結束(晚開始)的優先，因為更晚結束(更早開始)的工作在留下盡量早(晚)的時間空檔對剩餘的工作更有利。
#### 2.有截止期限的最大利潤
有n個工作，每個工作有截止期限和利潤，請安排工作執行來取得最大利潤
**正解** 以1.利潤大到小2.截止時間小到大排序，依序加入，每次加入後以時間排序已加入的工作。如果無法加入，因為利潤較小，所以捨棄。
#### 3.zerojudge f832: 隕石 (Meteorite)
int會爆
#### 4.e153. 感應燈

### 萬用標頭檔
<bits/stdc++.h>
缺點大概是變慢吧

### 一些東東
```cpp=
using namespace std;
```
代表之後提到的東東都是用std這個namespace裡的東西，也可以只宣告
```cpp=
using std::string
```

### DP動態規劃
拆成小問題後會有許多重複的部分，所以先把小問題的答案另外存起來
快速排序不是動態規劃，因為他是分而治之，切開，再排，大概吧

![](https://i.imgur.com/y40TogQ.jpg)
輸入值(W,P)為:(2,10), (4, 20), (1, 5)
*  第一行為剛被宣告之陣列
*  第二行是經過(2,10)後的狀態
自陣列最後一格開始,將原本陣列中自最後方往前數W格的值加上P,得到新的值,如:第三行中30及來自於第三格的10 + 20以此類推

#### 1.只考慮重量和價值的背包
**解** 從後往前往後加
##### 1.ex
輸出含有什麼
**解** 多一個二維陣列
#### 2.最少的硬幣
有多種幣值，換硬幣
**解** 用很大的值初始化目標價值陣列，然後加上去

### 分而治之 divide and conquer
#### 快速排序

10 的 -9 次方，寫作 1e-9

# 參考資料
綠色那本
emanlaicepsa.github.io
ms docs
openhome.cc


# 我自己加的資料
## 貪婪演算法(Greedy algorithm)
https://medium.com/@chiahunglin/%E6%88%91%E7%9A%84dsa%E6%97%A5%E8%A8%98-7-e15613948c91
https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp02/greedy.html
## 動態規劃 (Dynamic programming)
https://mycollegenotebook.medium.com/%E6%BC%94%E7%AE%97%E6%B3%95-%E5%8B%95%E6%85%8B%E8%A6%8F%E5%8A%83-dp-1-bf647b23504b

https://mycollegenotebook.medium.com/%E6%BC%94%E7%AE%97%E6%B3%95-%E5%8B%95%E6%85%8B%E8%A6%8F%E5%8A%83-dp-2-86d9a740791
