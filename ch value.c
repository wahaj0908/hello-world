#include<stdio.h>
int main ()
{
	char c;
	printf("Enter any character:");
	scanf("%c", &c);

	if (c>=65 && c<=90)
	printf("Character is a capital letter");
	
	else if (c>=97 && c<=122)
	printf("Character is a small letter");
	
	else if (c>=48 && c<=57)
	printf("Character is a digit");
	
	else if ((c>0 && c<=47)||(c>=58 && c<=64) ||
    (c>=91 && c<=96)||(c>=123 && c<=127)) 
    printf("Character is a special symbol");	
}

