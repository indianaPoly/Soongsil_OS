syscall.c : syscall.h에 정의한 번호에 따라서 sys 함수를 호출하는 파일 

syscall.h : 시스템 호출 번호를 정의

sysproc.c : sys_set_proc_priority, sys_get_proc_priority, sys_get_number_of_run 함수를 정의

proc.c : scheduler 함수 수정 및 set_proc_priority, get_proc_priority, get_number_of_run 함수 정의

usys.S : 시스템 콜 호출을 수행하는 어셈블리 코드를 작성한 파일

defs.h : proc.c에서 시스템 콜을 사용하기 위해 시스템 콜 원형을 정의

user.h : prioritytest.c에서 시스템콜을 사용하기 위해 시스템 콜 원형을 정의

Makefile : priroitytest user application을 등록

prioritytest.c : priority schedule을 확인하기 위한 user application