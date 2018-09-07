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
	char info[20];
	key = msgget(111,0666|IPC_CREAT);
	printf("Creating Message queue\n");	
	fgets(info,20,stdin);
	box.var=1;
	strcpy(box.buff,info);
	msgsnd(key,&box,sizeof(box),0);
	return 0;
}
