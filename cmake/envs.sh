#!/bin/sh
# ===== NeoVim =====
export NVIM=/opt/nvim

# ===== PostgreSQL =====
export POSTGRESQL_HOME=/usr/psql-17
export LD_LIBRARY_PATH=$POSTGRESQL_HOME/lib

# main config
export PATH=$PATH:$POSTGRESQL_HOME/bin:$LD_LIBRARY_PATH:$NVIM/bin
