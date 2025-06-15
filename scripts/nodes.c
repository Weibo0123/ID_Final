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

    { 3, 4, 5, 6 } 
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

    { 7, 8, 9, 10 }
},

// Node 3: Examine the moss
{
  "You gently brush away the ash from the rock and uncover a few patches of moss still clinging to the surface.\n"
"They seem like nature’s final resistance—holding moisture, preserving a trace of life.\n"
"You recall reading that mosses are 'pioneer species'—they improve microclimates and stabilize soil, paving the way for recovery.\n",
  { NULL },
  { -1 }
},

// Node 4: Check the soil
{
  "You crouch down and scrape away the dry top layer.\n"
"Beneath it lies a waxy, water-repellent texture.\n"
"This might be 'hydrophobic soil'—a common post-fire phenomenon caused by damaged soil structure and depleted microbes.\n"
"It blocks water and hinders new growth.",
  { NULL },
  { -1 }
},

// Node 5: Inspect signs of life
{
  "In a crack between rocks, you find a small animal corpse—maybe a rabbit.\n"
"There are no insects. No smell. Just silence.\n"
"You realize it’s not just death—it’s the absence of decomposers.\n"
"Without them, life cannot be reborn from what has ended.\n",
  { NULL },
  { -1 }
},

// Node 6: Investigate the water
{
  "A shallow puddle rests in a low-lying depression.\n"
"The surface gleams with a rainbow sheen—still, thick, and strangely silent.\n"
"Perhaps it’s chemical runoff or heavy metal residue.\n"
"Without vegetation or flow, the water here is undrinkable.\n"
"You’ll need to search elsewhere.\n",
  { NULL },
  { -1 }
},

// Node 7: Check the crops
{
  "The crops still stand—but they’re dry, brittle, bone-pale.\n"
"You crack open an ear of corn and recoil at the sharp, bitter odor.\n"
"The soil here may be tainted by pesticide, chemical fertilizer, or salt buildup from drought.\n"
"These crops aren’t safe to eat.\n",
  { NULL },
  { -1 }
},

// Node 8: Inspect the well
{
  "You approach the rusted well.\n"
"A sharp blend of iron and decay drifts up from its mouth.\n"
"You lower a bucket and raise a half-full pail of murky, yellowish water.\n"
"A faint oil film glimmers on top.\n"
"The well might be contaminated by chemicals or metals.\n"
"You’ll need purification—or a new source.\n",
  { NULL },
  { -1 }
},

// Node 9: Examine the soil
{
  "You kneel and study the soil.\n"
"A white, crystalline powder covers the cracked surface—likely salt or chemical deposits.\n"
"Digging deeper, the earth is dry and compacted.\n"
"This is classic salinized or polluted soil.\n"
"Restoring it will take a long, patient process.\n",
  { NULL },
  { -1 }
},

// Node 10: Enter the house
{
  "You push open the creaking door. Silence.\n"
"Inside, you find a few preserved cans and a couple of seed packets.\n"
"On the table lies a faded hand-drawn map.\n"
"One path is circled in red with the note: 'South – river?'\n"
"Whoever lived here knew something—or hoped for it.\n",
  { NULL },
  { -1 }
}

    

};

