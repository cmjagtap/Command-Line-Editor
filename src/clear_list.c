#include "header.h"
void clear_list(DLL *head)
{
  if(head==NULL)
    {
      return ;
    }
  else
    {
      while(head->next!=NULL)
	{
	  del_node(head->next);
	}
    }
}
