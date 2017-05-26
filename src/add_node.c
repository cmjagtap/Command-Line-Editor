#include "header.h"
void add_node(char str[],DLL *q)
{
   DLL *new_node=(DLL *)malloc(sizeof(DLL));
   DLL *temp=q->next;
   if(!q)
     {
       return;
     }
   strcpy(new_node->buffer_l,str);
   new_node->prev=q;
   new_node->next=q->next;
   if(q->next!=NULL)
     {
       (q->next)->prev=new_node;
       while(temp!=NULL)
	 {
	   (temp->line_no)++;
	   temp=temp->next;
	 }
     }
   q->next=new_node;
   new_node->line_no=q->line_no+1;
}
