// This simple program shows call-by-reference type function call
#include<stdio.h>

#define PI 3.14

// Prototypes
void getR(double *c);
double surf(double *a);
void print(double b);

int main()
{
  double r; 

  getR(&r); // This function call-by-reference type
  //printf("Read val = %lf\n", r);
  
  double s = surf(&r); // This function is call-by-value type

  print(s);

  return 0;
}

// Function descriptions
void getR(double *c){
  double r;
  printf("Please enter radius: ");
  scanf("%lf", &r);
  *c = r;
}


double surf(double *a){
  double srf = PI * (*a) * (*a);
  return srf;
}

void print(double b){
  printf("The surface of circle = %lf\n", b);
}

