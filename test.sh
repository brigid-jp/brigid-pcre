#! /bin/sh -e

export LUA_CPATH="build/?.so;;"

for i in test/test*.lua
do
  case X$# in
    X0) lua "$i";;
    *) "$@" "$i";;
  esac
done
