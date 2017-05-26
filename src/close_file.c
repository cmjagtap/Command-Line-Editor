#include "header.h"
void close_file(FILE *fp,DLL *head)
{
  if(fp==NULL)
    {
      printf("File not open\n");
      return;
    }
  fclose(fp);
  fp=NULL;
  clear_list(head);
}
