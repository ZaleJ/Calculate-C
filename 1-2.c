#include <stdio.h>
#include <conio.h>
#define MaxSize 10
typedef int ElemType ;  // ��int����ΪElemType

typedef struct{
    int *elem;
    int length;
    int listsize;
} Sqlist;

//��ʼ��˳���
//L��Sqlist���͵�ָ��
void initSqlist(Sqlist *L){
    L->elem=(int *)malloc(MaxSize*sizeof(ElemType));
    if(!L->elem) exit(0);
    L->length=0;
    L->listsize= MaxSize;
}



main(){
    Sqlist l;
    int i;
    initSqlist(&l);
}
