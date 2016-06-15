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



main(){
    Sqlist l;
    int i;
    initSqlist(&l);
}
