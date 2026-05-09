# Compile all tests
cd tests
make all

# Run individual tests
cd ..
make test_core PROG=tests/add_test.hex
make test_core PROG=tests/mul_test.hex
make test_core PROG=tests/branch_test.hex

# Or create a test runner script
for test in add_test mul_test branch_test; do
    echo "Running $test..."
    make test_core PROG=tests/$test.hex
done
