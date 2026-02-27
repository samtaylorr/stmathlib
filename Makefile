CC = gcc
CFLAGS = -Itests -Isrc -Wall -Wextra -lm

SRC = src/linalg.c
TEST_SRC = tests/test_linalg.c tests/unity.c

all: test

test:
	$(CC) $(CFLAGS) $(SRC) $(TEST_SRC) -o test_runner
	./test_runner
