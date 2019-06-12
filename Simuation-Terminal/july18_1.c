#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ACTIME 10

void delay (int sec) {
    int retTime = time(0) + sec;   
    while (time(0) < retTime);              
}

void stop(int i)
{
	printf("\n Stopping actuator %d",i);
}


void reset1(int i)
{
	printf("%d back to mean position",i);
}

void resetMultiple(int *arr)
{
	int i;
	for(i=0;i<6;i++)
	{
		reset1(i);
	}

	delay(ACTIME);

	for(i=0;i<6;i++)
	{
		stop(i);	
	}	
}

void lift(int i)
{
	printf("\nActuator %d lifting",i);
}

void liftMultiple(int *arr)
{
	int i;
	for(i=0;i<6;i++)
	{
		lift(i);
	}

	delay(ACTIME);

	for(i=0;i<6;i++)
	{
		stop(i);	
	}
}



int current[6] = {0,0,0,0,0,0};

void main()
{
	//lift(2);
	liftMultiple(current);
	//stop(2);
}
