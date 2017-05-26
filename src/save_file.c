#include "header.h"
void save_file(DLL *head,FILE *fp,char fname[])
{
  DLL *temp=NULL;
  if(head==NULL)
    {
      return;
    }
  temp=head->next;
  fclose(fp);
  fp=fopen(fname,"w");
  while(temp!=NULL)
    {
      fprintf(fp,"%s",temp->buffer_l);
      temp=temp->next;
    }
}
