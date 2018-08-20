# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-16

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3

INCDIR = ../include
BINDIR = ../bin
OBJDIR = ../obj

ALL = add sub adds subs hadd hsub hadds hsubs addsub \
		mul mullo mulhi mulhrs div \
		fmadd fmsub

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

hadd: $(patsubst %, $(OBJDIR)/%, hadd.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

hsub: $(patsubst %, $(OBJDIR)/%, hsub.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

hadds: $(patsubst %, $(OBJDIR)/%, hadds.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

hsubs: $(patsubst %, $(OBJDIR)/%, hsubs.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

addsub: $(patsubst %, $(OBJDIR)/%, addsub.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

mul: $(patsubst %, $(OBJDIR)/%, mul.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

mullo: $(patsubst %, $(OBJDIR)/%, mullo.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

mulhi: $(patsubst %, $(OBJDIR)/%, mulhi.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

mulhrs: $(patsubst %, $(OBJDIR)/%, mulhrs.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

div: $(patsubst %, $(OBJDIR)/%, div.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

fmadd: $(patsubst %, $(OBJDIR)/%, fmadd.o)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	$(CC) -o $(BINDIR)/$@ $^ $(CFLAGS)

fmsub: $(patsubst %, $(OBJDIR)/%, fmsub.o)
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
