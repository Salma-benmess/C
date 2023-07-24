#include <unistd.h>

void ft_is_negative (int a){
	if (a<0){
		char S ='N';
		write(1, &S ,1);
	}
	else {
		char S ='P';
	        write(1, &S ,1);
	}
}
int main(){
	ft_is_negative(-5);
	return 0 ;
}

