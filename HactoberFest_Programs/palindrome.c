#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i=0,j,len;
	printf("\nEnter the string: ");
	gets(str);
	len=strlen(str); //will store the length of the string in len variable
	i=0;
	j=len-1;
	while(i<=len/2){
		if(str[i]==str[j]){ //will check the first and last characters of the string
			i++;
			j--;
		}
		else
			break;
	}
	if(i>j){
		printf("\nPalindrome");
	}else{
		printf("\nNot Palindrome");
	}
	return 0;
}
