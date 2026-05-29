#!/bin/bash

# Build all tests
cd tests && make all && cd ..

# Initialize counters
PASS=0
FAIL=0

# Run each test
for hex_file in tests/*.hex; do
    test_name=$(basename "$hex_file" .hex)
    echo -n "Running $test_name... "
    
    make test_core PROG=$hex_file > /dev/null 2>&1
    
    if [ $? -eq 0 ]; then
        echo "PASS"
        ((PASS++))
    else
        echo "FAIL"
        ((FAIL++))
    fi
done

# Summary
echo ""
echo "========================="
echo "PASS: $PASS"
echo "FAIL: $FAIL"
echo "========================="
