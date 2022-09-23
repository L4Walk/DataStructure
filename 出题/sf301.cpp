////	sf301
//// 将编号为0和1的两个栈存放于一个数组空间V[m]中，栈底分别处于数组的两端。
//// 当第0号栈的栈顶指针top[0]等于 - 1时该栈为空，
//// 当第1号栈的栈顶指针top[1]等于m时该栈为空。
//// 两个栈均从两端向中间增长。
//// 试编写双栈初始化，判断栈空、栈满、进栈和出栈等算法的函数。双栈数据结构的定义如下：
//
///*
//typedef struct StackNode{
//	int top[2], bot[2];
//	SElemType* V;
//	int m;
//}SblStack;
//*/
//
//#define MAXSIZE 100
//typedef int SElemType;
//
//typedef struct StackNode{
//	int top[2], bot[2];
//	SElemType* V;
//	int m;
//}DblStack;
//
//int Init(DblStack &S)
//{
//	S->top[0] = -1;
//}