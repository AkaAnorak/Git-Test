CC = g++

DEBUG = -g

CFLAGS = -Wall $(DEBUG)

TARGET = main

OBJFILES = main.cpp 

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o  $(TARGET) $(OBJFILES)
