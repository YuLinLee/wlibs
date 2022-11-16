TOPDIR=$(shell pwd)
include $(TOPDIR)/../makefile.inc

CXXFLAGS = $(CXXVERSION) -pthread -Wextra -Wno-attributes -Werror -Wfatal-errors -Wno-sign-compare
FLAGS=$(CXXVERSION) -shared
LDFLAGS=

LIBW_SO=$(TOPDIR)/libw.so
OBJS=func.o
OBJS+=utils.o api.o


all: $(LIBW_SO) executable

$(LIBW_SO): $(OBJS)
	$(CXX) $(FLAGS) -o $(LIBW_SO) $(OBJS)

.PHONY: executable
executable:
	$(MAKE) -C executable all

clean:
	@rm -f *.o *.so
	$(MAKE) -C executable clean

.PHONY: all clean