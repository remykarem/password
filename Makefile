SOURCE_DIR=./src
OBJECTS=$(SOURCE_DIR)/main.c $(SOURCE_DIR)/password.c $(SOURCE_DIR)/dictionary.c

CFLAGS=-std=c99 -Wall -Werror -pedantic

#need to have .exe extension for windows
TARGET=showpasswords.exe


all: 
	gcc -o $(TARGET) $(CFLAGS) $(OBJECTS) -Iinclude


#for linux use rm $(TARGET)
#for windows use del $(TARGET)
clean:
	rm $(TARGET)

