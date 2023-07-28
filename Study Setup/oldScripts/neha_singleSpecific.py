#!/usr/bin/env python

# Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma de
# Barcelona (UAB).
#
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

import glob
import os
import sys

try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass

import carla

import random
import time

class JustException(Exception):
    def __init__(self, message):
        print(message)


def main():
    actor_list = []
    w
    # In this tutorial script, we are going to add a vehicle to the simulation
    # and let it drive in autopilot. We will also create a camera attached to
    # that vehicle, and save all the images generated by the camera to disk.

    try:

        # Connect to the client and retrieve the world object
        client = carla.Client('localhost', 2000)
        client.set_timeout(10.0)

        #except Exception
        #    print('connecting')
            

        world = client.get_world()

        # Set up the simulator in synchronous mode
        settings = world.get_settings()
        settings.synchronous_mode = True # Enables synchronous mode
        settings.fixed_delta_seconds = 0.05
        world.apply_settings(settings)

        # Set up the TM in synchronous mode
        traffic_manager = client.get_trafficmanager()
        traffic_manager.set_synchronous_mode(True)

        # Set a seed so behaviour can be repeated if necessary
        traffic_manager.set_random_device_seed(0)
        random.seed(0)

        # We will aslo set up the spectator so we can see what we do
        spectator = world.get_spectator()

        spawn_points = world.get_map().get_spawn_points()

        # Draw the spawn point locations as numbers in the map
        for i, spawn_point in enumerate(spawn_points):
            world.debug.draw_string(spawn_point.location, str(i), life_time=10)

        # Select some models from the blueprint library
        models = ['dodge', 'audi', 'model3', 'mini', 'mustang', 'lincoln', 'prius', 'nissan', 'crown', 'impala']
        modelulu = 'audi'
        blueprints = []
        for vehicle in world.get_blueprint_library().filter('*vehicle*'):
            if any(model in vehicle.id for model in models):
                blueprints.append(vehicle)

        # Set a max number of vehicles and prepare a list for those we spawn
        max_vehicles = 1
        max_vehicles = min([max_vehicles, len(spawn_points)])
        vehicles = []

        # Route 1
        spawn_point_1 =  spawn_points[41]
        # Create route 1 from the chosen spawn points
        route_1_indices = [ 98, 131, 65, 63, 152, 148, 74, 153, 145, 109, 14, 12, 125, 7, 9, 15, 69, 113, 88, 20, 44, 41]
        route_1 = []
        for ind in route_1_indices:
            route_1.append(spawn_points[ind].location)


        # Take a random sample of the spawn points and spawn some vehicles
        temp = world.try_spawn_actor(random.choice(blueprints), spawn_point_1)
        if temp is not None:
            spectator.set_transform(temp.get_transform())
            vehicles.append(temp)

            tm = client.get_trafficmanager(2000)
            tm_port = tm.get_port()

            #set the vehicle on autopilot and reduce the speed by 80%
            temp.set_autopilot(True, tm_port)
            tm.global_percentage_speed_difference(80)
            print('adding vehicle')
        
        print('got out')

        # Run the simulation so we can inspect the results with the spectator
        while True:
            world.tick()

         


    finally:

        print('destroying actors')
        #camera.destroy()
        client.apply_batch([carla.command.DestroyActor(x) for x in actor_list])
        print('done.')


if __name__ == '__main__':

    main()
