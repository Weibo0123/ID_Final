#include "nodes.h"
#include <stdio.h>

Node nodes[] = 
{
    {
    "The stench of scorched earth fills your lungs, dragging you from a half-formed dream.\n\n"
    "You curl tighter in the shallow cave that barely shields you from the wind.\n\n"
    "Pale light seeps in through the cracks like a weary traveler—hesitant, fading, unsure if it should continue.\n\n"
    "Outside, the forest is long gone. Ash drifts through the air like snow, settling over a land burned bare. \n\n"
    "Charred tree trunks stand like the corpses of giants—upright, stubborn, unwilling to fall.\n\n"
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
      "Go north to the abandoned farmland", 
      NULL,
      NULL },

    { 1, 2, -1, -1 } 
    },

    {
    "You climb over a ridge of scorched stone—and finally hear something. A few birds calling in the distance.\n\n"
    "This was once a forest. Now it feels like a graveyard.\n\n"
    "Charred trunks stand upright like broken pillars, stripped of branches and leaves.\n\n"
    "Beneath your feet, a thick layer of ash spreads like pale snow.\n\n"
    "But not all life is gone.\n\n"
    "Near a cracked boulder, patches of moss creep quietly up the rock—faint green against black stone, like hope that refuses to leave.\n\n"
    "The air is strange. The sunlight burns, but the shadows are cold enough to raise goosebumps. \n\n"
    "You kneel to touch the soil. The surface crumbles like sand, but underneath, there's a slick, waxy layer that pushes back against your fingers.\n\n"
    "You move forward—and find a small, blackened carcass. Maybe a rabbit. No flies. No smell. Just stillness.\n\n"
    "In a low-lying hollow, water has pooled. A shallow puddle, unmoving. The surface is oily, untouched by wind or ripple.\n\n"
    "You start to wonder:\n"
    "Can anything still survive here?\n\n"
    "What do you want to check?\n",

    { "Examine the moss", "Check the soil", "Inspect signs of life", "Investigate the water" },

    { 4, 5, 6, 7 } 
    },

    {
    "You walk for hours along a cracked stretch of asphalt, crossing scorched ground beneath a dimming sky.\n\n" 
    "Just before sunset, a shape appears on the horizon—a collapsed fence, a leaning house, and a field drained of color.\n\n"
    "The crops still stand, scattered and brittle, pale as bone—like something half-buried and forgotten. Something about them feels... wrong.\n\n"
    "Not far off, a rusted well leans slightly to one side. The wind whistles through its open mouth, carrying a sharp mix of iron and decay.\n\n"
    "The ground crunches beneath your feet—dry, powdery, and pale.\n\n"
    "When you kneel to examine the soil, your fingers brush against a faint, crusty sheen—like salt or ash fused to the earth.\n\n"
    "The nearby house is half-collapsed, its door swinging on loose hinges in the wind.\n\n"
    "This place is broken—but perhaps... not beyond saving.\n\n"
    "Maybe there's still something here worth recovering.\n\n"
    "Where do you want to check?\n",

    { "Check the crops", "Inspect the well", "Examine the soil", "Enter the house" },

    { 8, 9, 10, 11 }
},
    

};

