#include "types.h"
#include "user.h"

#define NUM_PROCESS 5
int main(void)
{
	int pids[NUM_PROCESS];
	for (int i=NUM_PROCESS-1; i>=0; i--) {
		pids[i] = fork();

		if (pids[i] == 0) {
			set_proc_priority(getpid(), (i%6) + 1);
			int pid = getpid();
			int priority = get_proc_priority(pid);

			while(1) {
				int number_of_run = get_number_of_run();
				printf(1, "Prcess %d with priority %d has run %d times\n", pid, priority, number_of_run);
				if (number_of_run >= 100)
					break;
			}
			exit();
		} else if (pids[i] < 0) {
			printf(1, "Fork failed\n");
		}
	}

	for (int i=0; i < NUM_PROCESS; i++) {
		wait();
	}
	exit();
}
