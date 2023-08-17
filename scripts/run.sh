# Runs C source code.
run_c() {
  # Compile it.
  gcc -Wall -fanalyzer -Wpedantic -std=c2x $1

  # Execute it.
  ./a.out

  # Remove it.
  rm ./a.out
}

