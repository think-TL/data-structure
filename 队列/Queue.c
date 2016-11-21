#include <stdio.h>
#define MAXSZIE 5
#define OK 1
#define ERROR 0

typedef int Status;
typedef int QElemType;
typedef struct 
{
	QElemType data[MAXSZIE];
	int front;
	int rear;
}SqQueue;

Status InitQueue(SqQueue *Q)
{
	Q->front = 0;
	Q->rear = 0;
	return 0K;
}

int QueueLength(SqQueue *q)
{
	return (q->rear - q->front + MAXSIZE) % MAXSIZE;
}

Status EnQueue(SqQueue *Q, QElemType e)
{
	if ((Q->rear+1) % MAXSZIE == Q->front)
	{
		return ERROR;
	}
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear+1)%MAXSIZE;
	return OK;
}

Status EnQueue (SqQueue *Q,QElemType *e)
{
	if (Q->front == Q->rear)
	{
		return ERROR;
	}
	*e = Q->data[Q->front];
	Q->front = (Q->front+1) % MAXSIZE;
	return OK;
}