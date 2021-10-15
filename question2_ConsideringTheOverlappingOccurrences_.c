/*******************************************************************
Program to print the number of times a substring occurs in the given string.

This program considers the overlapping occurrences of substring.

**************************************************************/


#include <stdio.h>

#include<string.h>

int main() 
{
    
	char *str, *substr,s1[100],s2[100],*loc;
    
	int len,count=0;
    
	printf("enter the string \n");
    
	gets(s1);
    
	printf("enter the sub string \n");
    
	gets(s2);
    
	str=s1;
    
	substr=s2;
    
	len=strlen(substr);
    
	while ((loc = strstr(str,substr)))
    
	{
       
		 str=loc+1;
        
		count++;
    
	}
    
	printf("the string is : %s \n",s1);
    
	printf("the substring is : %s \n",s2);
    
	printf("number of times the substring occurs in the given string is %d",count);
   
	 return 0;

}
