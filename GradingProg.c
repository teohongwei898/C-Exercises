#include <stdio.h>
int main(void){
int num;
printf("Welcome, please enter your mark:\n");
scanf("%d",&num);
printf(" You have entered your marks as: %d", num); 
if(num >= 80){
printf(" Good job! You have gotten an 'A' grade!"); 
}
else if ( num >=70){ 
printf(" Keep working hard! You got a 'B' grade.");
}
else if ( num >=50){
printf(" You just passed your exams with a 'C' grade. Please work hard in your next exams!");
}

else if ( num < 40){
printf(" You have failed in this exam, please do consult your tutor about this.");
}
return 0;
}
