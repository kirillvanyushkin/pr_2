CC = gcc
CFLAGS = -Wall

OBJ = menu.o index_first_negative.o index_last_negative.o multi_between_negative.o multi_before_and_after_negative.o

menu: $(OBJ)
	$(CC) $(CFLAGS) -o menu $(OBJ)

menu.o: menu.c index_first_negative.h index_last_negative.h multi_between_negative.h multi_before_and_after_negative.h
	$(CC) $(CFLAGS) -c menu.c

index_first_negative.o: index_first_negative.c index_first_negative.h
	$(CC) $(CFLAGS) -c index_first_negative.c

index_last_negative.o: index_last_negative.c index_last_negative.h
	$(CC) $(CFLAGS) -c index_last_negative.c

multi_between_negative.o: multi_between_negative.c multi_between_negative.h
	$(CC) $(CFLAGS) -c multi_between_negative.c

multi_before_and_after_negative.o: multi_before_and_after_negative.c multi_before_and_after_negative.h 
	$(CC) $(CFLAGS) -c multi_before_and_after_negative.c

clean:
	rm -f *.o menu
