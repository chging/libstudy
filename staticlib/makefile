VPATH = src:bin:include #定义搜索目录

main : main.o libalg.a
	cc -o bin/main main.o -l alg

main.o :
	cc -o bin/main.o -c main.c 

alg.o : 
	cc -o bin/alg.o -c alg.c 

libalg.a : alg.o
	ar crv bin/libalg.a alg.o 








