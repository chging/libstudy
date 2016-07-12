#指定编译器，gcc默认无法链接到c++库
CC = g++
CFLAGS = -Wall

objects = bin/main.o bin/libalg.so

main : $(objects)
	$(CC) $(CFLAGS) -o bin/main bin/main.o -L bin -l alg

main.o :
	$(CC) $(CFLAGS) -I include -c src/main.cpp -o bin/main.o

libalg.so : 
	$(CC) $(CFLAGS) -shared -I include -c src/alg.cpp -o bin/libalg.so
#清除中间文件
.PHONY : clean
clean :
	rm $(objects)








