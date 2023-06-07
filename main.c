
#include "libftprintf.h"
#include <stdio.h>

int main ()
{
	char *teste  = NULL;

	ft_printf("teste meu: %c\n", 'a');
	ft_printf("teste meu: %s\n", "abcd");
	ft_printf("teste meu: %p\n", teste);
	ft_printf("teste meu: %d\n", -1234);
	ft_printf("teste meu: %u\n", -1234);
	ft_printf("teste meu: %i\n", -1234);
	ft_printf("teste meu: %x\n", -1234);
	ft_printf("teste meu: %X\n", -1234);
	ft_printf("teste meu: %%\n", -1234);


	printf("teste orig: %c\n", 'a');
	printf("teste orig: %s\n", "abcd");
	printf("teste orig: %p\n", teste);
	printf("teste orig: %d\n", -1234);
	printf("teste orig: %u\n", -1234);
	printf("teste orig: %i\n", -1234);
	printf("teste orig: %x\n", -1234);
	printf("teste orig: %X\n", -1234);
	printf("teste orig: %%\n");
}
