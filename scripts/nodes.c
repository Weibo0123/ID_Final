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
"   A white, crystalline powder covers the cracked surface—likely salt or chemical deposits.\n"
    "Digging deeper, the earth is dry and compacted.\n"
    "This is classic salinized or polluted soil.\n"
    "Restoring it will take a long, patient process.\n",
    { NULL },
    { -1 }
  },

  // Node 10: Enter the house
  {
    "You push open the creaking door. Silence.\n"
    "Inside, you find a few preserved cans and some seeds of sunflowers.\n"
    "On the table lies a faded hand-drawn map.\n"
    "One path is circled in red with the note: 'South – river?'\n"
    "Whoever lived here knew something—or hoped for it.\n",
    { NULL },
    { -1 }
  },

  // Node 11: Meet the NPC
  {
    "As you rest in the shade of a broken trunk, a voice startles you.\n\n"
    "“You’re not from here, are you?”\n\n"
    "A young man steps out from behind a boulder. His clothes are soot-streaked, his face drawn.\n"
    "“I’ve been walking for weeks,” he says. “There’s nothing left in this forest. The animals are gone. The water’s no good.”\n\n"
    "He crouches beside you.\n"
    "“You seem strong. I’m heading east—maybe there’s a settlement still standing. You want to come?”\n",
  
    { "Stay and try to restore the land", "Go with him", NULL, NULL },
    { 13, 15, -1, -1 }
  },

  // Node 12: Meet the NPC
  {
    "The house creaks as you step inside.\n\n"
    "An old woman sits by the window, her hands folded in her lap, watching the empty field beyond.\n\n"
    "She doesn’t flinch when you enter—just nods slowly, like she’s been expecting you.\n\n"
    "“I’ve lived here all my life,” she says. “This land raised my children. Buried my husband. Held my memories.”\n\n"
    "You glance at the cracked walls, the peeling wallpaper, the rusted tools by the door.\n\n"
    "“I know it’s ruined,” she says softly. “But I won’t leave it. Not now. Not when it needs someone to stay.”\n\n"
    "She lifts a blanket and reveals a box filled with old seed packets, faded notebooks, and a photo of the farm in bloom.\n\n"
    "“This isn’t about hope,” she says. “It’s about loyalty.”\n\n"
    "You stand in silence, the weight of her words pressing against your chest.\n\n"
    "Maybe saving a place doesn’t begin with action.\n"
    "Maybe it begins with love.\n",

    { "Stay and help her rebuild", "Gently explain why you have to leave", NULL, NULL },
    { 14, 15, -1, -1 }

  },

  // Node 13: Stay in the forest
  {
    "The young man disappears into the haze, leaving only fading footprints in the ash.\n\n"
    "You’re alone now.\nBut you’ve made your choice.\n\n"
    "You mark the boundaries of a shelter between blackened trees and begin clearing away debris.\n"
    "There’s little to work with—no clean water, no food, no certainty.\n\n"
    "But you notice something the young man didn’t:\n\n"
    "The moss near the boulder is spreading.\nBird droppings mark a nearby stone.\nThe wind in this hollow is slightly cooler.\n\n"
    "You remember reading about microclimates and pioneer plants.\nSmall things can signal the start of recovery.\n\n"
    "If nature hasn’t given up, maybe you won’t either.\n\n"
    "It’s time to try something.\n",
  
    { 
      "Spray bleach on the soil to sterilize potential pathogens", 
      "spread straw mulch or wood on bare slopes",
      "Try to removing all the burned wood and ash", 
      "Don't do anything",
    },
    { 16, 17, 18, 19 }
  },

  // Node 14: Stay in the farm
  {
    "The old woman watches you quietly as you examine the land.\n\n"
    "You both know that staying is only the beginning.\n\n"
    "Now comes the real challenge: making this place livable again.\n\n"
    "You kneel and dig your fingers into the crusted soil. The earth resists, brittle and bitter.\n\n"
    "Somewhere beneath it, life is waiting—but only if you make the right choice.\n\n"
    "What will you do?\n",

    { 
      "Use compost from organic residues",
      "Plant some sunflowers",
      "Use well water to sustain plants",
      "Wait for rain to wash away salt" 
    },

    { 20, 21, 22, 23 }
  },

  // Node 15: Leave
  {
    "You leave everything behind.\n\n"
    "No forest. No farm. Just silence and ash.\n\n"
    "You follow broken highways through windswept plains.\n"
    "Your water runs low. Your shadow grows long.\n\n"
    "Finally, the road rises to a ridge and splits in two.\n\n"
    "To the south, the land climbs gently toward a high plateau.\n"
    "White tents dot the slope, and wind turbines spin slow and steady.\n"
    "The air there moves freely. You catch the faint hum of machines—and voices carried on the wind.\n\n"
    "To the east, the land dips sharply into a valley choked with smoke.\n"
    "Collapsed roofs lean against cracked walls. A distant river cuts through the ruins.\n"
    "The air is still and heavy, but somewhere in that silence, there might be shelter—or supplies.\n\n"
    "One path leads into motion and machines.\n"
    "The other into shadows and stone.\n\n"
    "You take one last sip from your bottle.\n"
    "Then decide.\n",

    { 
      "Go south toward the highland camp", 
      "Go east into the valley ruins", 
      NULL, 
      NULL 
    },
    { 26, 27, -1, -1 }
},
  
  // Node 16: Spray bleach on the soil to sterilize potential pathogens
  {
    "You mix bleach with water and pour it over the soil.\n\n"
    "The smell stings. The surface froths.\n"
    "For a moment, everything feels… sterile.\n\n"
    "But nothing grows. No insects return. The moss turns gray.\n"
    "In killing what you feared, you also killed what could’ve helped.\n",

    { NULL }, { -1 }
  },

  // Node 17: spread straw mulch or wood on bare slopes
  {
    "You spend the afternoon laying straw mulch across the bare hills.\n\n"
    "At first, it feels fragile—just scattered straw against the ash.\n"
    "But after a few days, the soil beneath grows darker. Cooler. Moist.\n\n"
    "Insects return. The wind softens near the ground.\n"
    "You spot tiny sprouts near a log you covered.\n\n"
    "The land has started to breathe again.\n",

    { NULL }, { -1 }
  },

  // Node 18: Try to removing all the burned wood and ash
  {
    "You drag away charred logs and scrape ash from the slope.\n\n"
    "The ground looks clean—exposed, vulnerable.\n"
    "Then the rain comes.\n"
    "Without cover, the soil slides. Roots wash away. Nothing holds.\n\n"
    "The land was wounded. Now it bleeds.\n",

    { NULL }, { -1 }
  },

  // Node 19: Don't do anything
  {
    "You decide to leave the land alone.\n"
    "Let the ash lie. Let the roots remember.\n\n"
    "Days pass.\n"
    "Rain falls gently—then harder. The soil clumps. Moss spreads.\n\n"
    "No miracles. But no collapse either.\n"
    "Sometimes, recovery doesn’t need a savior—just space.\n",

    { NULL }, { -1 }
  },

  // Node 20: Use compost from organic residues
  {
    "You mix in composted kitchen scraps and old stalks into the soil.\n"
    "At first, it resists. Dry, hard, bitter.\n\n"
    "But day by day, the texture softens.\n"
    "Earthworms return. The bitter smell fades.\n"
    "You plant a few seeds—and some sprout.\n",

    { NULL }, { -1 }
  },

  // Node 21: Plant some sunflowers
  {
    "The seeds crack open within a week.\n"
    "The sunflowers rise, yellow against the gray horizon.\n"
    "They thrive where nothing else grows—pulling unseen toxins from the earth.\n\n"
    "You can’t eat them. But they clean.\n"
    "And they bloom.\n",

    { NULL }, { -1 }
  },

  // Node 22: Use well water to sustain plants
  {
    "You draw water from the old well.\n"
    "It smells faintly metallic, but it’s all you have.\n"
    "You water the crops. The leaves curl. The roots blacken.\n\n"
    "You dig deeper—and find the water shimmering with oil.\n"
    "You weren’t feeding the land. You were poisoning it.\n",

    { NULL }, { -1 }
  },

  // Node 23: Wait for rain to wash away salt
  {
    "You sit under the broken porch and wait.\n"
    "The salt crust thickens on the soil.\n"
    "Rain comes—but light. It wets the surface, then evaporates.\n"
    "The salt is still there. The land grows harder.\n\n"
    "Waiting, it turns out, is not the same as healing.\n",

    { NULL }, { -1 }
  },

  // Node 24: The ending for the forest
  {
  "You’ve tried what you could.\n"
  "Some things worked. Others didn't. But the land noticed.\n\n"
  "The moss is thicker now.\n"
  "The wind doesn’t scrape as hard.\n"
  "A few birds have returned, calling into the silence.\n\n"
  "Nothing is healed completely. But the process has begun.\n"
  "The land isn’t what it was—but neither are you.\n"
  "You chose to stay. To try.\n"
  "And sometimes, that is how restoration starts.\n",

  { NULL }, { -1 }
},

// Node 25: The ending for the farm
{
  "The days are long. The soil is slow to change.\n"
  "But change it does.\n\n"
  "Ground is getting sofe. Worms return.\n"
  "The bitter crops are gone—but fresh shoots take their place.\n"
  "Not many. Not perfect. But alive.\n\n"
  "You fix the fence. Reseal the roof. Mark off a new garden bed.\n"
  "You are not waiting for the world to return. You are rebuilding it.\n\n"
  "Some nights are quiet. Others are cruel.\n"
  "But the land is no longer silent.\n\n"
  "Something still grows.\n",

  { NULL }, { -1 }
},

  // Node 26: Go south toward the highland camp
  {
    "The road rose into a ridge of scorched stone.\n"
    "And there—white tents and spinning turbines greeted you like silent flags.\n\n"
    "You were not the first to arrive.\n"
    "Others—tired, weathered, silent—shared food, tools, words.\n"
    "They called this place ‘the edge.’\n\n"
    "It’s not home. But it worked.\n"
    "Solar stills glistened. Raised beds held leafy greens. Someone built a school out of shipping crates.\n\n"
    "Some things were gone forever.\n"
    "But you were not.\n\n"
    "You made it out.\n"
    "And helping make something new.\n",

    { NULL }, { -1 }
  },

  // Node 27: 
  {
    "You followed the winding road into the valley.\n"
    "Ruins stretched like bones beneath the smoke.\n\n"
    "You passed shattered windows, rusted signs, and walls scrawled with final words.\n"
    "No footsteps. No birds. Only dust.\n\n"
    "The silence was not empty. It was heavy—like something watching.\n"
    "You found shelter in a broken library.\n"
    "You waited.\n\n"
    "Nothing came.\n"
    "No rescue. No rebirth. Just the slow, aching collapse of what once was.\n\n"
    "The end was not loud. It simply... stopped.\n",

    { NULL }, { -1 }
}


};

