#!/bin/sh

export ENV=/opt/envs

# config env JDK
export JAVA_HOME=$ENV/openjdk17
export JRE_HOME=$JAVA_HOME
export JRE64_HOME=$JAVA_HOME

# config env NodeJS
export NODEJS=$ENV/node-v20x/bin

# config env NeoVim
export NVIM=$ENV/nvim

# config env Gradle
export GRADLE_HOME=$ENV/gradle-8.10

# config env PostgreSQL
export POSTGRESQL_ROOT=/usr/psql-16
export POSTGRESQL_LIB=/usr/psql-16/lib
export POSTGRESQL_INCLUDE=/usr/psql-16/include


# main config
export PATH=$PATH:$JAVA_HOME/bin:$JRE_HOME/bin:$JRE64_HOME/bin:$NODEJS:$NVIM/bin:$GRADLE_HOME/bin:$POSTGRESQL_ROOT/bin:$POSTGRESQL_LIB:$POSTGRESQL_INCLUDE:$PATH

