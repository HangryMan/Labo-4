#include <stdio.h>

void main(void) {
    int n = 0, counter = 0;						
	scanf("%d", &n);				
    float arr[n], sum = 0, avg = 0;					
    
    for (int i = 0; i < n; i++) {	
    	scanf("%f", &arr[i]);
		sum += arr[i];		
	}
	
	avg = sum/n;

	for(int i = 0; i < n; i++) {
		if(arr[i] <= avg) {
			counter++;
		}		
	}
	
	printf("%d", counter);
}
