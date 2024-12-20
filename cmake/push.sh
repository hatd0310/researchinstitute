#!/usr/bin/sh

WORKSPACES=${PWD}
for dir in $WORKSPACES/*/;
do	
	echo [PULL]: $dir
	cd $dir
	git add src/
	git commit -m "update"
	git push -u origin master
done
