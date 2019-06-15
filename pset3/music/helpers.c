// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string f)
{
    // TODO
    if (f[2]=='8')
    return (f[0]-'0');
    if (f[2]=='4')
    return ((f[0]-'0')*2);
    if (f[2]=='2')
    return ((f[0]-'0')*4);
    if (f[2]=='1')
    return 8;
    return 0;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    int octave = note[strlen(note) - 1];
    octave -= '0';
    double freq = 0.0;
     switch(note[0])
    {
        case 'C' :
            freq = 440.0 / (pow(2.0, (9.0 / 12.0)));
            break;
        case 'D' :
            freq = 440.0 / (pow(2.0, (7.0 / 12.0)));
            break;
        case 'E' :
            freq = 440.0 / (pow(2.0, (5.0 / 12.0)));
            break;
        case 'F' :
            freq = 440.0 / (pow(2.0, (4.0 / 12.0)));
            break;
        case 'G' :
            freq = 440.0 / (pow(2.0, (2.0 / 12.0)));
            break;
        case 'A' :
            freq = 440.0;
            break;
        case 'B' :
            freq = 440.0 * (pow(2.0, (2.0 / 12.0)));
            break;
        default :
            return 0;
    }
    if(octave > 4)
        for(int i = 0; i < octave - 4; i++)
            freq *= 2.0;
    else if(octave < 4)
        for(int i = 0; i < 4 - octave; i++)
            freq /= 2.0;
     if(note[1] == 'b')
        freq /= (pow(2.0, (1.0 / 12.0)));
    else if(note[1] == '#')
        freq *= (pow(2.0, (1.0 / 12.0)));
    return round(freq);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    return (strlen(s)==0);
}
