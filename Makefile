include ./makefile.inc
.PHONY: all clean

all:
	$(MAKE) -C cpp_src all

clean:
	$(MAKE) -C cpp_src clean