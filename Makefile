export ROCK_CFLAGS ROCK_LIBFLAG ROCK_LUA_INCDIR ROCK_LIBDIR

all:
	make -C build -f pcre2.mk
	make -C build -j 8

check:
	./test.sh

archive:
	./archive.sh

clean:
	make -C build clean

clean-all:
	make -C build -f pcre2.mk clean
	make -C build clean

install:
	make -C build install
