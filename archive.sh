#! /bin/sh -e

version=`cat brigid-pcre2-version`
version=`expr "X$version" : 'X"\([^"]*\)"'`
echo "$version"
prefix=brigid-pcre2-$version

git archive --prefix "$prefix/" HEAD | (cd build && tar xf -)
make -C build/$prefix/build -f pcre2.mk archive
