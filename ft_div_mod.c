#include <unistd.h>


 void ft_putnbr( int *nbr){
	 char c = *nbr + '0' ;
	 write(1 , &c , 1);
 }

 void ft_div_mod(int a , int b , int *div , int *mod){
	 
        *div = a/b ; 
	*mod = a%b ; 
	ft_putnbr(div);
	write ( 1 ,".", 1);
	ft_putnbr(mod);
 }
 int main (){
	 int div= 0;
	 int mod = 0;
	
	 ft_div_mod(8 , 4 , &div, &mod );
	 return 0 ;
 }



	
