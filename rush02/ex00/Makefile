flags = -Wextra -Werror -Wall
EXNM = rush-02
SRC = src
HEAD = include
objects = main.o Cdict.o check_number.o ft_atoi.o printing.o
OBJD = ${addprefix $(SRC)/, $(objects)}

%.o: %.c
	cc $(flags) -c $< -o $@ -I $(HEAD)

all: $(EXNM)

clean:
	rm -f $(OBJD)

fclean: clean
	rm -f $(EXNM)

$(EXNM): $(OBJD)
	cc $(flags) -o $(EXNM) $^