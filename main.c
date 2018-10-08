#include "get_next_line.h"
#include <stdio.h>
int main(int ac, char **av)
{
	char *str; 
	int	value;
	int file;

	value = 1;
	//str = ft_memalloc(sizeof(char) * (1000));
	file = open(av[1], O_RDONLY);
	
	while (value == 1)
	{
		value = get_next_line(file, &str);
		printf("%s\n", str);
		printf("yes\n");
	}
	return (0);
}
