#include<studio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,d,area;
printf("enter three sides");
scanf("%d %d %d",a,b,c);
s=(a+b+c);
d=(s*(s-a)*(s-b)*(s-c));
area=sqrt(d);
printf("area of triangle=%f sq units \n",area);
getch();
}
//RESULT
Enter three sides: 5 6 7
Area of triangle =14.696939 sq units 

