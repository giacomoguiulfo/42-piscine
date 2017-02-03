#!/bin/bash
# My first script

ldapwhoami | sed 's/dn://'
