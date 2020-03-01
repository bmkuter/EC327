GCC = g++

OBJS = mode.o readfile.o

default: ModeMain

ModeMain: $(OBS)
	$(GCC) ModeMain.cpp -o ModeMain

readfile.o: readfile.cpp readfile.h
	$(GCC) -c readfile.cpp -o readfile.o

mode.o: mode.cpp mode.h
	$(GCC) -c mode.cpp -o mode.o

clean: 
	rm $(OBJS) ModeMain