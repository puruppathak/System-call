#include <stdio.h>
#include <linux/unistd.h>
#include <sys/syscall.h>
 
#define sys_hello 345
  
int main(void)
{
    char *msg = "Puru Pathak's system call: Hello System Call";
    syscall(sys_hello , msg); 
    return 0;
}

