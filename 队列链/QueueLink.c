#include <stdio.h>
#include <stdlib.h>

#define MAXSZIE 5
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int QElemType;

typedef struct QNode
{
	QElemType data;
	struct QNode *next;
}QNode,*QueuePtr;


typedef struct 
{
	QueuePtr front ,rear;
}LinkQueue;

Status EnQueue (LinkQueue *Q,QElemType e)
{
     QueuePtr s = (QueuePtr) malloc (sizeof(QNode));
	 if (!s)
	 {
		 exit(ERROR);
	 }
	 s->data=e;
	 s->next=NULL;
	 Q->rear->next=s;
	 q->REAR = s;
	 return OK;
}
Status DeQueue(LinkQueue *Q,QElemType *e)
{
	QueuePtr p;
	if(Q->front == Q->rear)
	{
		return ERROR;
	}
	p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;
	if (Q->rear == p)
	{
		Q->rear = Q->front;
	}
	free(p);
	return OK;
}