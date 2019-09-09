#include <stdlib.h>
#include <stdio.h>
#include "test.h"


double sqrt (double x){
	double a = x;
	for (int i=0;i<5;i++){
		x = x-((x*x-a)/(2*x));
	}
return x;
}


double iterate (double x_0, double eps, unsigned int nmax){
	double delta, relDelta, x_k_1,x_k = x_0;
	unsigned int k = 0;

	do {
		x_k_1 = x_k;
		x_k  = x_k-((x_k*x_k-x_0)/(2*x_k));;
		delta = dabs ((x_k_1 - x_k));
		relDelta = (100/x_0) * delta ;
		printf ("debug\n");

	}while (delta > eps && ++k < nmax);

	return x_k;
}



double dmasch (double x){
	while ((x+1)-1 != 0){
		x=x/2;
	}
	return x;

}

float fmasch (float x){
	while ((x+1)-1 != 0){
		x=x/2;
	}
	return x;

}

int strlength (char* string){
	int counter = 0;
	while (*string++){
		counter++;
	}
	return counter;
}

int strsearch (char* needle, char* string){
	int length1 = strlength (needle);
	int length2 = strlength (string);
	int needlePos;
	for (int i = 0; i<length2; i++){
		if (string[i] == needle[0]){
			needlePos = i;
			for (int j=0; j<length1; j++){
				if (string[i+j] != needle[j]) needlePos = -1;
			}
		}
	}
	return needlePos;
}
