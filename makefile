SRC=src
OBJ=obj
BIN=bin

NASM=nasm
ASMFLAGS=-felf64
CFLAGS=-m64 -g3
CC=gcc
TARGET=my_test
LIB=my_libasm.a

$(shell mkdir -p obj)

SRCS=$(wildcard $(SRC)/*.asm)
OBJS=$(patsubst $(SRC)/%.asm, $(OBJ)/%.o, $(SRCS))

.PHONY: all clean fclean re
all: $(TARGET)

$(LIB): $(OBJS)
	rm -f $(OBJ)/*.a
	ar -cvq $(OBJ)/$(LIB) $(OBJS)

$(TARGET): $(LIB)
	$(CC) -o $@ $(CFLAGS) $(SRC)/main.c -L$(OBJ) $(OBJ)/$(LIB)

$(OBJ)/%.o: $(SRC)/%.asm
	${NASM} ${ASMFLAGS} -o $@ $^

clean:
	rm -f $(OBJ)/*.o  $(OBJ)/$(LIB)

fclean: clean
	rm -rf $(TARGET) $(OBJ) $(OBJ)/$(LIB)

re: fclean clean