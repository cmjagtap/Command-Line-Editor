#include "header.h"
void edit_node(DLL *p)
{
  char temp[200];
  fprintf(stdout,"\n Orignal line is :\n %s",p->buffer_l);
  fprintf(stdout,"\n Enter new line\n");
  fgets(temp,200,stdin);
  fgets(temp,200,stdin);
  strcpy(p->buffer_l,temp);
  fprintf(stdout,"Line Edited\n");
}
