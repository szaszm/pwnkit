all: payload/payload.so pwnkit

payload/payload.so: payload.c
	${CC} ${CFLAGS} -o payload/payload.so -shared -fPIC payload.c 

pwnkit: pwnkit.c
	${CC} ${CFLAGS} -o pwnkit pwnkit.c 

.PHONY: clean
clean:
	rm -f payload/payload.so pwnkit 2>/dev/null
