NAME = libmx.a

COMP = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -c

all: $(NAME) clean

$(NAME):
	$(COMP) $(CFLAGS) src/*.c
	mkdir obj
	mv *.o obj
	ar -rc $(NAME) obj/*.o
	ranlib $(NAME)

clean:
	rm -rdf obj
	rm -rf *.o

uninstall: clean
	rm -f $(NAME)

