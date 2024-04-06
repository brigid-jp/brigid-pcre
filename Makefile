export ROCK_CFLAGS ROCK_LIBFLAG ROCK_LUA_INCDIR ROCK_LIBDIR

all:
	make -C build -f pcre2.mk
	make -C build

clean:
	make -C build -f pcre2.mk clean
	make -C build clean

install:
	@echo noop
