#include "header.h"
void del_node(DLL *p)
{
   DLL *temp=p->next;
   if(!p)
     {
       return;
     }
   (p->prev->next)=p->next;
   if(p->next!=NULL)
     {
       ((p->next)->prev)=p->prev;
       while(temp!=NULL)
	{
	  (temp->line_no)--;
	  temp=temp->next;
	}
     }
   free(p);
}
