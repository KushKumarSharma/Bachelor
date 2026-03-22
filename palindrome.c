#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (){
	char str[50],rev[50];
	printf("eneter the string ");
	scanf("%s",str);
	
	strcmp(rev,str);
	strrev(rev);
	
	if(strcmp(rev,str)==0)
	printf("the string is palindrome %s",str);
 else 
 printf("the ssting is not palindeome%s",str);
 return 0;

}