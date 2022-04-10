#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char **argv)
{
char buff[BUFSIZ];
size_t bytes;



    if (argc == 1)
    {
        
        
        while (bytes = read(STDIN_FILENO, buff, BUFSIZ))
        {
            write(STDIN_FILENO, buff, bytes);
        }
        return 0;
    }
    if (argc == 2)
    {
        int fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            perror("error info");
            return EXIT_FAILURE;
        }
        
        
        while (bytes = read(fd, buff, BUFSIZ))
        {
            write(STDIN_FILENO, buff, bytes);
        }
        close(fd);
        return 0;
    }
    if (argc > 2)
    {
        int count = 1;
        for (int i = 1; argc >= i; i++)
        {
            int fd = open(argv[count], O_RDONLY);
            count++;

            if (count > argc)
            {
                continue;
            }

            if (fd == -1)
            {
                perror("error info");
                return EXIT_FAILURE;
            }
            
            
            while (bytes = read(fd, buff, BUFSIZ))
            {
                write(STDIN_FILENO, buff, bytes);
            }
            write(STDIN_FILENO, "\n", 1);
            
            close(fd);
        }
        return 0;
    }
}
