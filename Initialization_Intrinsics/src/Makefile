# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-16

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3

INCDIR = ../include
BINDIR = ../bin
OBJDIR = ../obj

ALL = setzero set1 set setr \
		load loadu maskload

$(OBJDIR)/%.o: %.c
	@[ -d $(OBJDIR) ] || mkdir $(OBJDIR)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(ALL)

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

load: $(patsubst %, $(OBJDIR)/%, load.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

loadu: $(patsubst %, $(OBJDIR)/%, loadu.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

maskload: $(patsubst %, $(OBJDIR)/%, maskload.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

run-%: $(BINDIR)/%
	$^

runall: all
	@echo -e
	@for exe in $(ALL); do \
		echo "$(BINDIR)/$$exe"; \
		$(BINDIR)/$$exe; \
		echo -e; \
	done


.PHONY: clean
clean:
	-@rm -rf $(BINDIR) $(OBJDIR)
	@echo "- Cleaned Directory 'Initialization_Intrinsics/'"
