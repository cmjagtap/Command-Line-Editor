#include "header.h"
void print_file(DLL *head)
{
  DLL *temp=head->next;
  system("clear");
  if(temp==NULL)
    {
      fprintf(stdout,"Error:File Empty or not open\n");
    }
  else
    {
      while(temp)
	{
	  fprintf(stdout,"%d  %s\n",temp->line_no,temp->buffer_l);
	  temp=temp->next;
	}
    }
}
