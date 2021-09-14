LEDALIB='/usr/local/LEDA'
LEDAINCL='/usr/local/LEDA/incl'

compile:
	g++ -std=c++0x -o run -O2 main.cpp generator.cpp generator.h function.cpp function.h mrBFS.cpp mrBFS.h -I$(LEDAINCL) -L$(LEDALIB) -lleda
	./run

clean:
	rm -f run
