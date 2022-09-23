//// 6-10 顺序表删除所有指定元素-CPP
//
//// 已知⻓度为 n 的线性表 A 采⽤顺序存储结构，请写⼀个时间复杂度为 O(n)、空间复杂度为 O(1)的算法，该算法可删除线性表中所有值为 item 的数据元素。
//
///*
//函数接口定义：
//void  Delete(List &L,int item);
//*/
//
//#include<iostream>
//using namespace std;
//
//#define MAXSIZE 100
//#define ERROR 0
//typedef struct { //定义顺序表
//    int* elem;
//    int length;
//} List;
//
//void InitList(List& L) //创建顺序表
//{
//    L.elem = new int[MAXSIZE];
//    L.length = 0;
//}
//
//int ListLength(List L) //求顺序表的长度
//{
//    return L.length;
//}
//
//void GetElem(List L, int i, int& e) //求顺序表的第i个元素，并以e返回
//{
//    e = L.elem[i - 1];
//}
//
//bool LocateElem(List L, int e) //判断List里有没有e这个元素
//{
//    int i;
//    for (i = 0; i < L.length; i++)
//        if (e == L.elem[i])
//            return true;
//    return false;
//}
//
//void ListInsert(List& L, int e) //将e插入到List的最后
//{
//    L.elem[L.length] = e;
//    L.length++;
//}
//
//void ListOutput(List L) //输出List
//{
//    int i;
//    for (i = 0; i < L.length; i++)
//        cout << L.elem[i] << " ";
//    cout << endl;
//}
//
///* 请在这里填写答案 */
//void  Delete(List& L, int item)
//{
//    int i = 0;
//
//    while (i < L.length) {
//        if (L.elem[i] == item) {
//            for (int j = i; j < L.length; j++) {
//                L.elem[j] = L.elem[j + 1];
//            }
//            L.length--;
//        }
//        else {
//            i++;
//        }
//    }
//}
//
//void DeleteItem(List& L, int item)
//{
//    int i = 0, j = L.length - 1;
//
//    while (i < j) {
//        while (i < j && L.elem[i] != item)
//            i++;
//        if(L.elem[i] == item)
//            L.length--;
//
//        if (i < j) {
//            while (i < j && L.elem[j] == item) {
//                j--;
//                L.length--;
//            }
//               
//        }
//
//        if (i < j) {
//            L.elem[i++] = L.elem[j--];
//           
//        }
//    }
//}
//
//
//
//
//int main()
//{
//    freopen("6-10.in", "r", stdin);
//    int n, m, k;
//    List L;
//
//    InitList(L);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        cin >> k;
//        ListInsert(L, k);
//    }
//
//   // Delete(L, m);
//    DeleteItem(L, m);
//    ListOutput(L);
//
//    return 0;
//}
