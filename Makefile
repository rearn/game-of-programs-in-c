EXENAME  = unit_test
CC       = gcc
CFLAG    = -g
CFLAGS   = -Wall
LDFLAG   = -lm
OBJGROUP = AllTests.o CuTest.o test_support.o test_support_test.o test.o a.o
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

a.o: a.h

test.o: a.h test_support.h

test_support_test.o: test_support.h
