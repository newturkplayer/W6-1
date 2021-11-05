// Agregate types: Arrays
// Sending array as a parameter
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_arr(int aa[], int l);
void print_arr(int a[], int l);
int get_total(int a[], int l);

int main()
{
  int arr[4]; // = {1,23,64,4};
  fill_arr(arr, 4); // Fill the array with random numbers
  print_arr(arr, 4); // Print
  int t = get_total(arr, 4); // Get the total
  printf("Total = %d\n", t);
  return 0;
}


void fill_arr(int aa[], int length){
  srand(time(NULL));
  for(int i = 0; i < length; i++){
    aa[i] = (int) rand();
  }
}

void print_arr(int aa[], int length){
  printf(" a = {"); 
  for(int i = 0; i < length; i++)
    if(i == 0)
      printf("%d", aa[i]);
    else
      printf(", %d", aa[i]);
  printf("}\n");
}

int get_total(int aa[], int length){
  int tot = 0;
  for(int i = 0; i < length; i++){
    tot += aa[i];
  }
  return tot;
}
