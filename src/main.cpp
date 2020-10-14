#ifdef _WIN32
#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <math.h>
#else
#error _WIN32
#endif

#define DEFAULT_CHARTIME 60
#define DEFAULT_WORDTIME 0

std::vector<std::string> strings = {
"She wore green lipstick like a fashion icon.",
"The tour bus was packed with teenage girls heading toward their next adventure.",
"The newly planted trees were held up by wooden frames in hopes they could survive the next storm.",
"He quietly entered the museum as the super bowl started.",
"This made him feel like an old-style rootbeer float smells.",
"He turned in the research paper on Friday; otherwise, he would have not passed the class.",
"Improve your goldfish's physical fitness by getting him a bicycle.",
"Your girlfriend bought your favorite cookie crisp cereal but forgot to get milk.",
"The Japanese yen for commerce is still well-known.",
"The crowd yells and screams for more memes.",
"I would have gotten the promotion, but my attendance wasn’t good enough.",
"Even with the snow falling outside, she felt it appropriate to wear her bikini.",
"If eating three-egg omelets causes weight-gain, budgie eggs are a good substitute.",
"His ultimate dream fantasy consisted of being content and sleeping eight hours in a row.",
"The thunderous roar of the jet overhead confirmed her worst fears.",
"She did her best to help him.",
"Nothing seemed out of place except the washing machine in the bar.",
"Never underestimate the willingness of the greedy to throw you under the bus.",
"My Mum tries to be cool by saying that she likes all the same things that I do.",
"I am happy to take your donation; any amount will be greatly appreciated.",
"Nobody questions who built the pyramids in Mexico.",
"He didn’t want to go to the dentist, yet he went anyway.",
"Check back tomorrow; I will see if the book has arrived.",
"No matter how beautiful the sunset, it saddened her knowing she was one day older.",
"Shakespeare was a famous 17th-century diesel mechanic.",
"They called out her name time and again, but were met with nothing but silence.",
"It was at that moment that he learned there are certain parts of the body that you should never Nair.",
"I'm a great listener, really good with empathy vs sympathy and all that, but I hate people.",
"Combines are no longer just for farms.",
"Greetings from the real universe.",
"I caught my squirrel rustling through my gym bag.",
"The fish dreamed of escaping the fishbowl and into the toilet where he saw his friend go.",
"I would be delighted if the sea were full of cucumber juice.",
"She tilted her head back and let whip cream stream into her mouth while taking a bath.",
"It was the best sandcastle he had ever seen.",
"Two more days and all his problems would be solved.",
"Greetings from the galaxy MACS0647-JD, or what we call home.",
"Smoky the Bear secretly started the fires.",
"The secret code they created made no sense, even to them.",
"The busker hoped that the people passing by would throw money, but they threw tomatoes instead, so he exchanged his hat for a juicer.",
"Tuesdays are free if you bring a gnome costume.",
"The door swung open to reveal pink giraffes and red elephants.",
"Going from child, to childish, to childlike is only a matter of time.",
"The tortoise jumped into the lake with dreams of becoming a sea turtle.",
"It must be five o'clock somewhere.",
"David subscribes to the 'stuff your tent into the bag' strategy over nicely folding it.",
"She had the gift of being able to paint songs.",
"She traveled because it cost the same as therapy and was a lot more enjoyable.",
"Hit me with your pet shark!",
"All you need to do is pick up the pen and begin.",
"He dreamed of eating green apples with worms.",
"25 years later, she still regretted that specific moment.",
"Writing a list of random sentences is harder than I initially thought it would be.",
"The light in his life was actually a fire burning all around him.",
"If my calculator had a history, it would be more embarrassing than my browser history.",
"He decided to live his life by the big beats manifesto.",
"The sky is clear; the stars are twinkling.",
"He didn't heed the warning and it had turned out surprisingly well.",
"You've been eyeing me all day and waiting for your move like a lion stalking a gazelle in a savannah.",
"Potato wedges probably are not best for relationships.",
"He colored deep space a soft yellow.",
"She finally understood that grief was her love with no place for it to go.",
"Happiness can be found in the depths of chocolate pudding.",
"She wanted a pet platypus but ended up getting a duck and a ferret instead.",
"She always speaks to him in a loud voice.",
"It's much more difficult to play tennis with a bowling ball than it is to bowl with a tennis ball.",
"The quick brown fox jumps over the lazy dog.",
"He figured a few sticks of dynamite were easier than a fishing pole to catch fish.",
"In hopes of finding out the truth, he entered the one-room library.",
"Stop waiting for exceptional things to just happen.",
"They did nothing as the raccoon attacked the lady’s bag of food.",
"The tour bus was packed with teenage girls heading toward their next adventure.",
"I am happy to take your donation; any amount will be greatly appreciated.",
"Dolores wouldn't have eaten the meal if she had known what it actually was.",
"The near-death experience brought new ideas to light.",
"Three years later, the coffin was still full of Jello.",
"He set out for a short walk, but now all he could see were mangroves and water were for miles.",
"She did not cheat on the test, for it was not the right thing to do.",
"His ultimate dream fantasy consisted of being content and sleeping eight hours in a row.",
"It was a really good Monday for being a Saturday.",
"Andy loved to sleep on a bed of nails.",
"He had concluded that pigs must be able to fly in Hog Heaven.",
"You can't compare apples and oranges, but what about bananas and plantains?",
"Joe made the sugar cookies; Susan decorated them.",
"Charles ate the french fries knowing they would be his last meal.",
"There were three sphered rocks congregating in a cubed room.",
"Nothing is as cautiously cuddly as a pet porcupine.",
"He had unknowingly taken up sleepwalking as a nighttime hobby.",
"8% of 25 is the same as 25% of 8 and one of them is much easier to do in your head.",
"Lucifer was surprised at the amount of life at Death Valley.",
"He learned the important lesson that a picnic at the beach on a windy day is a bad idea.",
"There should have been a time and a place, but this wasn't it.",
"He wondered why at 18 he was old enough to go to war, but not old enough to buy cigarettes.",
"The secret code they created made no sense, even to them.",
"As you consider all the possible ways to improve yourself and the world, you notice John Travolta seems fairly unhappy.",
"Love is not like pizza.",
"Choosing to do nothing is still a choice, after all.",
"Nudist colonies shun fig-leaf couture.",
"Grape jelly was leaking out the hole in the roof.",
"Most shark attacks occur about 10 feet from the beach since that's where the people are.",
"His confidence would have bee admirable if it wasn't for his stupidity.",
"They throw cabbage that turns your brain into emotional baggage.",
"The newly planted trees were held up by wooden frames in hopes they could survive the next storm.",
"I hear that Nancy is very pretty.",
"Nothing seemed out of place except the washing machine in the bar.",
"The fact that there's a stairway to heaven and a highway to hell explains life well.",
"She wrote him a long letter, but he didn't read it.",
"He decided to live his life by the big beats manifesto.",
"Love is not like pizza.",
"So long and thanks for the fish.",
"The body piercing didn't go exactly as he expected.",
"She couldn't decide of the glass was half empty or half full so she drank it.",
"I don’t respect anybody who can’t tell the difference between Pepsi and Coke.",
"It was her first experience training a rainbow unicorn.",
"He stomped on his fruit loops and thus became a cereal killer.",
"She was sad to hear that fireflies are facing extinction due to artificial light, habitat loss, and pesticides.",
"The shark-infested South Pine channel was the only way in or out.",
"He enjoys practicing his ballet in the bathroom.",
"He shaved the peach to prove a point.",
"At that moment she realized she had a sixth sense.",
"The hand sanitizer was actually clear glue.",
"You realize you're not alone as you sit in your bedroom massaging your calves after a long day of playing tug-of-war with Grandpa Joe in the hospital.",
"I was very proud of my nickname throughout high school but today- I couldn’t be any different to what my nickname was.",
"The fish dreamed of escaping the fishbowl and into the toilet where he saw his friend go.",
"He is good at eating pickles and telling women about his emotional problems.",
"The fish listened intently to what the frogs had to say.",
"He fumbled in the darkness looking for the light switch, but when he finally found it there was someone already there.",
"He used to get confused between soldiers and shoulders, but as a military man, he now soldiers responsibility.",
"The best key lime pie is still up for debate.",
"Cats are good pets, for they are clean and are not noisy.",
"The crowd yells and screams for more memes.",
"Italy is my favorite country; in fact, I plan to spend two weeks there next year.",
"He had reached the point where he was paranoid about being paranoid.",
"I purchased a baby clown from the Russian terrorist black market.",
"As the rental car rolled to a stop on the dark road, her fear increased by the moment.",
"The pigs were insulted that they were named hamburgers.",
"He barked orders at his daughters but they just stared back with amusement.",
"The ants enjoyed the barbecue more than the family.",
"I may struggle with geography, but I'm sure I'm somewhere around here.",
"Everyone was busy, so I went to the movie alone.",
"I caught my squirrel rustling through my gym bag.",
"He said he was not there yesterday; however, many people saw him there.",
"Lucifer was surprised at the amount of life at Death Valley.",
"She always speaks to him in a loud voice.",
"It turns out you don't need all that stuff you insisted you did.",
"She was disgusted he couldn’t tell the difference between lemonade and limeade.",
"She used her own hair in the soup to give it more flavor.",
"Car safety systems have come a long way, but he was out to prove they could be outsmarted.",
"I would be delighted if the sea were full of cucumber juice.",
"He walked into the basement with the horror movie from the night before playing in his head.",
"You have every right to be angry, but that doesn't give you the right to be mean.",
"When nobody is around, the trees gossip about the people who have walked under them.",
"He would only survive if he kept the fire going and he could hear thunder in the distance.",
"He set out for a short walk, but now all he could see were mangroves and water were for miles.",
"I checked to make sure that he was still alive.",
"The newly planted trees were held up by wooden frames in hopes they could survive the next storm.",
"It was a slippery slope and he was willing to slide all the way to the deepest depths.",
"Had he known what was going to happen, he would have never stepped into the shower.",
"He's in a boy band which doesn't make much sense for a snake.",
"It was the scarcity that fueled his creativity.",
"He waited for the stop sign to turn to a go sign.",
"The lyrics of the song sounded like fingernails on a chalkboard.",
"Tuesdays are free if you bring a gnome costume.",
"It was a really good Monday for being a Saturday.",
"He excelled at firing people nicely.",
"He found a leprechaun in his walnut shell.",
"I would have gotten the promotion, but my attendance wasn’t good enough.",
"25 years later, she still regretted that specific moment.",
"He enjoys practicing his ballet in the bathroom.",
"When I was little I had a car door slammed shut on my hand and I still remember it quite vividly.",
"When he encountered maize for the first time, he thought it incredibly corny.",
"He invested some skill points in Charisma and Strength.",
"He told us a very exciting adventure story.",
"She works two jobs to make ends meet; at least, that was her reason for not having time to join us.",
"I think I will buy the red car, or I will lease the blue one.",
"He wondered why at 18 he was old enough to go to war, but not old enough to buy cigarettes.",
"Having no hair made him look even hairier.",
"As the rental car rolled to a stop on the dark road, her fear increased by the moment.",
"The skeleton had skeletons of his own in the closet.",
"People generally approve of dogs eating cat food but not cats eating dog food.",
"The light in his life was actually a fire burning all around him.",
"Sometimes, all you need to do is completely make an ass of yourself and laugh it off to realise that life isn’t so bad after all.",
"It's a skateboarding penguin with a sunhat!",
"He said he was not there yesterday; however, many people saw him there.",
"She wondered what his eyes were saying beneath his mirrored sunglasses.",
"Pantyhose and heels are an interesting choice of attire for the beach.",
"They were excited to see their first sloth.",
"It doesn't sound like that will ever be on my travel list.",
"Art doesn't have to be intentional.",
"It was always dangerous to drive with him since he insisted the safety cones were a slalom course.",
"I am my aunt's sister's daughter.",
"At that moment he wasn't listening to music, he was living an experience.",
"His thought process was on so many levels that he gave himself a phobia of heights.",
"There's a reason that roses have thorns.",
"Dan took the deep dive down the rabbit hole.",
"Each person who knows you has a different perception of who you are.",
"Even with the snow falling outside, she felt it appropriate to wear her bikini.",
"his seven-layer cake only had six layers.",
"She saw no irony asking me to change but wanting me to accept her for who she is.",
"The quick brown fox jumps over the lazy dog.",
"Stop waiting for exceptional things to just happen.",
"The skeleton had skeletons of his own in the closet.",
"He didn't understand why the bird wanted to ride the bicycle.",
"Tuesdays are free if you bring a gnome costume.",
"There was no ice cream in the freezer, nor did they have money to go to the store.",
"Potato wedges probably are not best for relationships.",
"The three-year-old girl ran down the beach as the kite flew behind her.",
"He had reached the point where he was paranoid about being paranoid.",
"She did a happy dance because all of the socks from the dryer matched.",
"Of course, she loves her pink bunny slippers.",
"She was disgusted he couldn’t tell the difference between lemonade and limeade.",
"It was a really good Monday for being a Saturday.",
"He found the end of the rainbow and was surprised at what he found there.",
"He shaved the peach to prove a point.",
"He stomped on his fruit loops and thus became a cereal killer.",
"She only paints with bold colors; she does not like pastels.",
"Happiness can be found in the depths of chocolate pudding.",
"She says she has the ability to hear the soundtrack of your life.",
"He took one look at what was under the table and noped the hell out of there.",
"We have a lot of rain in June.",
"So long and thanks for the fish.",
"The best key lime pie is still up for debate.",
"It turns out you don't need all that stuff you insisted you did.",
"When transplanting seedlings, candied teapots will make the task easier.",
"The beauty of the African sunset disguised the danger lurking nearby.",
"Italy is my favorite country; in fact, I plan to spend two weeks there next year.",
"She wanted a pet platypus but ended up getting a duck and a ferret instead.",
"Nobody questions who built the pyramids in Mexico.",
"Sometimes you have to just give up and win by cheating.",
"She couldn't decide of the glass was half empty or half full so she drank it.",
"She found his complete dullness interesting.",
"When nobody is around, the trees gossip about the people who have walked under them.",
"I love eating toasted cheese and tuna sandwiches.",
"If I don’t like something, I’ll stay away from it.",
"The old apple revels in its authority.",
"You have every right to be angry, but that doesn't give you the right to be mean.",
"Rock music approaches at high velocity.",
"She used her own hair in the soup to give it more flavor.",
"They looked up at the sky and saw a million stars.",
"Bill ran from the giraffe toward the dolphin.",
"I’m a living furnace.",
"The door swung open to reveal pink giraffes and red elephants.",
"He always wore his sunglasses at night.",
"Her life in the confines of the house became her new normal.",
"This is a Japanese doll.",
"The bees decided to have a mutiny against their queen.",
"The tour bus was packed with teenage girls heading toward their next adventure.",
"This book is sure to liquefy your brain.",
"The body piercing didn't go exactly as he expected.",
"The rain pelted the windshield as the darkness engulfed us.",
"Of course, she loves her pink bunny slippers.",
"The three-year-old girl ran down the beach as the kite flew behind her.",
"Rock music approaches at high velocity.",
"Dolores wouldn't have eaten the meal if she had known what it actually was.",
"The river stole the gods.",
"She did not cheat on the test, for it was not the right thing to do.",
"Behind the window was a reflection that only instilled fear.",
"The blinking lights of the antenna tower came into focus just as I heard a loud snap.",
"He was willing to find the depths of the rabbit hole in order to be with her.",
"The door slammed on the watermelon.",
"She did a happy dance because all of the socks from the dryer matched.",
"People generally approve of dogs eating cat food but not cats eating dog food.",
"He swore he just saw his sushi move.",
"She was the type of girl who wanted to live in a pink house.",
"He liked to play with words in the bathtub.",
"They got there early, and they got really good seats.",
"Truth in advertising and dinosaurs with skateboards have much in common.",
"The gruff old man sat in the back of the bait shop grumbling to himself as he scooped out a handful of worms.",
"The rain pelted the windshield as the darkness engulfed us.",
"I really want to go to work, but I am too sick to drive.",
"I’m working on a sweet potato farm.",
"Her life in the confines of the house became her new normal.",
"You realize you're not alone as you sit in your bedroom massaging your calves after a long day of playing tug-of-war with Grandpa Joe in the hospital.",
"She wondered what his eyes were saying beneath his mirrored sunglasses.",
"Plans for this weekend include turning wine into water.",
"The waitress was not amused when he ordered green eggs and ham.",
"He was sure the Devil created red sparkly glitter.",
"I'd rather be a bird than a fish.",
"I would have gotten the promotion, but my attendance wasn’t good enough.",
"The door swung open to reveal pink giraffes and red elephants.",
"Someone I know recently combined Maple Syrup & buttered Popcorn thinking it would taste like caramel popcorn. It didn’t and they don’t recommend anyone else do it either.",
"In that instant, everything changed.",
"All she wanted was the answer, but she had no idea how much she would hate it.",
"This book is sure to liquefy your brain.",
"If eating three-egg omelets causes weight-gain, budgie eggs are a good substitute.",
"It had been sixteen days since the zombies first attacked.",
"It's a skateboarding penguin with a sunhat!",
"He uses onomatopoeia as a weapon of mental destruction.",
"The thunderous roar of the jet overhead confirmed her worst fears.",
"He shaved the peach to prove a point.",
"There's a reason that roses have thorns.",
"Pair your designer cowboy hat with scuba gear for a memorable occasion.",
"There should have been a time and a place, but this wasn't it.",
"She tilted her head back and let whip cream stream into her mouth while taking a bath.",
"The book is in front of the table.",
"She folded her handkerchief neatly.",
"He walked into the basement with the horror movie from the night before playing in his head.",
"The thick foliage and intertwined vines made the hike nearly impossible.",
"It was her first experience training a rainbow unicorn.",
"Having no hair made him look even hairier.",
"He barked orders at his daughters but they just stared back with amusement.",
"Now I need to ponder my existence and ask myself if I'm truly real",
"I’m a living furnace.",
"The memory we used to share is no longer coherent.",
"He had concluded that pigs must be able to fly in Hog Heaven.",
"I would be delighted if the sea were full of cucumber juice.",
"Everyone was busy, so I went to the movie alone.",
"The gruff old man sat in the back of the bait shop grumbling to himself as he scooped out a handful of worms.",
"The ants enjoyed the barbecue more than the family.",
"I love eating toasted cheese and tuna sandwiches.",
"For oil spots on the floor, nothing beats parking a motorbike in the lounge.",
"Dan took the deep dive down the rabbit hole.",
"When she didn’t like a guy who was trying to pick her up, she started using sign language.",
"It caught him off guard that space smelled of seared steak.",
"She did a happy dance because all of the socks from the dryer matched.",
"He drank life before spitting it out.",
"She folded her handkerchief neatly.",
"People generally approve of dogs eating cat food but not cats eating dog food.",
"Everyone was curious about the large white blimp that appeared overnight.",
"You're unsure whether or not to trust him, but very thankful that you wore a turtle neck.",
"I often see the time 11:11 or 12:34 on clocks.",
"There's a reason that roses have thorns.",
"Behind the window was a reflection that only instilled fear.",
"As the years pass by, we all know owners look more and more like their dogs.",
"Plans for this weekend include turning wine into water.",
"The doll spun around in circles in hopes of coming alive.",
"If my calculator had a history, it would be more embarrassing than my browser history.",
"Rock music approaches at high velocity.",
"His thought process was on so many levels that he gave himself a phobia of heights.",
"Having no hair made him look even hairier.",
"If I don’t like something, I’ll stay away from it.",
"his seven-layer cake only had six layers.",
"Don't put peanut butter on the dog's nose.",
"Nothing seemed out of place except the washing machine in the bar.",
"She had some amazing news to share but nobody to share it with.",
"He didn't heed the warning and it had turned out surprisingly well.",
"It's much more difficult to play tennis with a bowling ball than it is to bowl with a tennis ball.",
"The shark-infested South Pine channel was the only way in or out.",
"It must be five o'clock somewhere.",
"There were three sphered rocks congregating in a cubed room.",
"They wandered into a strange Tiki bar on the edge of the small beach town.",
"He picked up trash in his spare time to dump in his neighbor's yard.",
"The skeleton had skeletons of his own in the closet.",
"The bees decided to have a mutiny against their queen.",
"Happiness can be found in the depths of chocolate pudding.",
"A suit of armor provides excellent sun protection on hot days.",
"It was the scarcity that fueled his creativity.",
"If any cop asks you where you were, just say you were visiting Kansas.",
"The tortoise jumped into the lake with dreams of becoming a sea turtle.",
"Two seats were vacant.",
"If my calculator had a history, it would be more embarrassing than my browser history.",
"Peanut butter and jelly caused the elderly lady to think about her past.",
"It's not often you find a soggy banana on the street.",
"You're unsure whether or not to trust him, but very thankful that you wore a turtle neck.",
"They wandered into a strange Tiki bar on the edge of the small beach town.",
"They did nothing as the raccoon attacked the lady’s bag of food.",
"Twin 4-month-olds slept in the shade of the palm tree while the mother tanned in the sun.",
"The waves were crashing on the shore; it was a lovely sight.",
"There was coal in his stocking and he was thrilled.",
"Lets all be unique together until we realise we are all the same.",
"It doesn't sound like that will ever be on my travel list.",
"Stop waiting for exceptional things to just happen.",
"The thick foliage and intertwined vines made the hike nearly impossible.",
"He found the chocolate covered roaches quite tasty.",
"The rain pelted the windshield as the darkness engulfed us.",
"The bees decided to have a mutiny against their queen.",
"She was too short to see over the fence.",
"It's much more difficult to play tennis with a bowling ball than it is to bowl with a tennis ball.",
"Hit me with your pet shark!",
"I come from a tribe of head-hunters, so I will never need a shrink.",
"The crowd yells and screams for more memes.",
"The opportunity of a lifetime passed before him as he tried to decide between a cone or a cup.",
"As he waited for the shower to warm, he noticed that he could hear water change temperature.",
"She did not cheat on the test, for it was not the right thing to do.",
"This book is sure to liquefy your brain.",
"As he looked out the window, he saw a clown walk by.",
"They looked up at the sky and saw a million stars.",
"He wondered if it could be called a beach if there was no sand.",
"He took one look at what was under the table and noped the hell out of there.",
"The toy brought back fond memories of being lost in the rain forest.",
"He wondered why at 18 he was old enough to go to war, but not old enough to buy cigarettes.",
"He ran out of money, so he had to stop playing poker.",
"The trick to getting kids to eat anything is to put catchup on it.",
"Red is greener than purple, for sure.",
"Don't piss in my garden and tell me you're trying to help my plants grow.",
"The fish listened intently to what the frogs had to say.",
"I ate a sock because people on the Internet told me to.",
"He had accidentally hacked into his company's server.",
"She saw no irony asking me to change but wanting me to accept her for who she is.",
"He is good at eating pickles and telling women about his emotional problems.",
"It didn't make sense unless you had the power to eat colors.",
"While on the first date he accidentally hit his head on the beam.",
"She couldn't decide of the glass was half empty or half full so she drank it.",
"She hadn't had her cup of coffee, and that made things all the worse.",
"A glittering gem is not enough.",
"Your girlfriend bought your favorite cookie crisp cereal but forgot to get milk.",
"Dolores wouldn't have eaten the meal if she had known what it actually was.",
"They got there early, and they got really good seats.",
"As the years pass by, we all know owners look more and more like their dogs.",
"If you don't like toenails, you probably shouldn't look at your feet.",
};

class KeyboardInput {
    public:
        void sendKeyPress(char character, int postDelayMs = 0) {
            short vk = VkKeyScanEx((WCHAR)character, GetKeyboardLayout(0));
            short flags = vk >> 8;

            INPUT input = { 0 };
            input.type = INPUT_KEYBOARD;
            input.ki.wVk = vk & 0xFF;
            input.ki.dwExtraInfo = 0;

            //send shift if necessary
            if((flags & 1) != 0) {
                INPUT shift = { 0 };
                shift.type = INPUT_KEYBOARD;
                shift.ki.wVk = VK_LSHIFT;
                SendInput(2, &shift, sizeof(INPUT));

                //send the keypress
                SendInput(1, &input, sizeof(INPUT));
                input.ki.dwFlags = KEYEVENTF_KEYUP;
                SendInput(1, &input, sizeof(INPUT));
                
                //remove the shift
                shift.ki.dwFlags = KEYEVENTF_KEYUP;
                SendInput(1, &shift, sizeof(INPUT));
            } else {
                SendInput(1, &input, sizeof(INPUT));

                input.ki.dwFlags = KEYEVENTF_KEYUP;
                SendInput(1, &input, sizeof(INPUT));
            }

            Sleep(postDelayMs);
        }
};

KeyboardInput keyboardInput;

void writeString(const std::string& string, float typoRate = 0.0f, int timeBetweenChars = DEFAULT_CHARTIME);
void spamString(const std::string& string, float typoRate = 0.0f, int timeBetweenChars = DEFAULT_CHARTIME, int timeBetweenWords = DEFAULT_WORDTIME);

int main() {
    srand((unsigned int)time(0));

    //std::string inputToSpam;
    //std::cout << "Enter input to spam: ";
    //std::getline(std::cin, inputToSpam);

    while(true) {
        //std::string str = strings[rand() % strings.size()];
        std::string str = "LOL, I bet you can't figure out what this is supposed to say...!! DM Me if you figured out the secret message: \"I wrote this spam bot in C++\"";
        writeString(str, .15f, 40);
        keyboardInput.sendKeyPress('\n', 40);
        Sleep(100);
    }

	return 0;
}

void writeString(const std::string& string, float typoRate, int timeBetweenChars) {
    for(int i = 0; i < string.size(); i++) {
        if(rand() < ((float)0xFFFF * typoRate)) {
            keyboardInput.sendKeyPress(rand() % ('z' - 'a') + 'a');
        }
        else {
            keyboardInput.sendKeyPress(string[i]);
        }

        Sleep(timeBetweenChars);
    }
}

void spamString(const std::string& string, float typoRate, int timeBetweenChars, int timeBetweenWords) {
    while(true) {
        writeString(string, typoRate, timeBetweenChars);
        keyboardInput.sendKeyPress('\n', timeBetweenChars);
        Sleep(timeBetweenChars);
        Sleep(timeBetweenWords);
    }
}