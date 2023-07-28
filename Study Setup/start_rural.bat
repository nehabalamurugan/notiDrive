@ECHO OFF
cd "carlaSimulation"
start CarlaUE4.exe
timeout /t 15
cd ..
start python generate_traffic_urban.py --safe --seed 6 --seedw 9 --no-rendering

