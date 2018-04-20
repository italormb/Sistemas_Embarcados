bib_arqs: q4.o bib_arqs.o
	gcc $(CFLAGS) -o bib_arqs q4.o bib_arqs.o
q4.o: q4.c bib_arqs.h
	gcc $(CFLAGS) -c q4.c
bib_arqs.o: bib_arqs.c bib_arqs.h
	gcc $(CFLAGS) -c bib_arqs.c
clean:
	rm -f *.o bib_arqs