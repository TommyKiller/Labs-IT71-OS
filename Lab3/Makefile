brigade: main.o libgroup.so
	gcc -o brigade main.o -L. -lgroup -Wl,-rpath,. 
main.o: main.c       
	gcc -c main.c 
libgroup.so: reader.o        
	gcc -shared -o libgroup.so reader.o 
reader.o: reader.c
	gcc -c reader.c 
clean:        
	rm -f *.o *.so brigade
