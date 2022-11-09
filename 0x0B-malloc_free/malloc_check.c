#include <stdlib.h>

#include <limits.h>

#include <stdio.h>



/**

 * main - introduction to malloc and free

 *

 * Return: 0.

 */

int main(void)
  
{
  
  char *s;
  
  int i;
  

  
  i = 0;
  
  while (1)
    
    {
      
      s = malloc(INT_MAX);
      
      if (s == NULL)
	
        {
	  
	  printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
	  
	  return (1);
	  
        }
      
      s[0] = 'H';
      
      i++;
      
    }
  
  return (0);
  
}

julien@ubuntu:~/c/malloc$ gcc malloc_check.c -o c

julien@ubuntu:~/c/malloc$ ./c

Can't allocate 2147483647 bytes (after 0 calls)

julien@ubuntu:~/c/malloc$

String literals and .rodata (advanced)

The string literals are stored in your executable at compilation. The way it is stored is actually dependent on both the operating system you are using and the linker. This is what happens when you compile the program on most modern operating systems:



The compiler puts the string into a read-only data-section, usually .rodata
  
The linker collects all the data in such read-only sections and puts them into a single segment. This segment resides in the executable file and is flagged with a “read only”-attribute.
  
  When you run the program, the operation system executable loader loads the executable (or maps it into memory to be more exact). Once this is done, the loader walks the sections and sets access-permissions for each segment. For a read-only data segment it will most likely disable code-execute and write access. Code (for example, your functions) gets execute rights but no write access. Ordinary data like static variables gets read and write access and so on…
  

  
  One very easy way to check that the string literal is actually stored in your executable is to use the command strings (man strings).
  

  
  julien@ubuntu:~/c/malloc$ cat segf.c
  
  /**

   *  segf - Let's segfault \o/

   *

   * Return: nothing.

   */
  
  void segf(void)
  
{
  
  char *str;
  

  
  str = "Holberton";
  
  str[0] = 's';
  
}



/**

 *  main - concept introduction

 *

 * Return: 0.

 */

int main(void)
  
{
  
  segf();
  
  return (0);
  
}#include <stdlib.h>

#include <limits.h>

#include <stdio.h>



 /**

  * main - introduction to malloc and free

  *

  * Return: 0.

  */

int main(void)

{
  
  char *s;
  
  int i;
  

  
  i = 0;
  
  while (1)
    
    {
      
      s = malloc(INT_MAX);
      
      if (s == NULL)
	
        {
	  
	  printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
	  
	  return (1);
	  
        }
      
      s[0] = 'H';
      
      i++;
      
    }
  
  return (0);
  
}

julien@ubuntu:~/c/malloc$ gcc malloc_check.c -o c

julien@ubuntu:~/c/malloc$ ./c

Can't allocate 2147483647 bytes (after 0 calls)

julien@ubuntu:~/c/malloc$

String literals and .rodata (advanced)

The string literals are stored in your executable at compilation. The way it is stored is actually dependent on both the operating system you are using and the linker. This is what happens when you compile the program on most modern operating systems:



The compiler puts the string into a read-only data-section, usually .rodata
   
The linker collects all the data in such read-only sections and puts them into a single segment. This segment resides in the executable file and is flagged with a “read only”-attribute.
   
   When you run the program, the operation system executable loader loads the executable (or maps it into memory to be more exact). Once this is done, the loader walks the sections and sets access-permissions for each segment. For a read-only data segment it will most likely disable code-execute and write access. Code (for example, your functions) gets execute rights but no write access. Ordinary data like static variables gets read and write access and so on…
   

   
   One very easy way to check that the string literal is actually stored in your executable is to use the command strings (man strings).
   

   
   julien@ubuntu:~/c/malloc$ cat segf.c
   
   /**

    *  segf - Let's segfault \o/

    *

    * Return: nothing.

    */
   
   void segf(void)
   
{
  
  char *str;
  

  
  str = "Holberton";
  
  str[0] = 's';
  
}



/**

 *  main - concept introduction

 *

 * Return: 0.

 */

int main(void)
  
{
  
  segf();
  
  return (0);
  
}
