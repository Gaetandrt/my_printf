##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

CC				=		gcc

CFLAGS			=		-W -Werror -Wextra -Wall -Iinclude/

SRC				=		$(wildcard lib/my/*.c)

OBJ				=		$(SRC:.c=.o)

TARGET			=		libmy.a

all:	$(TARGET)

$(TARGET):	$(OBJ)
	ar src $(TARGET) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(TARGET)

re : fclean all

main: all
	gcc main.c -Iinclude/-L./-libmy
	./a.out
	make fclean
	rm a.out

main2: all
	gcc main2.c -Iinclude/-L./-libmy
	./a.out
	make fclean
	rm a.out
