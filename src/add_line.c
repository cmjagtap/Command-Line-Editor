#include "header.h"
void add_line(DLL *temp)
{
  char buff[200];
  fprintf(stdout,"Enter a new line\n");
  fgets(buff,200,stdin);
  fgets(buff,200,stdin);
  add_node(buff,temp);
}
