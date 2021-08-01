#!/bin/sh
find ./src -name "*.exe" -exec rm {} + -o -name "*.bin" -exec rm {} + -o -name "*.s?" -exec rm {} + -o -name "*.o?" -exec rm {} +