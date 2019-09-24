#!/bin/bash

source /etc/profile
/etc/init.d/ssh start

CONTAINERS_IP=$(cat myDockerHostFile | cut -f1 -d' ')
for ip in ${CONTAINERS_IP[@]}; do
  ssh -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no $ip "uptime"
done