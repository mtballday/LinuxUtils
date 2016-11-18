#include<stdio.h>


int ToBinary(long number, char binary[])
{
  int ii;

  long digits=4;
  long xx=8;

  while(xx<<1<=number){
    xx=xx<<4;
    digits+=4;
  }

  ii=0;
  while(xx>1){
    printf("%d", (number&xx) ? 1:0);
    xx=xx>>1;
    if(++ii%4==0) printf(" ");
  }
  printf("%d\n", (number&xx) ? 1:0);
}


int main(int argc, char* argv[]){

  long value;
  char* binary[32];

  if(argc<2){
    printf("Must provide a hex number\n");
    return(-1);
  }

  sscanf(argv[1], "%d", &value);

  printf("$%x\n", value);
  ToBinary(value, *binary);
}
