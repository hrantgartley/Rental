
CLEAN_COMMAND := rm -f *.o Rental

ifeq ($(OS),Windows_NT)
    CLEAN_COMMAND := del *.o Rental.exe
endif

Rental: main.o Rental.o 
	g++ -o Rental main.o Rental.o 

main.o: main.cc
	g++ -c main.cc

Rental.o: Rental.cc
	g++ -c Rental.cc

clean:
	$(CLEAN_COMMAND)
