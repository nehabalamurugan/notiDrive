@ECHO OFF
cd "carlaSimulation"
start CarlaUE4.exe
timeout /t 15
cd ..
start python generate_traffic.py --safe
