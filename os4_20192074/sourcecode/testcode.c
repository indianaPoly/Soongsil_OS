#include "types.h"
#include "stat.h"
#include "user.h"

int i = 3;
int main(void)
{
	int pid;
	int num= getNumFreePages();
	printf(1, "1 : %d\n", num);
	char memory[100];
	strcpy(memory, "Hi");
	num = getNumFreePages();
	printf(1, "2 : %d\n", num);
	pid = fork();
	if (pid == 0) {
		int num_child1 = getNumFreePages();
		printf(1, "3 : %d\n", num_child1);
		i = 4;
		num_child1 = getNumFreePages();
		printf(1, "4 : %d\n", num_child1);
		memory[0] = 'z';
		num_child1 = getNumFreePages();
		printf(1, "5 : %d\n", num_child1);
	} else if (pid > 0) {
		wait();
		num = getNumFreePages();
		printf(1, "6 : %d\n", num);
	}
	exit();
}
