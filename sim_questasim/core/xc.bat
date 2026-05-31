@echo off
call xv
if %ERRORLEVEL% GEQ 1 EXIT /B 1
vsim -c work.tb_core -voptargs="+acc" -suppress 8386 +PROG="%~1" -do "run -all; quit"
