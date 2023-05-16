CLEAN_COMMAND := rm -f *.o Address

ifeq ($(OS),Windows_NT)
	CLEAN_COMMAMD := del *.o del Address.exe
endif

program: main.o Address.o
	g++ main.o Address.o -o Address

main.o: main.cc
	g++ -c main.cc

Address.o: Address.cc
	g++ -c Address.cc

clean:
	$(CLEAN_COMMAMD)
