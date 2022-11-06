#include <stdio.h>
// klavyeden n adet sayı girilir;
// kaç tanesi çift,kaç tanesi tek;ekrana yazdırılır

int main() 

{
 
 int sayi,i,n;
 
 int TekSayaci = 0,CiftSayaci = 0;
 
 printf("Kac tane sayi girmek istersiniz?: ");
 scanf("%d",&n);        
 
 for(i = 1 ; i <= n ; i++)
 {	
  printf("%d.sayi: ",i);
  scanf("%d",&sayi); 
   
  if(sayi % 2 == 0) 
  {
   CiftSayaci++;
  }
   
  else
  {	
   TekSayaci++;	
  }
 }
 
  printf("%d tane cift sayi var\n",CiftSayaci);
  printf("%d tane tek sayi var",TekSayaci);
 
  return 0;

}