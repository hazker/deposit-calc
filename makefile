CC               = gcc
CFLAGS           = -Wall -Werror
TEST_FLAGS       = -I thirdparty -Wall -Werror
EXECUTABLE       = bin/programm
TEST_EXECUTABLE  = bin/test
SRC_BUILD_DIR    = build
SRC_DIR          = src
TEST_EXECUTABLE  = bin/test
TEST_OBJ_DIR     = build/test
SRC_TEST_DIR     = test/

all: makedir compile test test-compile

makedir:
	mkdir -p bin build/

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/deposit.o: $(SRC_DIR)/deposit.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/deposit.c -o $(SRC_BUILD_DIR)/deposit.o

test: mktest test-compile

mktest:
	mkdir -p bin build/test

test-compile: $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/deposit_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/deposit_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/deposit.o -o $(TEST_EXECUTABLE)

$(TEST_OBJ_DIR)/main.o: $(SRC_TEST_DIR)/main.c
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/main.c -o $(TEST_OBJ_DIR)/main.o

$(TEST_OBJ_DIR)/deposit_test.o: test/deposit_test.c
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/deposit_test.c -o $(TEST_OBJ_DIR)/deposit_test.o

$(TEST_OBJ_DIR)/validation_test.o: test/validation_test.c
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/validation_test.c -o $(TEST_OBJ_DIR)/validation_test.o
	
.PHONY :clean 
clean:
	rm -rf build/
