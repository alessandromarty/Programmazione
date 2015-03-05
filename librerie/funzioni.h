double trapezio (double a, double b, int n, double(*f)(double));	//integrale numerico con metodo dei trapezi
double simpson (double a, double b, int n, double(*f)(double));		//integrale numerico con metodo di simpson	
double trapezio_par (double a, double b, int n, double par, double(*f)(double,double));		//integrale numerico con metodo dei trapezi di funzioni patametriche
double simpson_par (double a, double b, int n, double par, double(*f)(double,double));  	//integrale numerico con metodo di simpson di funzioni patametriche
double bisezione (double a, double b, double err, double(*f)(double)); // bisezione per trovare zeri di una funzione (err=errore sul punto x)
double max (double a, double b, double err, double(*f)(double));	// massimo di una funzione (err=errore sul punto x)
double min (double a, double b, double err, double(*f)(double));	// minimo di una funzione (err=errore sul punto x)

double bisezione_par (double a, double b, double err,double par, double(*f)(double,double));
double max_par (double a, double b, double err,double par, double(*f)(double,double));
double min_par (double a, double b, double err,double par, double(*f)(double,double));
