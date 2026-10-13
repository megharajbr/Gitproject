  all: big3 fact pallin reverse

big3: big3.c
	gcc -o big3 big3.c

fact: fact.c
	gcc -o fact fact.c

pallin: pallin.c
	gcc -o pallin pallin.c

reverse: reverse.c
	gcc -o reverse reverse.c

.PHONY: clean

clean:
	rm -f big3 fact pallin reverse    


