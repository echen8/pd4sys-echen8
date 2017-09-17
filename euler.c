#include <stdio.h>

int problem1() {

  int n; // Total
  int i; // Threes
  int j; // Fives
  int k; // Fifteens
  for( i = 3; i < 1000; i += 3 ) {
    n += i;
  }
  for( j = 5; j < 1000; j += 5 ) {
    n += j;
  }
  for( k = 15; k < 1000; k += 15 ) {
    n -= k;
  }
  return n;

}

int problem2() {

  int a = 1; // First number
  int b = 2; // Second number
  int n = 0; // Output sum
  
  while( b <= 4000000 ) {

    if( b % 2 == 0 ) {
      n += b;
    }

    int sum;
    sum = a + b;
    a = b;
    b = sum;
  }

  return n;

}

int main() {
  printf( "\n" );
  printf( "The sum of all multiples of 3 and 5 below 1 thousand is:\t%d\n", problem1() );
  printf( "The sum of all even fibonacci numbers up to 4 million is:\t%d\n", problem2() );
  printf( "\n" );
}
