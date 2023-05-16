CLEAN_COMMAND := rm -f *.o Account

ifeq ($(OS),Windows_NT)
	CLEAN_COMMAND := del *.o del Account.exe
endif

program: main.o Account.o
	g++ main.o Account.o -o Account

main.o: main.cc
	g++ -c main.cc

Account.o: Account.cc
	g++ -c Account.cc

clean:
	$(CLEAN_COMMAND)