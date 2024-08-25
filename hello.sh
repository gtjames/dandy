#!/bin/bash

# Check if a name was provided as a command-line argument
if [ -z "$1" ]; then
  name="World"
else
  name="$1"
fi

# Print the greeting
echo "Hello, $name!"
