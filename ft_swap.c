 #include <unistd.h>
  
  void ft_putnbr(int *nbr){

	  char c = *nbr +'0';
	  write ( 1 , &c ,1);
  }
  void ft_swap(int *a , int *b ){

	  int SWAP ;

	  SWAP = *a ; 
      	  *a = *b ; 
	  *b = SWAP ; 

	  ft_putnbr(a);

	  write (1 ,"\n",1);

	  ft_putnbr(b);
  }
 int main(){

	 int a = 1;
	 int b = 5;

	 ft_swap( &a , &b);

	 return 0; 
}
	  




	  

