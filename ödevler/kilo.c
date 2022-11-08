#include <stdio.h>
int main()
{   
    float kilo,boy,vki;
    printf("kilonuzu girin:");
    scanf("%f",&kilo);
    printf("boyunuzu girin:");
    scanf("%f",&boy);
    if(boy>3)
    {
        boy = boy/100;
    }
    vki = (kilo+0.000001)/(boy*boy);
    
    printf("vücut kütle indeksiniz : %.2f",vki);
    if(vki<18.5)
    {
        printf("\nyani düşük kilolusunuz");
    }
    if(vki>18.5 && vki < 24.99 )
    {
        printf("\nyani normal kilodasınız");
    }
    if(vki>24.99 && vki<29.99)
    {
        printf("\nyani fazla kilolusunuz");
    }
     if(vki>29.99)
    {
        printf("\nyani obezsiniz");
    }
    if(vki<29.99 && vki>20.5)
    {int yas; printf("kilonuz uygun bulundu\n yasinizi girin:");scanf("%d",&yas);
    if(yas >= 17 && 21 >= yas){
        printf("uygun bulundunuz");
    }
    }
    return 0;
    
}    