#include "header.h"
void read_file(DLL *head,char fname[],FILE *fp)
{
  char ch;
  DLL *list=head;
  if(fp!=NULL)
    {
      fprintf(stdout,"Error:theire is another file open it will be close\n want u continue?(Y/n)");
      ch=getchar();
      if(ch=='n' || ch=='N')
	{
	  return;
	}
      else
	{
	  close_file(fp,head);
	}
    }
  system("clear");
  fflush(stdin); 
  fprintf(stdout,"Enter file name to read\n");
  fscanf(stdin,"%s",fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
    {
      fprintf(stdout,"Error:File not found \n Do u wanna Create?(Y/N):\t");
      ch=getchar();
      if(ch=='Y' || ch=='y')
	{
	  fp=fopen(fname,"w");
	  edit_file(head,fname,fp);
	}
      else
	{
	  return;
	}
    }
  clear_list(head);
  reload_file(list,fp);
  edit_file(head,fname,fp);
}
