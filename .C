#include <stdio.h> 
#include <stdlib.h> 

struct node { 
   
   
   int data;
    struct node *next; 
    
   }; 
   struct node *head=NULL;
   
   void nEnd(int data) { struct node *newNode, *temp; newNode = (struct node*)malloc(sizeof(struct node)); if(newNode == NULL) { printf("Unable to allocate memory."); } else { newNode->data = data; 
   newNode->next = NULL; temp = head; 
    while(temp != NULL && temp->next != NULL) temp = temp->next; temp->next = newNode; } }
   
   void deletion(){
       
       struct node *p=head;
       head=head->next;
       free(p); //free that deleted node
       
   }
   
   
   struct node *traverse(struct node *p){
       
       while(p != NULL) { 
         
         printf("%d ",p->data);
         p = p->next;
         
          }
          
   }
   
   struct node * insert(struct node *head){
       struct node *new_=malloc(sizeof(struct node));
       new_->next=head;
       new_->data=8;
       
   }
   
   
   
   int main() {
   struct node *prev,*p; 
   int n,i;
   
    
   scanf("%d",&n);
    
    
     for(i=0;i<n;i++) {
      p=malloc(sizeof(struct node));
       scanf("%d",&p->data);
        p->next=NULL; 
        
        if(head==NULL) 
        head=p; 
        else 
        prev->next=p;
         prev=p;
         
         
         
          } 
          printf("given elements of linkedlist=\n");
          
          traverse(head);
          printf("\n");
         
         deletion();
         printf("after deletion\n");
         traverse(head);
         printf("\n");
         head= insert(head);
         printf("after insertion \n");
         nEnd(9);
          traverse(head);
          
   return 0; 
   }
