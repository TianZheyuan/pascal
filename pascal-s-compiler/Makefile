ifeq ($(OS), Windows_NT)
	LEX=./win_flex_bison/flex.exe
	YACC=./win_flex_bison/bison.exe
	CC=gcc
	OUT=psc.exe
else
	LEX=flex
	YACC=bison
	CC=gcc
	OUT=psc
endif

all: parser.tab.o lex.yy.o symtable.o parsererror.o
	$(CC) -o $(OUT) parser.tab.o lex.yy.o symtable.o parsererror.o

parser.tab.c: parser.y
	$(YACC) -d parser.y

parser.tab.o: parser.tab.c
	$(CC) -c parser.tab.c

lex.yy.c: lex.l
	$(LEX) lex.l

lex.yy.o: lex.yy.c
	$(CC) -c lex.yy.c

symtable.o: symtable.c
	$(CC) -c symtable.c

parsererror.o: parsererror.c
	$(CC) -c parsererror.c

clean:
	rm lex.yy.* parser.tab.* symtable.o parsererror.o *.output

output:
	$(YACC) -v parser.y

debug:
	$(YACC) --defines --debug parser.y
	make parser.tab.o
	make all