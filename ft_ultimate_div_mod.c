#include <unistd.h>
 
 void ft_putnbr( int *nbr ){
	 char c = *nbr + '0' ;
	 write(1 , &c , 1 );
 }
/*int main() {
	int a = 4;
	 ft_putnbr(&a) ;
	 return 0 ;
}*/


 void ft_ultimate_div_mod(int *a , int *b){


	int nb1 =  *a / *b ;
	int nb2 = *a  % *b;
	a= &nb1;
	b = &nb2;
	ft_putnbr(a);
	write(1 ,".", 1);
	ft_putnbr(b);

 }

int main (){
	 int a1 = 8;
	 int a2 = 4 ;
	 ft_ultimate_div_mod(&a1,&a2);
	 return 0 ;
} 





	 

	


	 
