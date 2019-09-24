#!/bin/bash

USRNAME=$(whoami)
CONTAINERS=( $(docker ps -a --format={{.Names}} | grep container-$USRNAME) )

for container in ${CONTAINERS[@]}; do
  echo "Removing $container..."
  docker stop $container
  docker rm $container
done