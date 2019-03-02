.SUFFIXES : .cc
.SUFFIXES : .c
.SUFFIXES : .cpp

INCDIR =
LIBDIR =

CC = gcc

CXXFLAGS = -Wall -g -std=c99 # -Werror  

OBJS = main.o #database.o Data.o

TARGET = project

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBDIR) 

.cc.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.c.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

clean:
	rm -f $(OBJS) $(TARGET) core




# TARGETS = myshell
# 
# CROSS_TOOL = 
# CC_CPP = $(CROSS_TOOL)g++
# CC_C = $(CROSS_TOOL)gcc
# 
# CFLAGS = -Wall -g -std=c99 # -Werror  
# 
# 
# all: clean $(TARGETS)
# 
# 
# 
# $(TARGET): 
# 	$(CC_C) $(CFLAGS) $@.c -o $@ 
# 
# clean:
# 	rm -f $(TARGETS)  
