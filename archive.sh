#! /bin/sh -e

version=`cat brigid-pcre2-version`
version=`expr "X$version" : 'X"\([^"]*\)"'`
prefix=brigid-pcre2-$version

git archive --prefix "$prefix/" HEAD | (cd build && tar xf -)
make -C "build/$prefix/build" -f pcre2.mk archive
(cd build && tar cf - "$prefix" | gzip -c9 > "$prefix.tar.gz")
rm -f -r "build/$prefix"
