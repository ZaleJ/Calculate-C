#include <stdio.h>
#include <conio.h>
#define MaxSize 10
typedef int ElemType ;  // 将int定义为ElemType

typedef struct{
    int *elem;
    int length;
    int listsize;
} Sqlist;

//初始化顺序表
//L：Sqlist类型的指针
void initSqlist(Sqlist *L){
    L->elem=(int *)malloc(MaxSize*sizeof(ElemType));
    if(!L->elem) exit(0);
    L->length=0;
    L->listsize= MaxSize;
}

void insertElem(Sqlist *L, int i, ElemType item){
    /*add element "item" to the list*/
    ElemType *base, *insertPtr, *p;
    if(i<1 || i>L->length+1) exit(0);
    if(L->length >= L->listsize){
        base=(ElemType*)realloc(L->elem, (L->listsize+10)*sizeof(ElemType));
        L->elem=base;
        L->listsize=L->listsize+100;
    }
    insertPtr = &(L->elem[i-1]);
    for(p=&(L->elem[L->length-1]); p >= insertPtr; p--)
        *(p+1) = *p;
    *insertPtr=item;
    L->length++;
}

main(){
    Sqlist l;
    int i;
    initSqlist(&l);
    for(i=0; i<15; i++)
        insertElem(&l, i+1, i+1);
}
