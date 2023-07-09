main: lib/libkedi.so main.c
	gcc main.c -Iinclude -Llib -lkedi -o main

lib/libkedi.so: lib/kedi.o
	gcc -shared lib/kedi.o -o lib/libkedi.so

lib/kedi.o: lib/src/kedi.c
	gcc -c lib/src/kedi.c -Iinclude -fPIC -o lib/kedi.o

run:
	LD_LIBRARY_PATH=lib kedi

clean:
	rm -rf lib/*.*o
	rm -rf main