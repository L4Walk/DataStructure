//// �㷨302
//
//// ������ָ������������ͬ���ַ����У��硰abba���͡�abdba�����ǻ��ģ�����good�����ǻ��ġ�
//// ��дһ�������ж��������ַ������Ƿ�Ϊ���ġ�
//// ����ǻ����򷵻�True�����򷵻�False
//
///*
//	�����ӿڶ��壺
//	bool isHuiwen(SeqStack& S, string str);
//*/
//
//
//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 100		// �ٶ�Ԥ�����ջ�ռ����Ϊ100��Ԫ��
//typedef char DataType;	// �ٶ�ջԪ�ص���������Ϊ�ַ�
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
//	//�ж�str�ַ������Ƿ�Ϊ���ģ����ǣ�����1�����򷵻�0
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
//	freopen("sf302.in", "r", stdin);	// ����PTA���ύʱɾ�����д���
//
//	SeqStack S;
//	string str;
//	InitStack(S);
//
//	cin >> str;	// �����ַ���
//
//	for (int i = 0; i < str.length(); i++)
//		Push(S, str[i]);
//
//	isHuiwen(S, str) ? cout << "True" << endl : cout << "False" << endl;
//
//	return 0;
//}