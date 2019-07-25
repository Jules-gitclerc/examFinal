#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}
int     main(int argc, char **argv)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (argc != 3)
    {
        ft_putchar('\n');
        return (0);
    }
    while(argv[2][j])
    {
        if(argv[2][j] == argv[1][i])
            i++;
        j++;
    }
    if (argv[1][i] != '\0')
    {
        ft_putchar('\n');
        return(0);
    }
    ft_putstr(argv[1]);
    return (0);
}