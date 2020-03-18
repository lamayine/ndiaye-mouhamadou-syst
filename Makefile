CC        = gcc
OBJS      = main.o TabMult.o
CFLAGS    = -c _ Wall -pedantic

LDFLAGS =
PGM = TabMult

all: $(PGM)

$(PGM): $(OBJS)
	      $(CC) -o $(PGM) $(OBJS)
.c.o:
	      $(CC) $(CFLAGS) $<
clean:
			  rm -f $(PGM)
				rm -f $(OBJS)
				rm -f *~