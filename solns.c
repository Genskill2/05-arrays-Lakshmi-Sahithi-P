/* Enter your solutions in this file */
#include <stdio.h>

/*....MAX....*/
int max(int a[], int size){
  
  	int i, max;
  	max = a[0];
  	
  	for(i=1 ; i<size; i++){
  	
  		if(max < a[i]){
  		max= a[i];
  		}
    	}
  	  
  	return max;  
  }

/*.....MIN......*/
int min(int a[], int size){
  
  	int i, min;
  	min=a[0];
  	
  	for(i=1; i<size; i++){
  	
  	if(min>a[i]){
  	  		min=a[i];
  	 	}
  		}
  	 	return min;
  }

/*......AVERAGE......*/
float average(int a[], int size){
 
 	int i, sum = 0;
 	float average = 0.0;
 	
 	for(i=0; i<size; i++){
 		
 		sum = sum + a[i];
 		
 	}
 	
 	average = (sum/size);
 	
 	return average;
 } 

/*......MODE.....*/
 int mode(int a[], int size){

	int high, low, k=0, ans;
	int count_size;
	int mode=0;
	
	high = max(a, size);
	low = min(a, size);
	if(high==low){mode=high;}
	else{
	if(low<0){
		count_size = (high - low)+1;
	}
	else {
		count_size = (high + low)+1;
	}
	
	int count[count_size];
	
	count[0]= low;
	for(int i=1; i<(count_size); i++){
	
		count[i] = count[i-1]+1;
	
	}
	
	for(int i=0; i<count_size; i++){
			
			k=0;
			
	   for(int j=0; j<size; j++){
		
		if(count[i]==a[j])
			{
				k++;
			}
		
	   }
		count[i]=k;
	}
	

	  int w=0;	
		ans = max(count, count_size);
	
	for(int l=0; l<count_size; l++){
		if(ans==count[l]){
			break;
		}
		
		else{
			w++;
		}
	}
		
	
	if(low<0){mode = w+low;}
	else{mode = w - low;}
 }		
		
		return mode;
}  

/*......FACTORS....*/
int factors(int num, int f[]){
	
	int k=0;
	int primes[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	for(int i=0; i<15; i++){
	
		
	while(num%primes[i]==0){
	
		num=num/primes[i];
		f[k]=primes[i];
		k++;
	}
	}
		return k;
}
