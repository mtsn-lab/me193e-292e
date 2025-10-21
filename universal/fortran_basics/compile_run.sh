# File: compile_run.sh
# Location: ./universal/fortran_basics/compile_run.sh

#!/bin/bash

# --- Script to Compile and Run Fortran Code ---

# 1. Define the source file and the desired output name
SOURCE_FILE="simple_thermal_model.f90"
EXECUTABLE_NAME="thermal_sim"

echo "Compiling $SOURCE_FILE with gfortran..."

# 2. Compile the Fortran source code
# -o $EXECUTABLE_NAME specifies the output file name
gfortran $SOURCE_FILE -o $EXECUTABLE_NAME

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful! Running $EXECUTABLE_NAME..."
    echo "----------------------------------------------------"
    
    # 3. Execute the compiled program
    ./$EXECUTABLE_NAME
else
    echo "ERROR: Compilation failed. Please check the Fortran code."
fi

# 4. Clean up the executable (optional, but good practice)
# You can uncomment the line below if you want the executable removed after running
# rm -f $EXECUTABLE_NAME