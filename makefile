CC               = g++
CFLAGS           = -Wall -Werror
TEST_FLAGS       = -I thirdparty -Wall -Werror
EXECUTABLE       = bin/program
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

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/deposit.o: $(SRC_DIR)/deposit.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/deposit.cpp -o $(SRC_BUILD_DIR)/deposit.o

test: mktest test-compile

mktest:
	mkdir -p bin build/test test-compile

test-compile: $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/deposit_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/deposit_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/deposit.o 

$(TEST_OBJ_DIR)/main.o: $(SRC_TEST_DIR)/main.cpp
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/main.cpp -o $(TEST_OBJ_DIR)/main.o

$(TEST_OBJ_DIR)/deposit_test.o: test/deposit_test.cpp
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/deposit_test.cpp -o $(TEST_OBJ_DIR)/deposit_test.o

$(TEST_OBJ_DIR)/validation_test.o: test/validation_test.cpp
	$(CC) $(TEST_FLAGS) -c $(SRC_TEST_DIR)/validation_test.cpp -o $(TEST_OBJ_DIR)/validation_test.o
	
.PHONY :clean 
clean:
	rm -rf build/bin/
