#!/bin/bash

# One time pusher

git add .
git commit -m "$1"
git push
