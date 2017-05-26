#include "header.h"
void edit_file(DLL *head,char fname[],FILE *fp)
{
  DLL *temp=head->next;
  char ch,ch1;
  system("clear");
  if(fp==NULL)
    {
      fprintf(stderr,"\n No file is open \n");
      
    }
  fprintf(stdout,"\n File contents will be display with Line no\n");
  getchar();
  system("clear");
  print_file(head);
  if(temp!=NULL)
    {
      fprintf(stdout,"you are at line no: %d",temp->line_no);
    }
  else
    {
      temp=head;
    }
  edit_commands();
  while(1)
    {
      if(fp==NULL)
	{
	  system("clear");
	  fprintf(stdout,"Error:file not open\n");
	  return;
	}
      ch=getchar();
      switch(ch)
	{
	case 'e': /* edit current line */
	case 'E': edit_node(temp);
	  break;
	case 'U':/* move to previos line */
	case 'u':if(temp==head)
	    {
	      fprintf(stdout,"\n File Empty\n");
	      break;
	    }
	  if(temp->prev!=head)
	    {
	      temp=temp->prev;
	      fprintf(stdout,"ur at line number:- %d\n",temp->line_no);
	    }
	  else
	    {
	      fprintf(stdout,"already at first line\n");
	    }
	  break;
	case 'D':
	case 'd':/* move to next line */
	  if(temp->next!=NULL)
	    {
		  temp=temp->next;
		  fprintf(stdout,"Ur at line number:- %d\n",temp->line_no);
	    }
	  else if(temp==head)
	    {
	      fprintf(stdout,"File empty\n");
	    }
	  else
	    {
	      fprintf(stdout,"Already at last line\n");
	    }
	  break;
	case 'R':/* remove current line */
	case 'r':
	      if(temp==head)
		{
		  fprintf(stdout,"\n File is Empty\n");
		  break;
		}
	      temp=temp->prev;
	      del_node(temp->next);
	      fprintf(stdout,"\n Line deleted\n");
	      print_file(head);
	      if(temp->line_no)
		{
		  fprintf(stdout,"\n you are currently at line:-  %d\n",temp->line_no);
		}
	      if(((temp->prev)==NULL) && (temp->next!=NULL))
		{
		  temp=temp->next;
		}
	      else if(((temp->prev)==NULL) && ((temp->next)==NULL))
		{ 
		  fprintf(stdout,"\nFile is Empty\n");
		}
	      break;
	      
	case 'V' : /* Display current buffer */
	case 'v' :
	  print_file(head);
	  fprintf(stdout,"Ur at line number :%d \n",temp->line_no);
	  break;
	  
	case 'A' :/* add line after current line */
	case 'a' :
	  add_line(temp);
 	  temp=temp->next;
	  print_file(head);
	  fprintf(stdout,"U are at line no: %d\n",temp->line_no);
	  break;
	case 'S' : /* save curent file */
	case 's' :
	  save_file(head,fp,fname);
	  close_file(fp,head);
	  break;
	case 'X' :/* exit discarding changes */
	case 'x' :
	        fprintf(stdout,"Do u want to save before exit\n");
		ch1=getchar();
		if(ch1=='y' || ch1=='Y')
		  {
		    save_file(head,fp,fname);
		    return;
		  }
		else
		  {
		    close_file(fp,head);
		  }
		break;
	case 'H' : /* diplay command menu */
	case 'h' :
	  system("clear");
	  edit_commands();
	  break;
	case 'P' :
	case 'p' :replace_str_prog(head,fname,fp);
		  break;
	case 'M' :
	case 'm' :return;
	  break;
	}
    }
}
