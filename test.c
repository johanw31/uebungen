#include <stdlib.h>
#include <stdio.h>
#include "test.h"

double sqrt(double x) {
	double a = x;
	for (int i = 0; i < 5; i++) {
		x = x - ((x * x - a) / (2 * x));
	}
	return x;
}

double iterate(double x_0, double eps, unsigned int nmax) {
	double delta, relDelta, x_k_1, x_k = x_0;
	unsigned int k = 0;

	do {
		x_k_1 = x_k;
		x_k = x_k - ((x_k * x_k - x_0) / (2 * x_k));
		;
		delta = dabs((x_k_1 - x_k));
		relDelta = (100 / x_0) * delta;
		printf("debug\n");

	} while (delta > eps && ++k < nmax);

	return x_k;
}

double dmasch(double x) {
	while ((x + 1) - 1 != 0) {
		x = x / 2;
	}
	return x;

}

float fmasch(float x) {
	while ((x + 1) - 1 != 0) {
		x = x / 2;
	}
	return x;

}

int strlength(char *string) {
	int counter = 0;
	while (*string++) {
		counter++;
	}
	return counter;
}

int strsearch(char *needle, char *string) {
	int length1 = strlength(needle);
	int length2 = strlength(string);
	int needlePos;
	for (int i = 0; i < length2; i++) {
		if (string[i] == needle[0]) {
			needlePos = i;
			for (int j = 0; j < length1; j++) {
				if (string[i + j] != needle[j])
					needlePos = -1;
				if (needlePos != -1 && (j == length1 - 1))
					return needlePos;
			}
		}
	}
	return needlePos;
}

int faculty(int fakultaet) {
	if (fakultaet == 1)
		return 1;
	return fakultaet * faculty(fakultaet - 1);
}

int power(int basis, int exponent) {
	if (exponent == 1)
		return basis;
	return basis * power(basis, exponent - 1);
}

void swapInt(int *A, int *B) {
	int tmp = *A;
	*A = *B;
	*B = tmp;
}

int ggt(int A, int B) {
	int GGT;
	int rest = 1;
	if (A < B) { swapInt (&A,&B);}
	while (rest) {
		rest = A % B;
		GGT = A / B;
		A = B;
		B = rest;
	}
	return A;

}

int kgv (int A, int B){
	return (A / ggt(A,B))*B;
}

void strcopy (char* source, char* copy){
	int n = strlength(source);
	int i=0;
	for (;i<n;i++){
		copy[i] = source[i];
	}
}

void printstr (char *s){
	while (s){
	putchar(*s++);
	}
}


float getfloat(){
	float a;
	scanf("%f",&a);
	getchar();
	return a;
}



void quickSort (int* A, int L , int R){
	int n = sizeof(A) / sizeof(int);
	int i = 0,j=n-1;
	int pivot = A[i];

	while (i < j){
		do {
			i++;
		} while (A[i]<pivot);
		do {
			j--;
		} while (A[j]>pivot);
		if (i<j)swapInt (&A[i],&A[j]);
	}
	swapInt (&A[j],&A[0]);
    
}





