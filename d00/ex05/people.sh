#!/bin/bash

ldapsearch -LLL -Q uid="z*" cn | Grep cn | sort -r | sed 's/cn: //'
