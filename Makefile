CC = gcc
SRC_DIR = src
SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/operations.c
CFLAGS = -Wall -Wextra -I.

TARGET = calc

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: all clean
