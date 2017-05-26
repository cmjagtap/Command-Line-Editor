#include "header.h"
void replace_str_prog(DLL *head,char fname[],FILE *fp)
{
  char orig[100],replc[100];
  DLL *temp=NULL;
  if(head==NULL)
    {
      return;
    }
  temp=head->next;
  fprintf(stdout,"Enter string to replace\n");
  fscanf(stdin,"%s",orig);
  fprintf(stdout,"Enter replacing string\n");
  fscanf(stdin,"%s",replc);
  fclose(fp);
  fp=fopen(fname,"w");
  while(temp!=NULL)
    {
      fprintf(fp,"%s\n",replace_string(temp->buffer_l,orig,replc));
      temp=temp->next;
    }
}
