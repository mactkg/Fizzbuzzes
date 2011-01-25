#include <stdio.h>
main() {
  int i = 1;
  for(; i<101; i++) {
    if( i%15 == 0 ){
      printf("FizzBuzz\n");
      continue;
    }
    if( i%3 == 0 ) {
      printf("Fizz\n");
      continue;
    }
    if( i%5 == 0) {
      printf("Buzz\n");
      continue;
    }else printf("%d\n",i);
  }
  return 0;
}