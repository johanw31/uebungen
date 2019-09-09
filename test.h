

#ifndef SRC_TEST_H_
#define SRC_TEST_H_
#define dabs(x) (x)<0? -(x):(x)

double dmasch (double x);
float  fmasch (float x);
double iterate (double x_0, double eps, unsigned int nmax);
double sqrt (double x);
int strlength (char* string);
int strsearch (char* needle, char* string);

#endif /* SRC_TEST_H_ */
