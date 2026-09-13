//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float length, breadth, area,perimeter;
    printf("Enter the length:\n");
    scanf("%f", &length);
    
    printf("Enter the breadth:\n");
    scanf("%f", &breadth);
    
    area= length*breadth;
    printf("area is %.2f\n", area);
    
    perimeter= length* length + breadth*breadth;
    printf("perimenter is %.2f\n",perimeter);
    return 0;
}
