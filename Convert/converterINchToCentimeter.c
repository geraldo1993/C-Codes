#include <stdio.h>
#include <stdlib.h>

//geraldo braho

int main(void){

float centimeter;
float inches;
int x;

printf("Please enter a value you want to convert \n");
scanf("%f",&centimeter,&inches);
//our functions
inches=centimeter/2.4;
centimeter=inches*2.4;

printf("1.Press 1 if you want to convert centimeters to inches\n");
printf("2.Press 2 if you want to convert inches to centimeters\n");
scanf("%d",&x);

    if(x==1)
   {

   printf("The result in inches is %f:",inches);
}
	else if (x==2){



	printf("The result in centimeter is %f:",centimeter);
   }
   else{

   printf("SORRY !The value you entered is not applicable");
}







	return 0;
}
