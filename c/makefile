# Should I add variables to this to simplify?
# Doesn't seem like there's a flexible way to do this,
# at least not in the intro tutorials

all: a.out

a.out: main.c libfoo.so
	gcc -L./ -Wall -o a.out main.c -lfoo

libfoo.so: foo.o
	gcc -shared -o libfoo.so foo.o

foo.o: foo.c
	gcc -c -Wall -Werror -fpic foo.c -o foo.o

clean:
	rm *o *.out
