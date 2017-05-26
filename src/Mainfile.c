#include "header.h"
int main()
{
  FILE *fp=NULL;
  char fname[20];
  DLL *head=NULL;
  char ch;
  head=(DLL*)malloc(sizeof(DLL)); 
  head->next=head->prev=NULL;
  head->line_no=0; 
  edit_command_main_menu();
  while(1)
    {
      ch=getchar();
      switch(ch)
	{
	case 'H' :
	case 'h' :edit_command_main_menu();
	  break;
	case 'C' :
	case 'c' :create_file(fname);
	           break;
	case 'R' :
	case 'r' :read_file(head,fname,fp);
	            break;
	case 'E' :
	case 'e' :edit_file(head,fname,fp);
	           break;
	case 'X' :
	case 'x' : close_file(fp,head);
	           break;
	case 'S' :
	case 's' :list_file();
	          break;
	case 'Q' :
	case 'q' :system("clear");
	          exit(1);
		  break;
	}
    }
}
