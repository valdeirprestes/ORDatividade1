CC = gcc -g -O0 -Wall
SRC = app.c lib.c
OBJS = app.o lib.o
APP=app

all : app
	@echo Projeto compilado!
%.o : %.c
	$(CC)  -c -o  $@ $<
app : $(OBJS)
	$(CC)  -o $(APP) $(OBJS) $(MAT)
clean:
	@rm -fv $(OBJS) $(APP)
