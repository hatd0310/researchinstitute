#!/usr/bin/sh

WORKSPACES=${PWD}
for dir in $WORKSPACES/*/;
do	
	echo [PULL]: $dir
	cd $dir
	git pull
done
