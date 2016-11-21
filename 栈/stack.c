#include <stdio.h>
#define MAXSZIE 5
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int SElemType;
typedef struct 
{
	SElemType data[MAXSIZE];
	int top;
}SqStack;

//两栈共享空间结构
typedef struct 
{
	SElemType data[MAXSIZE];
	int top1;
	int top2;
}SqDoubleStack;

Status DoublePush(SqDoubleStack *s,SElemType e, int stacknumber)
{
	if(s->top+1 = s->top2)
	{
		return ERROR;
	}
	if (stackNumber == 1)
	{
		s->data[++s->top1]=e;
	}else if (stackNumber == 2){
		s->data[--s->top2]=e;
	}
	return OK;
}

Status DoublePop(SqDoubleStack *s ,SElemType e,int stackNumber)
{
	if (stackNumber == 1) 
	{
		if(s->top1 == -1)
		{
			return ERROR;	
		}
		*e = s->data[s->top1--];
	}
	else if (stackNumber == 2)
	{
		if(s->top2 == MAXSZIE)
		{
			return ERROR;
		}
		*e = s->data[s->top2++];
	}
	return OK;
} 

Status Push (SqStack *s, SElemType e)
{
	if (s->top == MAXSIZE-1){
		return ERROR;
	}
	s->top++;
	s->data[s->top]=e;
	return OK;
}

Status Pop(SqStack *s ,SElemType e)
{
	if (s->top == -1)
	{
		return ERROR;
	}
	*e = s->data[s->top];
	s->top--;
	return OK;
}