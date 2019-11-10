all: binary 
binary: main.o libreader.so
	gcc -o binary main.o -L. -lreader -Wl,-rpath,. 
main.o: main.c       
	gcc -c main.c 
libreader.so: reader.o repeater.o       
	gcc -shared -o libreader.so reader.o repeater.o 
repeater.o: repeater.c
	gcc -c -fPIC repeater.c
reader.o: reader.c
	gcc -c -fPIC reader.c 
clean:        
	rm -f binary *.o *.so 
