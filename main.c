#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// you may want to use these functions in your program
// converts a string to lowercase
char* toLower(char* s) {
  for(char *p=s; *p; p++) *p=tolower(*p);
  return s;
}

// converts a string to uppercase
char* toUpper(char* s) {
  for(char *p=s; *p; p++) *p=toupper(*p);
  return s;
}


/*
 * checks if the contents of string str1 and str2 are equal
 * first convert both strings to lowercase or uppercase
 * then use strcmp() function to compare
 * return 1 if equal. Else 0.
 * YOU MAY USE ANY STRING FUNCTION 
 */
int equalStr(char str1[], char str2[]){
	// Your code here
}


/*
 * exchanges the contents of string str1 and str2
 * You may assume that length of str1 and str2 is equal
 * YOU MAY USE strcpy function
 */
void exchangeStr(char *str1, char *str2)
{
	// write your code below
}


/*
 * find the substring "love" in str
 * DO NOT USE any string functions 
 * returns the index of "l" of substring "love"
 * returns -1 if not found
 * For example: findLove("hello love") == 6;
 * For example: findLove("hello loove") == -1;
 */
int findLove(char str[])
{
	// write your code below
}




int main() 
{
	char str1[] = "geeks\0"; 
	char str2[] = "forgeeks\0";
	char str3[] = "geeks\0"; 
	char str4[] = "forgeeks\0"; 	
	exchangeStr(str1, str2);

	if (strcmp(str1, str4) == 0 && strcmp(str2, str3)==0){
		printf("exchangeStr test passed!\n");
	}
	else{
		printf("exchangeStr test failed!\n");
	}
	
	
	if (findLove("loving dove\0") == -1 && findLove("wanna be my lover\0") == 12){
		printf("findLove test passed!\n");
	}
	else{
		printf("findLove test failed!\n");
	}
	
		
	char str5[] = "radar\0";
	char str6[] = "RadaR\0";
	char str7[] = "joke\0";
	char str8[] = "joker\0";
  	
	if (equalStr(str5, str6)==1 && equalStr(str7, str8)==0){
		printf("EqualStr test passed!\n");
	}
	else{
		printf("EqualStr test failed!\n");
	}
	

	return 0;
}
