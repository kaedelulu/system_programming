#!/usr/bin/env bash

cat ./data/baseline* | grep NDCG@10
cat ./data/baseline* | grep NDCG@10 | \
    awk '{ sum += $2 }; END { print "Average: " sum/NR }'


