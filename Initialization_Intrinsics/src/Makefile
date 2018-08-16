CC = gcc
CFLAGS = -mavx -mavx2 -mfma -msse -msse2 -msse3

BINDIR = ../bin
OBJDIR = ../obj

$(OBJDIR)/%.o: %.c
	@[ -d $(OBJDIR) ] || mkdir $(OBJDIR)
	$(CC) -c -o $@ $< $(CFLAGS)

all: setzero

setzero: $(patsubst %, $(OBJDIR)/%, setzero.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

set1: $(patsubst %, $(OBJDIR)/%, set1.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

set: $(patsubst %, $(OBJDIR)/%, set.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

setr: $(patsubst %, $(OBJDIR)/%, setr.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

.PHONY: clean
clean:
	@rm -rf $(BINDIR) $(OBJDIR)


