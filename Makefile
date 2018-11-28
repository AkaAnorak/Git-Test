CC = g++

DEBUG = -g

CFLAGS = -Wall $(DEBUG)

TARGET = Hello_World

OBJFILES = main.cpp 

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o  $(TARGET) $(OBJFILES)
