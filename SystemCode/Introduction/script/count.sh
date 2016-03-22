#!/usr/bin/env bash

cat ./data/unk_list-* | cut -d ' ' -f1 | sort | uniq -c
#cat ./data/unk_list-* | cut -d ' ' -f1


