#ifndef _HEADER_OF_EDIT_
#define _HEADER_OF_EDIT_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
struct doubly_LL
{
  char buffer_l[1000];
  int line_no;
  struct doubly_LL *prev,*next;
};
struct dirent *dir;
typedef struct doubly_LL DLL;
void create_file(char []);
void read_file(DLL *,char [],FILE *);
void edit_file(DLL *,char [],FILE *);
void close_file(FILE *,DLL *);
void print_file(DLL *);
void list_file();
void save_file(DLL *,FILE *,char []);
void reload_file(DLL *,FILE *);
void add_node(char *,DLL *);
void edit_node(DLL *);
void del_node(DLL *);
void add_line(DLL *);
void clear_list(DLL *);
void edit_commands();
void edit_command_main_menu();
void replace_str_prog(DLL *,char [],FILE *);
char *replace_string(char *,char *,char *);
#endif
