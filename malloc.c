#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,t,n;
	int *arr;
	printf("enter the number ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof (int));
	printf("enter the number is %d\n",n);
	for(i=0;i<n;i++){
		scanf("%d",arr[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for (i=0;i<n;i++){
	
	printf("%d",arr[i]);
}   
free(arr);
return 0;
}