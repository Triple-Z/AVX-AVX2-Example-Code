# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-17 <-- This is my 21th birthday :tada:

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3

export CC
export CFLAGS

all:
	$(MAKE) -C Initialization_Intrinsics/src

.PHONY: clean
clean:
	@$(MAKE) -C Initialization_Intrinsics/src clean

run:
	$(MAKE) -C Initialization_Intrinsics/src runall
