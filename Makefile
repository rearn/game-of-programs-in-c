EXENAME  = unit_test
CC       = gcc
CFLAG    = -g
CFLAGS   = -Wall
LDFLAG   = -lm
OBJGROUP = AllTests.o CuTest.o test.o a.o
RM       = rm

.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXENAME)

test: $(EXENAME)
	./$(EXENAME)

$(EXENAME): $(OBJGROUP)
	$(CC) $(LDFLAG) -o $(EXENAME) $(OBJGROUP)

clean:
	$(RM) -f *.o
	$(RM) -f $(EXENAME)
