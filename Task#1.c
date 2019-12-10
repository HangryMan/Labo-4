#include <stdio.h>

void main(void) {
    int n = 0;						
	scanf("%d", &n);				
    float arr[n];					
    
    for (int i = 0; i < n; i++) {	
    	scanf("%f", &arr[i]);		
	}								
	
	for (int i = 0; i < n; i++) {	
    	if (arr[i] < 0) {
			printf("%0.1f ", arr[i]);
		}		
	}		
	
	for (int i = 0; i < n; i++) {	
		if (arr[i] >= 0) {
			printf("%0.1f ", arr[i]);
		}		
	}							
}
