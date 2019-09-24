#!/bin/bash

if [ -z "$1" ]; then
  echo "Provide the number of containers you want to create!"
  exit
fi

USRNAME=$(whoami)
NUM_CONTAINERS=$1

for idx in $(seq 1 $NUM_CONTAINERS); do
  echo "Creating a new container..."
  docker run -d -it --name container-$USRNAME-$idx csci654 /bin/bash
done