#include <unistd.h>

void ft_putstr(char *string)
{
	while (*string)
		write(1, string++, 1);
}

int main() {
	 ft_putstr("salma"); 
	 return 0 ;
}
