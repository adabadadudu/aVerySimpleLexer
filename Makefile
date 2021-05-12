CC := gcc # := || constant && hold c compiler
CFLAGS = -O3
FILES = interpreter.c
PROGRAM := aVerySimpleInterpreter
OS := "POSIX" # NT:WINDOWS , POSIX:LINUX 

all:
  $(CC) $(CFLAGS) $(FILES) -o $(PROGRAM)
  ifeq ($(OS),"NT")
    $(PROGRAM).exe
  else
    ./$(PROGRAM)
  endif
  
defualt: all
  echo "created"
  
run:
  ifeq
