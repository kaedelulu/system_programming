#!/usr/bin/env bash

for f in `ls ./data/unk_*`
do
    #mv $f $f.bak
    unit=${f:0:${#f}-4}
    mv $f $unit 
done

