#include <unistd.h>

void print_num(int n){
	char c = n + '0';
	write ( 1,&c,1);
}
void ft_print_comb(){
	int i , j , k ;
	i = 0;
	while (i<=7){
		j=i+1;
		while(j<=8){
			k=j+1;
			while(k<=9){
				print_num(i);
				write(1," ",1);
				print_num(j);
				write(1," ",1);
				print_num(k);
				write(1,"\n",1);
				k++;
			}j++;
		}i++;
	}
}
int main() {
	ft_print_comb();
	return 0;
}




















