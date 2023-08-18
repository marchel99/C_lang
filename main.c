#include <stdio.h>

int main (){



int myArray[]={3,55,1};
int min;

min=myArray[0];



for (int i=0;i<3;i++)
{
printf("sprawdzam..%d,aktualne min to %d\n",myArray[i],min);
    if (myArray[i]<min) {
        min=myArray[i]; printf(" zmieniam na.. %d",min);
        };


}

printf("minimum to: %d\n",min);

return 0;
}


