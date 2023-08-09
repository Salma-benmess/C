#include <unistd.h>
void ft_strlen( char *str){
	

        int a = 0 ;
	while(*str){ 

		 write( 1 , str , 1);
		 str++;
		 a++;

	}
	char c = a +'0';
	write(1 , "\n", 1 );
	write(1 , &c , 1);

}
int main() {
	ft_strlen("salma");
	return 0 ;
}
