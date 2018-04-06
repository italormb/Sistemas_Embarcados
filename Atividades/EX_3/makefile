


num_caracs: q9.o num_caracs.o
	gcc $(CFLAGS) -o num_caracs q9.o num_caracs.o
q9.o: q9.c num_caracs.h
	gcc $(CFLAGS) -c q9.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc $(CFLAGS) -c num_caracs.c
clean:
	rm -f *.o num_caracs