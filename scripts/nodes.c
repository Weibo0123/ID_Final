#include "nodes.h"
#include <stdio.h>

Node nodes[] = 
{
    {
    "The stench of scorched earth fills your lungs, dragging you from a half-formed dream.\n\n"
    "You curl tighter in the shallow cave that barely shields you from the wind. Pale light seeps in through the cracks like a weary traveler—hesitant, fading, unsure if it should continue.\n\n"
    "Outside, the forest is long gone. Ash drifts through the air like snow, settling over a land burned bare. Charred tree trunks stand like the corpses of giants—upright, stubborn, unwilling to fall.\n\n"
    "A warm gust brushes your face, and with it comes a memory from the eve of it all.\n\n"
    "> “Today's update: Some bird and mammal species have begun migrating unusually early. Scientists suspect this could be an early warning sign of something larger.”\n\n"
    "You remember sitting in a cozy mountain cabin, drink in hand, laughing at how dramatic it all sounded.\n\n"
    "Looking back now… the scientists were being too careful.\n\n"
    "A sudden wave of hunger drags you back to the present. You dig through your pack—only to find a stale piece of bread and an empty water bottle.\n\n"
    "You chew the bread down despite the mold, fighting the nausea. Then you tilt the bottle and catch the last few drops of water.\n\n"
    "No more food. No more water.\n\n"
    "You can't stay here.\n\n"
    "You unfold your crumpled map. Your finger hovers over the faded ink. There are three paths ahead.\n\n"
    "Each one could lead to hope… or to death.\n",
    
    { "Head south to the forest's surviving edge", 
      "Travel east toward the ruined city", 
      "Go north to the abandoned farmland", 
      NULL },

    { 1, 2, 3, -1 } 
    }
};

