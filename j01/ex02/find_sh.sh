#!/bin/bash

find . -type f -name '*sh' | sed "s/\.sh//" | sed 's/\(.*\)\///g'
