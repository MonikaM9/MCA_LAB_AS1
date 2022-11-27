#include <lpc214x.h>
#include"segment.h"

unsigned int arr[]= {0xf3, 0x12, 0x163, 0x133, 0x192, 0x1b1, 0x1f1, 0x13, 0x1f3, 0x1b3};
unsigned int arr1[]={0x0ff30000, 0x00120000, 0x1630000, 0x1330000, 0x1920000, 0x1b10000, 0x1f10000, 0x130000, 0x1f20000,0x1b30000};
int main(){
PINSEL0=0x00000000;
IODIR0=0x0000FFFF;
PINSEL2=0x00000000;
IODIR1 =0xFFFF0000;
int i, j=9;

while(1){
IOSET1 |= arr1[j];
for(i=9; i>0; i++){
IOSET0 |=arr[i];
delay(15);
IOCLR0 |=arr[i];
delay(2);
}
IOCLR1 |=arr1[j];
j--;
}
return 0;
}
