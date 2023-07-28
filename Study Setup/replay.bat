@ECHO OFF
cd "carlaSimulation"
start CarlaUE4.exe
timeout /t 15
cd ..
start start_replaying.py -f p1.log