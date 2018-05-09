#!/usr/bin/env bash

branch="development/ElfGrinder"
cwd=`pwd`

for path in `find . -name .git -type f | xargs dirname`
do
	cd $path
	git checkout -b $branch
	git push --set-upstream origin $branch
	cd $cwd
done
