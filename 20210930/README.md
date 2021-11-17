# https://hackmd.io/@nssh/nscsc/%2FgDamy4sXS8WFZMrNFAGx2A

# 20210930 進階班

[Github](https://github.com/nanshan-high-school/20210930-homework-pro)

## DP
### [ZJ-B184 裝貨櫃問題](https://zerojudge.tw/ShowProblem?problemid=b184)
[Demo](https://replit.com/@hansen033/b184-5-Zhuang-Huo-Gui-Wen-Ti#main.cpp)(weight是代表容量)
#### 提示
- 把問題拆成小問題：在每個容量(0、1、2、...、100)可以裝得下的最大價值是多少?
- 每一次比較是在比「該貨品的價值」加上「扣掉該貨品的容量後能裝的最大價值」有沒有比原先「不裝該貨品的最大價值」還要大
- 如果想要的話硬爆也可以
#### 如果不過的話
- 要用while(cin>>變數)包起來
- 輸出要換行
- 可能需要開101格因為在往前找該容量上限時，最後一次會需要容量上限0

### [ZJ-D784 一、連續元素的和](https://zerojudge.tw/ShowProblem?problemid=d784)
似乎有點怪怪的，不過想法應該是(1\~1)(1\~2)...(1\~N)中最大的連續整數嗎?但是好像有答案是-1所以下面的參考文章的內容或許會不適用
請參考[這篇文章](https://quanticdev.com/algorithms/dynamic-programming/kadanes-algorithm/)

## 沒事可以練習
### [ZJ-A251 假費波那契數](https://zerojudge.tw/ShowProblem?problemid=a251)
[Demo](https://replit.com/@hansen033/a251-Jia-Fei-Bo-Na-Qi-Shu#main.cpp)
#### 可以進行的方向
- 輸入
- 計算數列
- 排序
- 輸出陣列[N/2]找到中位數
- 想看看有沒有不排序就能找出中位數的方法，我也不知道
