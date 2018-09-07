#include"header.h"
typedef struct block
{
	long int var;	
	char buff[20];
}block;
int main()
{
	int key;
	block box;
	key = msgget(111,0666|IPC_CREAT);
	printf("Creating Message queue\n");	
	msgrcv(key,&box,sizeof(box),1,0);
	printf("%s",box.buff);
	return 0;
}
