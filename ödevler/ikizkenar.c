#include <stdio.h>
int i;
int main(){
int ucgen;
int satirsayisi = 0;
    printf("üçgen yüksekliği:");
    scanf("%d",&ucgen);
    for(int m = 0; m<ucgen; m++){
   for(i = 0; i<ucgen-satirsayisi; i++)
   {
   printf(" "); 
   }
   i=0;
    for(i=0;i<satirsayisi*2+1;i++)    
    
    {
       printf("*");  

    }
    
   if(i==satirsayisi*2+1){
           printf("\n");
           satirsayisi++;
    }
}
}