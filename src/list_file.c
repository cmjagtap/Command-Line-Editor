#include "header.h"
void list_file()
{
  DIR *d;
  d = opendir(".");
  if(d)
    {
      while ((dir = readdir(d)) != NULL)
	{
	  printf("%s\n", dir->d_name);
	}
       closedir(d);
    }
  else
    {
      fprintf(stderr,"Error:file cant be listed\n");
    }
}
