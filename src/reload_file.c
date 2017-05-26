#include "header.h"
void reload_file(DLL *head,FILE *fp)
{
  char buffer[200];
  DLL *list=head;
  if(feof(fp))
    {
      return;
    }
  while(fgets(buffer,200,fp)!=NULL)
    {
      add_node(buffer,list);
      list=list->next;
    }
  
}
