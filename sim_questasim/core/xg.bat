@echo off
call xv.bat
if %ERRORLEVEL% GEQ 1 EXIT /B 1
vsim -gui work.tb_core -voptargs="+acc" -suppress 8386 +PROG="%~1" -do "do wave.do;run -all; quit"