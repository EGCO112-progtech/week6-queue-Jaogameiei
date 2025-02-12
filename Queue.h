#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
  //NodePtr new_node=(NodePtr)malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->data = x;
  new_node->nextPtr=NULL;
  if(q->size==0)  q->headPtr = new_node;/*first Node*/
  else q->tailPtr->nextPtr = new_node;
  q->tailPtr = new_node;
  q->size++;
 }
}


int dequeue_struct(Queue *q){
  if(q->size>0){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
       /*Finish dequeue */
       q->headPtr= t->nextPtr; // NULL
        if(q->size==1) q->tailPtr=NULL;    
  free(t);
   return value;
   }
   printf("Empty queue");
   return 0;
   q->size--;
}
}
