#include <stdio.h>



int main(){
	int i = 0, n, x, y, g, f = 0;
	scanf("%d",&n);
	while (i < n){
		scanf("%d %d %d",&x,&y,&g);
		if ((x + y + g) >= 2){
			f++;
		}
		i++;
	}
	printf("%d",f);
    return 0;
}