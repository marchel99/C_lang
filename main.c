#include <stdio.h>
int find_min(int myArray[], int length);

int main (){


int myArray1[]={3,55,1};
printf("minimum to: %d\n", find_min(myArray1,3) );



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


