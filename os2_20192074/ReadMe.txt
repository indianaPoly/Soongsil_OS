syscall.c : syscall.h에 정의한 번호에 따라서 sys_forknexec 함수를 호출하는 파일

syscall.h : SYS_forknexec 시스템 호출 번호를 정의한 파일 

sysproc.c : sys_forknexec 함수를 정의한 파일

proc.c : fork 와 exec 기능을 합친 시스템 콜을 구현한 파일

usys.S : forknexec 시스템 콜을 호출을 수행하는 어셈블리 코드 작성한 파일

user.h : forknexec 함수를 호출하기 위해서 함수 원형을 정의한 파일

Makefile : 빌드 및 컴파일 하여 forknexec 시스템 콜을 xv6에서 작동하도록 설정한 파일 

forknexec.c : forknexec 시스템콜 호출 시 작업할 내용을 적은 파일