CC = cc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2

TARGET = phonebook
SRCS = 	main.c hash-maps.c
OBJS = main.o hash-maps.o

.PHONY:all clean

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

hash-maps.o: hash-maps.c hash-maps.h
	$(CC) $(CFLAGS) -c hash-maps.c

main.o: main.c hash-maps.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(OBJS) $(TARGET)
