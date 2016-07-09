main : main.o libalg.a
	cc -o bin/main bin/main.o -L bin -l alg

main.o :
	cc -I include -c src/main.c -o bin/main.o

alg.o : 
	cc -I include -c src/alg.c -o bin/alg.o

libalg.a : alg.o
	ar crv bin/libalg.a bin/alg.o 








