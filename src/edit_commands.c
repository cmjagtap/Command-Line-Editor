#include "header.h"
void edit_commands()
{
  fprintf(stdout,"\n \tCM Editor commands\n");
  fprintf(stdout,"\t Command \n");
  fprintf(stdout,"E: edit current line\n");
  fprintf(stdout,"U: move pointer one line up\n");
  fprintf(stdout,"D: move pointer one line down\n");
  fprintf(stdout,"R: delet current Line\n");
  fprintf(stdout,"V: display contains in buffer\n");
  fprintf(stdout,"A: add a line after ur pointer position\n");
  fprintf(stdout,"S: save changes in file & exit menu \n");
  fprintf(stdout,"X: exit discarding any changes\n");
  fprintf(stdout,"p: replace string 1st occurance\n");
  fprintf(stdout,"H: help or list command\n");
  fprintf(stdout,"M: Return to Main menu\n");
}
