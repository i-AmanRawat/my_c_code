 #include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int number ;
    struct node *next ;
}node ;

int main (){
    node *list=NULL ;
    node *n = malloc (sizeof (node));
    if (n != NULL){
        (*n).next = NULL;
        (*n).number = 1;
        list = n;
    }

    node *n1 = malloc (sizeof(node));
    if (n1!=NULL){
        (*n1).number = 2;
        (*n1).next=NULL;
        (*list).next=n1;
    }
    
    node *n2= malloc (sizeof(node));
    if (n2!=NULL){
        (*n2).number=3;
        (*n2).next=NULL;
        (*((*list).next)).next= n2;
    }

}
