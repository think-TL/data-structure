#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 1000

typedef int ElemType;
typedef struct 
{
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space)
{
	int i ;
	for (i = 0;i < MAXSIZE-1; i++)
	{
		space[i].cur = i+1;
	}
	space[MAXSIZE-1].cur = 0;
	return OK;
}

int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur) 
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

Status ListInsert(StaticLinkList L,int i ,ElemType e)
{
	int j,k,l;
	k=MAXSIZE-1;
	if(i<1 || i > ListLength(L)+1){
		return ERROR;		
	}
	j = Malloc_SSL(L);
	if (j)
	{
		L[j].data = e;
		for (l=1; l <= i-1; l++)
		{
			K = L[k].cur;
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return OK;
	}

	return ERROR;
}