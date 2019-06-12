#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ACTIME 0.01
#define ACTSPEED 200


int cur_act[6] = {0,0,0,0,0,0};
int sensor;


void delay (int sec) {
    int retTime = time(0) + sec;   
    while (time(0) < retTime);              
}

void stop(int i)
{
	printf("\n Stopping actuator %d",i);
}


void print(int *array, int n)
{
	int i;	
	//printf(" %d ",n);
	printf("\n");
	printf("Printing");	
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
}


void reset1(int i)
{
	printf("\nActuator%d back to mean position",i+1);
	cur_act[i]=0;
}

void lift(int i)
{
	printf("\nActuator %d lifting",i+1);
	cur_act[i]=1;
}

void liftMultiple(int *arr)
{
	int i;
	for(i=0;i<6;i++)
	{
		if((cur_act[i]==0)&&(arr[i]==1))	
		{
			lift(i);
			cur_act[i]=1;
		}
	}

	delay(ACTIME);

	for(i=0;i<6;i++)
	{
			if((cur_act[i]==1)&&(arr[i]==0))
			{
				reset1(i);
				cur_act[i]=0;
			}	
	}
}

void create_track(int *array)
{
	int i;
	for(i=0;i<26;i++)
		array[i]=0;	
}

void create(int *array)
{
	int i;
	for(i=0;i<26;i++)
		array[i]=i;	
}

void move(int *array)
{
	int i;
	for(i=25;i>0;i--)
	{
		array[i]=array[i-1];
	}
}


void run(int *track, int *temp_act)
{
	temp_act[0]=track[3];
	temp_act[1]=track[5];
	temp_act[2]=track[13];
	temp_act[3]=track[15];
	temp_act[4]=track[23];
	temp_act[5]=track[25];
}



int main()
{
	int track[27];
	int index[26];
	create(index);	
	int temp_act[6] = {0,0,0,0,0,0};
		
	create_track(track);	
	printf("\n%d",track[21]);
	printf("\n%d",track[22]);
	do
	{
		printf("\nSensor input: ");
		scanf("%d",&sensor);
		track[0]=sensor;
		run(track,temp_act);
		print(index,26);
		print(track,26);
		print(temp_act,6);
		liftMultiple(temp_act);		
		move(track);		
	}while(sensor!=-1);
	return 0;
}


