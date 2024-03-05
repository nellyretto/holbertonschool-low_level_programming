#include<stdio.h>

/**
 * whatsmyname - printing own name with a new line
 * @argv:argument vector
 * @argc: argument count
 * Return: Always 0 (Success)
 */



int main(int argc, char *argv[])
{
    int i;
    printf("%d\n",argc);
    for(i=0;i<argc-1;i++)
    {
        printf("%s",*argv[i]);
    }
    return 0;
}
