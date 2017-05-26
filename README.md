# Command Line Editor

#### AUTHOR:

- [Chandramohan Jagtap](https://github.com/cmjagtap "Chandramohan's github profile")

#### DESCRIPTION:
This was a mini project given to us for the course, `CS-302: System Programming`
during the academic year 2016-2017, with the aim to understand the role of data
structures in a software.
I have provided a vim like interface to access the files in our file system.


#### BUILDING AND USING THE EDITOR SYSTEM:

- ##### Dependency:`libreadline6`

  The GNU Readline library provides a set of functions for use
  by applications that allow users to edit command lines as they are typed in.
  Both Emacs and vi editing modes are available. The Readline library includes
  additional functions to maintain a list of previously-entered command lines,
  to recall and perhaps reedit those lines, and perform csh-like history
  expansion on previous commands.

  *Installing __`libreadline6`__ in Debian based distros:*  `sudo apt-get install libreadline6`


- ##### Build:
  Type `make` in your terminal/console to build the source code and make the
  executable. The final output i.e. the executable, named *`editor`* will be installed in 
  `bin` directory.


- ##### Executing the application:
  Enter `make run` to execute `editor` file present in `bin` directory.
  For futher help, type `h` in `editor`'s menu after executing `make run`.
  After main menu you can use `h` for sub menu help also. 

- ##### Clean project:
  Enter `make clean` to remove all the object files and the final executable.
  
Note:- Make sure your in editor directory.
