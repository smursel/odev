#include <stdio.h>                         

int main()
{
	int deger;
	printf("kaç satırlık üçgen istersiniz:");
	scanf("%d",&deger);
	for (int i=1;deger >= i;i++) {
	    
		printf("\n#");
		for(int k = i;k-1 > 0; k--){
		    printf("#");
		}
	}
}
