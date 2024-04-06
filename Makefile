export ROCK_CFLAGS ROCK_LIBFLAG ROCK_LUA_INCDIR ROCK_LIBDIR

all:
	make -C build -j 8

install:
	@echo noop
