#include <unistd.h>

int main(int ac, char **av)
{
    (void)ac;
    if (*av)
        write(1, "a", 1);
    return (0);
}