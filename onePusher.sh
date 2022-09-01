#!/bin/bash

# One time pusher
git pull
git add .
git commit -m "$1"
git push
