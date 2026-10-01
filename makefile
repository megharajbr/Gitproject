abc.exe: big3.o fact.o
	gcc -o abc.exe big3.o fact.o
big3.o: big3.c
	gcc -c big3.c
fact.o: fact.c
	gcc -c fact.c
clean:
	rm -rf *.o *.exe
      


