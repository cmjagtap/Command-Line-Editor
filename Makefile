PWD_DIR = $(shell pwd)
SRC_DIR = $(PWD_DIR)/src
BUILD_DIR = $(PWD_DIR)/build
BIN_DIR = $(PWD_DIR)/bin
INCLUDE_DIR = $(PWD_DIR)/include

CFLAGS = -g -Wall -Werror -Wextra -ansi -pedantic-errors -L lreadline -I$(INCLUDE_DIR)

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(addprefix $(BUILD_DIR)/, $(notdir $(SRC_FILES:.c=.o)))

editor: $(OBJ_FILES)
	gcc $(CFLAGS) $(BUILD_DIR)/*.o -o $(BIN_DIR)/editor

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE_DIR)/header.h
	gcc $(CFLAGS) -c $< -o $@

run:
	$(BIN_DIR)/editor

.PHONY: clean
clean: 
	rm -f $(BUILD_DIR)/*.o $(BIN_DIR)/editor
