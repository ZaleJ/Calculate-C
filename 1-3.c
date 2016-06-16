#include <stdio.h>

typedef int ElemType;

typedef struct node{
    ElemType data;
    struct node *next;
} LNode, *LinkList;

LinkList GreatLinkList(int n){
    LinkList p, r, list=NULL;
    ElemType e;
    int i;
    for(i=0; i<=n; i++){
        scanf("%d", &e);
        p=(LinkList)malloc(sizeof(LNode));
        p->data = e;
        p->next = NULL;
        if(!list)
            list=p;
        else
            r->next = NULL;
        r=p;
    }
    return list;
}

void insertList(LinkList *list, LinkList q, ElemType e){
    LinkList p;
    p=(LinkList)malloc(sizeof(LNode));
    p->data = e;
    if(!*list){
        *list=p;
        p->next=NULL;
    }else{
        p->next=q->next;
        q->next=p;
    }
}

main(){
    int e, i;
    LinkList l, q;
    q=l=GreatLinkList(1);
    scanf("%d", &e);
    while(e){
        insertList(&l, q, e);
        q=q->next;
        scanf("%d", &e);
    }
    q=l;
    printf("The content of the linklist\n");
    while(q){
        printf("%d ", q->data);
        q=q->next;
    }
    q=l;
    printf("\nDelete the fifth element.\n");
}
