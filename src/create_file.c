#include "header.h"
void create_file(char fname[])
{
  FILE *fp1;
  fprintf(stdout,"Enter File name\n");
  fscanf(stdin,"%s",fname);
  fp1=fopen(fname,"w");
  if(fp1)
    {
     fprintf(stdout,"file created\n");
     fclose(fp1);
    }
  else
    {
      fprintf(stderr,"Error:file not created\n");
    }
}
