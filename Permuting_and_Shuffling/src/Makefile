# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-21

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3

INCDIR = ../include
BINDIR = ../bin
OBJDIR = ../obj

ALL = permute

$(OBJDIR)/%.o: %.c
	@[ -d $(OBJDIR) ] || mkdir $(OBJDIR)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(ALL)

permute: $(patsubst %, $(OBJDIR)/%, permute.o)
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
	@echo "- Cleaned Directory 'Permuting_and_Shuffling/'"
