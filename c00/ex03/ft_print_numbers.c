#include <unistd.h>

void ft_print_numbers( void )
{
    for(char car = '0'; car <= '9'; car++) 
    {
            write(1, &car, 1);
    }
}