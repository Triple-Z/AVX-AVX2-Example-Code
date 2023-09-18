# Author:  TripleZ<me@triplez.cn>
# Date:    2018-08-17 <-- This is my 21th birthday :tada:

CC = gcc
CFLAGS = -I$(INCDIR) -mavx -mavx2 -mfma -msse -msse2 -msse3 -Wall

export CC
export CFLAGS

all:
	@$(MAKE) -C Initialization_Intrinsics/src all
	@$(MAKE) -C Arithmetic_Intrinsics/src all
	@$(MAKE) -C Permuting_and_Shuffling/src all

.PHONY: clean run
clean:
	@$(MAKE) -C Initialization_Intrinsics/src clean
	@$(MAKE) -C Arithmetic_Intrinsics/src clean
	@$(MAKE) -C Permuting_and_Shuffling/src clean

run:
	@$(MAKE) -C Initialization_Intrinsics/src runall
	@$(MAKE) -C Arithmetic_Intrinsics/src runall
	@$(MAKE) -C Permuting_and_Shuffling/src runall
