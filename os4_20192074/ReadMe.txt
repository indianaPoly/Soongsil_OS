kalloc.c : getNumFreePages 시스템콜 함수 작성 및 참조 횟수 관련 함수 정의 및 기존 함수 수정

vm.c : copyuvm 수정 및 pagefault 함수 정의

defs.h : 외부 파일 함수 사용하도록 함수 원형 정의

syscall.c : syscall.h에 정의한 번호에 따라 sys_getNumFreePages 함수 호출하는 파일 

syscall.h : SYS_getNumFreePages 시스템 호출 번호 정의

sysproc.c : sys_getNumFreePages 함수 정의

user.h : getNumFreePages 함수를 호출하기 위해 함수 원형 정의

usys.S : getNumFreePages 시스템 콜을 호출을 수행하는 어셈블리 코드 작성한 파일 

trap.c : page fault가 일어날 경우에 pagefault() 함수 실행하도록 작성

testcode.c : getNumFreePages 시스템콜 호출하여 필요한 결과를 확인하는 테스트 코드 작성

Makefile : 빌드 및 컴파일 하여 getNumFreePages 시스템 콜을 xv6에서 작동하도록 설정한 파일