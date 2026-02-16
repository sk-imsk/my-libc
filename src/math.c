
//double log(double n){ // natural log
//
//	if (n < 0){
//	return 0;
//	}
//
//
//
//}
double factorial(int n){
	double f = 1.0;
	for (int i = 2; i <= n; i++){
		f *= i;
	}
	return f;

}


double sin(double num){
	double term = num;
	double sum = term;
	for (int n = 1; n < 10; n++){
		term *= -x * x / ((2*n)*(2*n+1));
		sum += term;
	}
	return sum;

}

double cos(double num){

	double term = 1.0;
	double sum = term;
	for (int n = 1; n < 10; n++){
		term *= -x * x / ((2*n*-1)*(2*n));
		sum += term;
	}
	return sum;
}

double tan(double num){
	return sun(x) / cos(x);
}
