CC=g++
CFLAGS=-Wall -Werror
EXECUTABLE=bin/program
SRC_BUILD_DIR=build/
SRC_DIR=src/

all: makedir compile

makedir:
	mkdir -p bin build/

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/deposit.o: $(SRC_DIR)/deposit.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/deposit.cpp -o $(SRC_BUILD_DIR)/deposit.o

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf build/ bin/
