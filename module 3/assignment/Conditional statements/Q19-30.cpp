/* 19-30
Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
20. Unit
21. Charge/unit
22. upto 350
23. @1.20
24. 350 and above but less than 600
25. @1.50
26. 600 and above but less than 800
27. @1.80
28. 800 and above
29. @2.00
30.
If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
*/


#include<stdio.h>
int main(){
	int custid,unit;
	float charg,surcharg=0,grossamt,netamt;
	char name[25];
	
	printf("enter customer id");
	scanf("%d",&custid);
	printf("enter name");
	scanf("%s",&name);
	printf("unit consumed");
	scanf("%d",&unit);
	
	if(unit<350)
	charg=1.20;
	else if(unit>=350 && unit<600)
	charg=1.50;
	else if(unit>=600 && unit<800)
	charg=1.80;
	else
	charg=2.00;
	
	grossamt= unit*charg;
	
	if(grossamt>300)
	surcharg= grossamt * 18/100.0;
	
	netamt= grossamt + surcharg;
	
	if(netamt<100)
	netamt=100;
	
	printf("\nEletricity bill\n");
	printf("Customer IDNO                      :%d\n",custid);
	printf("Customer name                      :%d\n",name);
	printf("unit consumed                      :%d\n",unit);
	printf("Amount charges @rs. %4.2f per unit :%8.2f\n",charg,grossamt);
	printf("surcharge amt                      :%8.2f\n",surcharg);
	printf("net amt paid by customer           :%8.2f\n",netamt);
	
	
	
	
	
	
}
