SOURCE_DIR=./src
OBJECTS=$(SOURCE_DIR)/main.c $(SOURCE_DIR)/password.c $(SOURCE_DIR)/dictionary.c

#need to have .exe extension for windows
TARGET=showpassword.exe


all: 
	gcc -o $(TARGET) $(OBJECTS) -Iinclude


#for linux use rm $(TARGET)
#for windows use del $(TARGET)
clean:
	del $(TARGET)

