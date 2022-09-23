//// 算法302
//
//// 回文是指正读反读均相同的字符序列，如“abba”和“abdba”均是回文，但“good”不是回文。
//// 试写一个函数判定给定的字符向量是否为回文。
//// 如果是回文则返回True，否则返回False
//
///*
//	函数接口定义：
//	bool isHuiwen(SeqStack& S, string str);
//*/
//
//
//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 100		// 假定预分配的栈空间最多为100个元素
//typedef char DataType;	// 假定栈元素的数据类型为字符
//
//typedef struct SqStack
//{
//	DataType data[MAXSIZE];
//	int top;
//}*SeqStack;
//
//void InitStack(SeqStack& S)
//{
//	S = new SqStack;
//	S->top = -1;
//}
//
//void Push(SeqStack& S,  DataType e)
//{
//	if (S->top == MAXSIZE - 1)
//		return;
//
//	S->data[++S->top] = e;
//}
//
//void Pop(SeqStack& S, DataType& e)
//{
//	if (S->top == -1)
//		return ;
//
//	e = S->data[S->top--];
//}
//
//bool EmptyStack(SeqStack S)
//{
//	if (S->top == -1)
//		return true;
//	else
//		return false;
//}
//
//bool isHuiwen(SeqStack& S, string str)
//{
//	//判断str字符向量是否为回文，若是，返回1，否则返回0
//	int len = str.length();
//	char temp;
//
//	for (int i = 0; i < len / 2; i++) {
//		Pop(S, temp);
//		if (temp != str[i])
//			return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	freopen("sf302.in", "r", stdin);	// 请在PTA上提交时删除此行代码
//
//	SeqStack S;
//	string str;
//	InitStack(S);
//
//	cin >> str;	// 输入字符串
//
//	for (int i = 0; i < str.length(); i++)
//		Push(S, str[i]);
//
//	isHuiwen(S, str) ? cout << "True" << endl : cout << "False" << endl;
//
//	return 0;
//}