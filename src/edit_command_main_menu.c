#include "header.h"
void edit_command_main_menu()
{
  system("clear");
  fprintf(stdout,"\n\t\tCm Editor Options\n");
  fprintf(stdout,"S : Show current directory files\n");
  fprintf(stdout,"C : Create file\n");
  fprintf(stdout,"H : help menu\n");
  fprintf(stdout,"R : Open & Read file \n");
  fprintf(stdout,"E : Edit open file\n");
  fprintf(stdout,"X : Close current File\n");
  fprintf(stdout,"Q : Quit or Exit from Editor\n");
}
