void	ft_ultimate_div_mod(int *a, int *b){
	int num_aux;
	num_aux =*a;
	*a = *a / *b;
	*b = num_aux % *b;
}
