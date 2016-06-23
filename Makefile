EXENAME  = unit_test
CC       = gcc
CFLAG    = -g
CFLAGS   = -Wall
LDFLAG   = -lm
OBJGROUP = AllTests.o CuTest.o test.o a.o
RM       = rm

.c.o:
	$(CC) $(CFLAGS) -c $<

test: $(EXENAME)
	./$(EXENAME)

$(EXENAME): $(OBJGROUP)
	$(CC) $(LDFLAG) -o $(EXENAME) $(OBJGROUP)

clean:
	$(RM) -f *.o
	$(RM) -f $(EXENAME)

test.o: a.c a.h
