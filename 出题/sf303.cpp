// 算法303

// 设从键盘输入一整数的序列：a1, a2, a3，…，an，
// 试编写算法实现：用栈结构存储输入的整数，
// 当ai≠-1时，将ai进栈；
// 当ai=-1时，输出栈顶整数并出栈。
// 算法应对异常情况（入栈满等）给出相应的信息。
// 如果栈满，则输出 "Stack is Full"，并结束程序.
// 如果栈空，则输出 "Stack is Empty", 并结束程序.
//（提示：用 exit(0) 退出程序）
/*
	函数接口定义：
	void InOutS(SeqStack& S, string str);
*/


#include <iostream>
using namespace std;

#define MAXSIZE 100	// 假定预分配的栈空间最多为100个元素
typedef int DataType;	// 假定栈元素的数据类型为字符

typedef struct SqStack
{
	DataType data[MAXSIZE];
	int top;
}*SeqStack;

void InitStack(SeqStack& S)
{
	S = new SqStack;
	S->top = -1;
}

void Push(SeqStack& S, DataType e)
{
	if (S->top == MAXSIZE - 1)
		return;

	S->data[++S->top] = e;
}

void Pop(SeqStack& S, DataType& e)
{
	if (S->top == -1)
		return;

	e = S->data[S->top--];
}

bool EmptyStack(SeqStack S)
{
	if (S->top == -1)
		return true;
	else
		return false;
}

void InOutS(SeqStack& S, int x)
{
	int out;
	if (x != -1) {
		if (S->top != MAXSIZE - 1) {
			Push(S, x);
			//S->data[++S->top] = x;
		}
		else {
			cout << "Stack is Full" << endl;
			exit(0);
		}
	}
	else {
		if (S->top != -1) {
			Pop(S, out);
			//out = S->data[S->top--];
			cout << out << " ";
		}
		else {
			cout << "Stack is Empty" << endl;
			exit(0);
		}
	}
}

int main()
{
	freopen("sf303.in", "r", stdin);	// 请在PTA上提交时删除此行代码

	SeqStack S;
	int n, x;
	InitStack(S);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		InOutS(S, x);
	}


	return 0;
}