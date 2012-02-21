#Date To Day

all: main

main: main.cpp day.cpp day.h
	g++ -Wall -o datetoday main.cpp day.cpp

clean:
	rm -f *.o a.out core datetoday


