# Compiler and C-file extensions
CC 			:= gcc
SRC_EXT     := c

# Definitions of filepaths
INCLUDE_DIR := include
SRC_DIR 	:= src
BUILD_DIR 	:= build

# Flags
INCFLAG		:= -I$(INCLUDE_DIR)
CFLAGS      := $(INCFLAG)

# Final target
TARGET 		:= $(BUILD_DIR)/main

# ===== Compilation ============================================================

# Get all source files
SRC_FILES := $(wildcard $(SRC_DIR)/*.$(SRC_EXT))

all: clean $(TARGET)

$(TARGET): $(SRC_FILES)
	gcc $(CFLAGS) -o $(TARGET) $(SRC_FILES)

# ===== Cleaning ===============================================================

clean:
	del /F /Q $(BUILD_DIR)\*

.PHONY: clean