## For Jeremy S, keepinme99


EXEC = hex_proj

SOURCES = \
main.cpp \
HexInt.cpp \
Utils.cpp

all:
	g++ -Wall -Werror -I. $(SOURCES) -o $(EXEC)

run:
	./$(EXEC) input output

clean:
	rm $(EXEC)
	rm output