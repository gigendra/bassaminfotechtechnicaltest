/* ******************************************************** 
Program to swap the values of two integer variables var1 and var2 without the use of a third variable
   ************************************************************
 */
        
#include <stdio.h>
int main() 
{
    
	int var1,var2;
    
	printf("enter two integers \n");
   
	scanf("%d %d",&var1,&var2);
    
	printf("the values of integer variables before swap \n var1=%d and 	var2=%d \n",var1,var2);
    
	var1=var2+var1;
    
	var2=var1-var2;
    
	var1=var1-var2;
    
	printf("the values of integer variables after swap \n var1=%d and 	var2=%d",var1,var2);
   
 	return 0;

}