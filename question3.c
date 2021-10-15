/******************************************************************   Program to convert all lowercase letters to uppercase letters and vice versa

in a given string. ****************************************************************/


#include <stdio.h>

#include<string.h>

char s1[100],s2[100],ch;

int c=0;

void readstr(void);

void swapcase(void);

void printstr(void);

void main()

{
    
	readstr();
   
	swapcase();
    
	printstr();

}

void readstr()

{
    
	printf("enter the string \n");
    
	gets(s1);

}

void swapcase()

{
    
	while(s1[c]!='\0')
 
	{
       
		 ch=s1[c];
    
   		 if (ch >='A' && ch<='Z')
        
		{
            
			s2[c]=s1[c]+32;
       
		 }
        
		else if(ch>='a' && ch <='z' )
  
    		  {
           
			 s2[c]=s1[c]-32;
        
		}
        
		else
		{
        
  			  s2[c]=s1[c];
       
 		}
       
		 c++;
        
  
 	 }

}

void printstr()

{
    
	printf("the original string : %s \n",s1);
    
	printf("the string after swap cases : %s \n",s2);

}