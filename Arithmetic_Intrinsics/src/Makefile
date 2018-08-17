# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-16

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3

INCDIR = ../include
BINDIR = ../bin
OBJDIR = ../obj

ALL = add sub adds subs

$(OBJDIR)/%.o: %.c
	@[ -d $(OBJDIR) ] || mkdir $(OBJDIR)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(ALL)

add: $(patsubst %, $(OBJDIR)/%, add.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

sub: $(patsubst %, $(OBJDIR)/%, sub.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

adds: $(patsubst %, $(OBJDIR)/%, adds.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

subs: $(patsubst %, $(OBJDIR)/%, subs.o)
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
	@echo "- Cleaned Directory 'Arithmetic_Intrinsics/'"
