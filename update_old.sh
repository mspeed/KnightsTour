#!/bin/bash

cd /home/rocinante/gh/KnightsTour

git fetch && git pull
git add . && git commit -m "New Tour(s)"
git push
