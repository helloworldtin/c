# 1st rule
# target_file: dependencies
justify: justify.o word.o line.o
	# command
	gcc -o justify justify.o word.o line.o

#second rule ..... n rule
justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
