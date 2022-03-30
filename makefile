x: main.cpp Money.o Account.o
	g++ -o x main.cpp Money.o Account.o

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

clean:
	rm -f x *.o