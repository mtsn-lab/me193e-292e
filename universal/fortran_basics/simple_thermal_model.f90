! File: simple_thermal_model.f90
! Location: ./universal/fortran_basics/simple_thermal_model.f90

program ThermalModel
    implicit none
    
    ! --- Variable Declarations ---
    ! Define constants and variables for the simulation
    integer, parameter :: NUM_STEPS = 5     ! Number of time steps to simulate
    real, parameter :: INITIAL_TEMP = 25.0  ! Initial temperature in Celsius
    real, parameter :: POWER_DRAW = 100.0   ! Constant heat generated (Watts)
    
    real :: current_temp, heat_change, thermal_mass_constant
    integer :: step
    
    ! Thermal constant (simplified: m * Cp / time_step)
    thermal_mass_constant = 0.5 

    ! --- Initialization ---
    current_temp = INITIAL_TEMP
    
    ! --- Output Header ---
    print *, "Data Center Component Thermal Simulation"
    print *, "------------------------------------------"
    print *, "Step | Temp (C) | Heat Change"

    ! --- Main Simulation Loop ---
    do step = 1, NUM_STEPS
        ! Calculate the change in temperature due to heat generation
        ! This is a simplified linear model: dQ = P * dt
        heat_change = POWER_DRAW / thermal_mass_constant
        
        ! Update the temperature
        current_temp = current_temp + heat_change * 0.1 ! Multiply by a small time step (0.1s)

        ! Output results for the current step
        write(*, '(I4, " | ", F8.2, " | ", F10.2)') step, current_temp, heat_change
    end do
    
    print *, "------------------------------------------"
    print *, "Final Temperature after", NUM_STEPS, "steps: ", current_temp, " C"

end program ThermalModel