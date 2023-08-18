#include <stdio.h>

int main (){



int myArray1[]={3,55,1};




int min1=find_min(myArray1,3);

printf("minimum to: %d\n", min1 );





return 0;
}

int find_min(int myArray[], int length){
int min;

min=myArray[0];



for (int i=0;i<3;i++)
{
printf("sprawdzam..%d,aktualne min to %d\n",myArray[i],min);
    if (myArray[i]<min) {
        min=myArray[i]; printf(" zmieniam na.. %d",min);
        };


}


return min;

}


