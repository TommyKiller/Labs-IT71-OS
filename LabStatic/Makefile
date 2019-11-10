all: binary
binary: main.o libreader.a
	gcc -o binary main.o -L. -l:libreader.a
main.o: main.c       
	gcc -c main.c 
libreader.a: reader.o repeater.o       
	ar cr libreader.a reader.o repeater.o
repeater.o: repeater.c
	gcc -c repeater.c
reader.o: reader.c
	gcc -c reader.c 
clean:        
	rm -f binary *.o *.a
