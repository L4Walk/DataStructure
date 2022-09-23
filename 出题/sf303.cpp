// �㷨303

// ��Ӽ�������һ���������У�a1, a2, a3������an��
// �Ա�д�㷨ʵ�֣���ջ�ṹ�洢�����������
// ��ai��-1ʱ����ai��ջ��
// ��ai=-1ʱ�����ջ����������ջ��
// �㷨Ӧ���쳣�������ջ���ȣ�������Ӧ����Ϣ��
// ���ջ��������� "Stack is Full"������������.
// ���ջ�գ������ "Stack is Empty", ����������.
//����ʾ���� exit(0) �˳�����
/*
	�����ӿڶ��壺
	void InOutS(SeqStack& S, string str);
*/


#include <iostream>
using namespace std;

#define MAXSIZE 100	// �ٶ�Ԥ�����ջ�ռ����Ϊ100��Ԫ��
typedef int DataType;	// �ٶ�ջԪ�ص���������Ϊ�ַ�

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
	freopen("sf303.in", "r", stdin);	// ����PTA���ύʱɾ�����д���

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