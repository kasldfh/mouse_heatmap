#ifndef MAP_H
#define MAP_H
/* Author: Mazin Jindeel
** Date: 5/15
** Class Name: Map
** Class Purpose: the map object will store a representation of a bitmap of a resolution, allowing the value of each pixel to be quickly changed using a number of different options. The class also allows dithering of the bitmap if necessary. 
*/
//TODO: add options to set a new resolution and wipe the map? (can just recreate a new map, so maybe no need)
#include "Resolution.h"
Class Map
{
    Public:
        //default constructor, will make all values null
        Map();
        //constructor that will initialize a bitmap filled values of 0 with the specified resolution
        Map(Resolution resolution);
        //constructor that will construct a map given a map as input (copy by value)
        Map(Map oldMap);
        //returns the pointer to the array representation of the bitmap  
        int** getMap();
        //applies a dithering algorithm to the map, returning the ditered result as a new map object
        //TODO: add options for different dithering algorithms/options
        //TODO: implement dither algorithm
        Map dither();
        //return the resolution object this map is based on
        Resolution getResolution();
        //get the current value of a pixel
        int getWeight(int x, int y);
        //set the value of a pixel 
        void setWeight(int x, int y, int amount);
        //change the value of a pixel by the specified amount
        void changeWeight(int x, int y, int amount);
        
    Private:
        Resolution res;
        int** map;
        //initialize array to whatever is in resolution, setting all elements to 0
        void initMap();
};
#endif
