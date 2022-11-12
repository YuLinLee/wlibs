TOPDIR=$(shell pwd)
include $(TOPDIR)/../../makefile.inc
EXENAME=main
SRC=main.cpp
FLAGS=$(CXXVERSION) -I$(TOPDIR)/../
LDFLAGS=-L$(TOPDIR)/../ -lw

.PHONY: all

all:
	$(CXX) $(FLAGS) $(LDFLAGS) -o $(EXENAME) $(SRC)

clean:
	@rm -f $(EXENAME) *.o 