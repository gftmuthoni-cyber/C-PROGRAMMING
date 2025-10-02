/*
Name:Gift MUthoni
Reg No:CT101/G/26539/25
Description:Water_bill_calculations
*/
#include <stdio.h>

int main () {
    
   int waterunits;
   float waterbill;
   printf("enter the waterunits consumed:");
   scanf("%d",&waterunits);
   
   if(waterunits <= 30) {
      waterbill = waterunits * 20;
   }  else if(waterunits <=60){
       waterbill =(30*20) + (waterunits -30) *25;
   } else {
       waterbill =(30*20) + (30*25) + (waterunits -60)*30;
   }
   printf("total waterbill %.2fksh\n" ,waterbill);
   
 return 0;
}