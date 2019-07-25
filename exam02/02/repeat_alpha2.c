#include <unistd.h>

void print(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            write (1, "Z", 1);
        if (str[i] == 'B')
            write (1, "Y", 1);
        if (str[i] == 'C')
            write (1, "X", 1);
        if (str[i] == 'D')
            write (1, "W", 1);
        if (str[i] == 'E')
            write (1, "V", 1);
        if (str[i] == 'F')
            write (1, "U", 1);
        if (str[i] == 'G')
            write (1, "T", 1);
        if (str[i] == 'H')
            write (1, "S", 1);
        if (str[i] == 'I')
            write (1, "R", 1);
        if (str[i] == 'J')
            write (1, "Q", 1);
        if (str[i] == 'K')
            write (1, "P", 1);
        if (str[i] == 'L')
            write (1, "O", 1);
        if (str[i] == 'M')
            write (1, "N", 1);
        if (str[i] == 'N')
            write (1, "M", 1);
        if (str[i] == 'O')
            write (1, "L", 1);
        if (str[i] == 'P')
            write (1, "K", 1);
        if (str[i] == 'Q')
            write (1, "J", 1);
        if (str[i] == 'R')
            write (1, "I", 1);
        if (str[i] == 'S')
            write (1, "H", 1);
        if (str[i] == 'T')
            write (1, "G", 1);
        if (str[i] == 'U')
            write (1, "F", 1);
        if (str[i] == 'V')
            write (1, "E", 1);
        if (str[i] == 'W')
            write (1, "D", 1);
        if (str[i] == 'X')
            write (1, "C", 1);
        if (str[i] == 'Y')
            write (1, "B", 1);
        if (str[i] == 'Z')
            write (1, "A", 1);
        if (str[i] == 'a')
            write (1, "z", 1);
        if (str[i] == 'b')
            write (1, "y", 1);
        if (str[i] == 'c')
            write (1, "x", 1);
        if (str[i] == 'd')
            write (1, "w", 1);
        if (str[i] == 'e')
            write (1, "v", 1);
        if (str[i] == 'f')
            write (1, "u", 1);
        if (str[i] == 'g')
            write (1, "t", 1);
        if (str[i] == 'h')
            write (1, "s", 1);
        if (str[i] == 'i')
            write (1, "r", 1);
        if (str[i] == 'j')
            write (1, "q", 1);
        if (str[i] == 'k')
            write (1, "p", 1);
        if (str[i] == 'l')
            write (1, "o", 1);
        if (str[i] == 'm')
            write (1, "n", 1);
        if (str[i] == 'n')
            write (1, "m", 1);
        if (str[i] == 'o')
            write (1, "l", 1);
        if (str[i] == 'p')
            write (1, "k", 1);
        if (str[i] == 'q')
            write (1, "j", 1);
        if (str[i] == 'r')
            write (1, "i", 1);
        if (str[i] == 's')
            write (1, "h", 1);
        if (str[i] == 't')
            write (1, "g", 1);
        if (str[i] == 'u')
            write (1, "f", 1);
        if (str[i] == 'v')
            write (1, "e", 1);
        if (str[i] == 'w')
            write (1, "d", 1);
        if (str[i] == 'x')
            write (1, "c", 1);
        if (str[i] == 'y')
            write (1, "b", 1);
        if (str[i] == 'z')
            write (1, "a", 1);
    i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac > 1)
        print(av[1]);
    return (0);
}