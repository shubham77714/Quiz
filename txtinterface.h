#ifndef TEXT_INTERFACE
#define TEXT_INTERFACE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "wincontrol.h"

void Welcome(void);
void title(void);
void subtitle(void);
void Menu(void);



char welcome[6][100]={
    "__                  __  ________   _         _______   ________   ___  ___   ________",
    "\\ \\                / / |  ______| | |       /  _____| /  ____  \\ |   \\/   | |  ______|",
    " \\ \\     ____     / /  | |___     | |       | |       | |    | | | |\\__/| | | |___",
    "  \\ \\   / /\\ \\   / /   |  ___|    | |       | |       | |    | | | |    | | |  ___|",
    "   \\ \\_/ /  \\ \\_/ /    | |______  | |_____  | |_____  | |____| | | |    | | | |______",
    "    \\___/    \\___/     |________| |_______| \\_______| \\________/ |_|    |_| |________|"
};


char ICT[5][200]={
    "***** **    * ****   *****  ***  **    *       **** *   * *    ***** *   * ****  *****        ***  **    * ****        ***** ****   ***  ****  ***** ***** *****  ***  **    *",
    "  *   * *   * *   *    *   *   * * *   *      *     *   * *      *   *   * *   * *           *   * * *   * *   *         *   *   * *   * *   *   *     *     *   *   * * *   *",
    "  *   *  *  * *   *    *   ***** *  *  *      *     *   * *      *   *   * ****  ****        ***** *  *  * *   *         *   ****  ***** *   *   *     *     *   *   * *  *  *",
    "  *   *   * * *   *    *   *   * *   * *      *     *   * *      *   *   * * *   *           *   * *   * * *   *         *   * *   *   * *   *   *     *     *   *   * *   * *",
    "***** *    ** ****   ***** *   * *    **       ****  ***  ****   *    ***  *  *  *****       *   * *    ** ****          *   *  *  *   * ****  *****   *   *****  ***  *    **",
};


char menu[5][30]={
    "@@  @@ @@@@@@ @@    @ @    @",
    "@ @@ @ @      @ @   @ @    @",
    "@    @ @@@@   @  @  @ @    @",
    "@    @ @      @   @ @ @    @",
    "@    @ @@@@@@ @    @@ @@@@@@"
};

char team[7][80]={
    " 5555    5555   5555   55555   55555",
    "5    5  5    5  5   5  5       5",
    "5       5    5  5   5  5       5",
    "5       5    5  5555   555      5555",
    "5       5    5  5 5    5           5",
    "5    5  5    5  5  5   5           5",
    " 5555    5555   5   5  55555   5555"
};


char Q_indian_festival[20][200]={
    "In which State is the religious festival Ganesh Chaturthi celebrated with gusto?",
    "Which festival occurs at a different time from the other three?",
    "Which of the following combinations of the States and the festivals mainly celebrated there is not correct?",
    "The Desert Festival, an annual event in Rajasthan that displays local folk arts and culture, aerobatics, camel races, is held at",
    "Ahatguri in Assam is famous for -",
    "Festival of Holi falls on -",
    "Which State hosts the annual Surajkund crafts fair?",
    "Losoong festival is celebrated in which of the following states?",
    "In which of the following states is the Hornbill Festival held annually?",
    "Which of the following is a monsoon festival in India?",
    "The International Kite Festival in Gujarat is held in the month of -",
    "Which city is famous for Bali Jatra festival?",
    "Atla Taddi is a festival of which State?",
    "The Festival of Onam comes in",
    "The Festival of Ramzan comes in",
    "At Puhar or Kaveripumpattinam, a great festival described vividly by the Sandam Epics, was held in honour of Lord",
    "Who among the following introduced the famous Persian festival of Nauroj in India ?",
    "What is the name of the festival that ends the fasting month of Ramzan?",
    "In which of the following festivals are boat races a special feature?",
    "The Festival of Shivratri comes in"
};

char about_indian_festival[20][800]={
    "Ganesh Chaturthi, also known as Vinayaka Chaturthi, is a Hindu festival celebrating the arrival of Ganesh to earth from Kailash Parvat \n\t\t\t\t\t\twith his mother Goddess Parvati/Gauri. The festival is marked with the installation of Ganesh clay idols privately \n\t\t\t\t\t\tin homes, or publicly on elaborate pandals.",
    "Ugadi is celebrated in april while all others in January.",
    "Durga puja is primarily celebrated in west bengal.",
    "The desert Festival is an annual event held every year in the month of February in Jaisalmer.",
    "Ahatguri is a popular place where buffalo fights have been taking place since 1972.",
    "Holi is celebrated at the end of winter, on the last full moon day of the Hindu luni-solar calendar month marking the spring, making the \n\t\t\t\t\t\tdate vary with the lunar cycle. The date falls typically in March, but sometimes late February of the Gregorian calendar",
    "This fair is organized by the Surajkund Mela Authority & Haryana Tourism in collaboration with Union Ministries of Tourism, \n\t\t\t\t\t\tTextiles, Culture and External Affairs.",
    "Losoong is the Sikkimese New Year, of the Bhutia tribe, celebrated every year in the month of December.",
    "The Hornbill Festival is a celebration held every year from 1 to 10 December, in Nagaland, Northeast India. It is also called the 'Festival of Festivals'.",
    "Teej is the generic name for a number of Hindu festivals that are celebrated by women in many parts of India and Nepal. Haryali Teej and \n\t\t\t\t\t\tHartalika Teej welcome the monsoon season and are celebrated primarily by girls and women, with songs, dancing and prayer rituals.",
    "The International Kite Festival is regarded as one of the biggest festivals celebrated. Months before the festival, homes in Gujarat begin \n\t\t\t\t\t\tto manufacture kites for the festival.",
    "Balijatra literally means A Voyage to Bali is the major Boita Bandana festival held at Cuttack on Kartik Purnima. It is the Asia's largest \n\t\t\t\t\t\topen trade fair. This festival is held in Odisha (a state in eastern India), in the city of Cuttack at Gadagadia Ghata \n\t\t\t\t\t\tof the Mahanadi river, to mark the day when ancient Sadhabas (Odia mariners) would set sail to distant lands of Bali, as well as \n\t\t\t\t\t\tJava (at the time of the voyage known as \"Yawadvipa\"), Sumatra, Borneo (all in Indonesia), and Sri Lanka (formerly Ceylon) \n\t\t\t\t\t\tfor trade and cultural expansion.",
    "Atla Taddi is a traditional festival celebrated by married Hindu women of Andhra Pradesh for the health and long life of their husbands. \n\t\t\t\t\t\tIt occurs on the 3rd night after the full moon in Aswiyuja month of Telugu calendar, and falls in either September or October \n\t\t\t\t\t\tin the Gregorian calendar. It is the Telugu equivalent of Karva Chauth, which is celebrated by north Indian women the following day.",
    "Onam is an annual Hindu festival celebrated in southern Indian state of Kerala. It is a harvest festival celebrated by Malayalis whose date\n\t\t\t\t\t\t is based on the Panchangam and falls on the 22nd nakshatra Thiruvonam in the month Chingam of Malayalam calendar, which in \n\t\t\t\t\t\tGregorian calendar overlaps with August-September. According to legends, the festival is celebrated to commemorate King Mahabali, \n\t\t\t\t\t\twhose spirit is said to visit Kerala at the time of Onam.",
    "Ramzan also spelled Ramazan, Ramadan, Ramadhan or Ramathan, is the ninth month of the Islamic calendar, observed by Muslims worldwide as a \n\t\t\t\t\t\tmonth of fasting, prayer, reflection and community. A commemoration of Muhammad's first revelation, the annual observance of \n\t\t\t\t\t\tRamadan is regarded as one of the Five Pillars of Islam and lasts twenty-nine to thirty days, from one sighting of the crescent moon to the next.",
    "As per the Sangam Epics, the hunters of the hill tracts worshipped Murugan as the God of the hillock. Indra, god of Marudam, was worshipped \n\t\t\t\t\t\tby the agriculturists. There was a special festival instituted in Puhar in honour of Indra. Gajabahu I of Sri Lanka who was \n\t\t\t\t\t\tpresent on the occasion of the installation of a temple to Kannagi the goddess of chastity, by the Chera king Senguttuvan.",
    "Nauroz is the Iranian and Persian New Year; it is the first day of spring, this festival was introduced by Ghiyas ud din Balban. Later on, \n\t\t\t\t\t\tMughal Emperor Aurangzeb abolished the celebration of Nauroz.",
    "Eid al-Fitr (sometimes known as Eid ul-Fitr), also called the \"Festival of Breaking the Fast\", is a religious holiday celebrated by Muslims \n\t\t\t\t\t\tworldwide that marks the end of the month-long dawn-to-sunset fasting of Ramadan.",
    "Boat races are among the most celebrated and important part of the Onam festival. Called Vallam Kali in Malayalam, it is a form of canoe racing \n\t\t\t\t\t\tfor which people turn up in huge numbers. Snake shaped boats are used to compete with each other while singing songs in full volume.",
    "Maha Shivaratri is a Hindu festival celebrated annually in honour of the god Shiva. The name also refers to the night when Shiva performs the \n\t\t\t\t\t\theavenly dance. There is a Shivaratri in every luni-solar month of the Hindu calendar, on the month's 13th night/14th day, \n\t\t\t\t\t\tbut once a year in late winter (February/March, or Phalguna) and before the arrival of Summer, marks Maha Shivaratri which means \n\t\t\t\t\t\t\"the Great Night of Shiva\"."
};

char option_indian_festival[20][4][50]={
    {"Rajasthan","Gujarat","Maharashtra","Madhya Pradesh"},
    {"Sankranti","Ugadi","Lohri","Pongal"},
    {"Rajasthan - Gangaur","Gujarat - Durga Puja","Maharashtra - Ganesh Chaturathi","Uttar Pradesh - Krishna Janamashtami"},
    {"Jodhpur","Jaisalmer","Barmer","Bikaner"},
    {"Bullock-cart Racing","Cock fighting","Bull taming","Buffalo fighting"},
    {"New Moon Day","Full Moon Day","One day before Full Moon","One day after Full Moon"},
    {"Harayana","Himachal Pradesh","Uttar Pradesh","Rajasthan"},
    {"Tibet","Arunachal Pradesh","Sikkim","Kerala"},
    {"Mizoram","Assam","Sikkim","Nagaland"},
    {"Sankranti","Teej","Basant Panchami","Baisakhi"},
    {"January","March","August","November"},
    {"Cuttack","Ranchi","raipur","Patna"},
    {"Karnataka","Maharashtra","Jharkhand","Andhra Pradesh"},
    {"Aug-Sep","Jun-Jul","Oct-Nov","Jan-Feb"},
    {"Jan-Dec","Jun-Jul","Oct-Nov","Aug-Sep"},
    {"Indra","Svamimalai","Venkateshwara","Murugan"},
    {"Firuz Tughlaq","Ala-ud-din Khilji","Iltutmish","Balban"},
    {"Eid-Ul-Fitr","Idd-ul-Zuha","Ild","Bakir ID"},
    {"Ranali Bihu","Navratri","Onam","Pongal"},
    {"Dec-Jan","Jul-Aug","Feb-mar","Apr-May"}
};

char ans_indian_festival[20]={'C','B','B','B','D','B','A','C','D','B','A','A','D','A','C','A','D','A','C','C'};

char Q_sacred_places[20][200]={
    "One of the holiest Hindu temples is the Kashi Vishwanath temple. To which god is this temple dedicated?",
    "One of the most important temples in Southern India is the Meenakshi Sundareshwar temple. \n\t\t\t\tIn which city is this located?",
    "Who is the presiding deity of the temple at Tirupathi?",
    "One of the holiest of Hindu temples was established by the saint Shankara. In which city is it?",
    "ISKCON, one of the famous Hindu temples dedicated to Lord Krishna, has an International presence. \n\t\t\t\tWho is the founder of ISKCON?",
    "One of the famous temples in Northern India is Amarnath, which is yet another temple dedicated to Lord Shiva. \n\t\t\t\tWhat is special about the idol in this temple?",
    "Yagnapurush Kund is India's largest step-well, where visitors can watch a show of fountains, \n\t\t\t\tmusic and lights each night. The well is in which temple?",
    "Where the Bishnupur Group of Temples is located in India.",
    "Fatehpur Sikri is located in_____.",
    "Where is Akbar's Tomb located in India.",
    "Where is Golconda Fort located in India.",
    "Chittaurgarh Fort is located in _______.",
    "Where is Sun Temple located.",
    "Where are located Ajanta and Ellora Caves.",
    "Where is Elephanta Caves located.",
    "Where is Gol-Gumbaz located.",
    "Where is Kangra Fort located in India.",
    "Where is located Jantar Mantar in India.",
    "Where is located 'Four storied Rock-cut Hindu Temple' in Andhra Pradesh.",
    "Leh Palace is located in ______."
};

char about_sacred_places[20][800]={
    "Kashi is a holy city which has a temple for each of the 33 core gods and goddesses, except for Lord Braha. Kashi is most famous \n\t\t\t\t\t\tfor its temple devoted to Shiva",
    "The Meenakshi Temple of Madurai, which is dedicated to Lord Vishnu, is one of the most famous temples in the whole of India",
    "Venkateshwara (also known as Venkata, Balaji, Venkat acalapati and urinivasa) is one of the forms of Vishnu",
    "Sringeri is a very famous city in the state of Karnataka. There Shankara founded, not only a temple, but also a monastery, \n\t\t\t\t\t\tthe Sringeri Sharada Peetha",
    "Prabhupada, a devout disciple of Lord Krishna, understood the importance of the Krishna Consciousness among men and so founded \n\t\t\t\t\t\tISKCON - the International Society for Krishna Consciousness",
    "This is the most unique idol in the whole world. Every year the idol is automatically formed at a certain time and then, \n\t\t\t\t\t\tafter a few months, naturally melts away. The form has been the same since time immemorial",
    "Akshardham, in the state of Delhi, is one of the most famous temples in the world. It was opened in 2005 and is popular \n\t\t\t\t\t\tamongst tourists as well as residents of the city",
    "Bishnupur is a town located in the Bankura district of West Bengal, India. The town is famous for the terracotta temples made from \n\t\t\t\t\t\tthe locally available laterite stones. The list of temples in Bishnupur are Jor-Bangla Temple, Pancha Ratna Temple,\n\t\t\t\t\t\tMadanmohan Temple, Lalji temple, etc.",
    "Fatehpur Sikri is a small city in northern India, just west of Agra, founded by the 16th-century Mughal emperor Akbar",
    "Akbar's tomb is the tomb of the Mughal emperor Akbar. This tomb is an important Mughal architectural masterpiece. It was built in \n\t\t\t\t\t\t1605-1613 by his son Jahangir and is situated in 119 acres of grounds in Sikandra, a sub of Agra, Uttar Pradesh, India.",
    "Golconda Fort, also known as Golkonda (Telugu: \"shepherds' hill\"), is a fortified citadel and an early capital city of the Qutb Shahi dynasty .",
    "The Chittor Fort or Chittorgarh is the largest fort in India. It is a UNESCO World Heritage Site. The fort was the capital of \n\t\t\t\t\t\tMewar and is located in the present-day town of Chittor. It sprawls over a hill 180 m (590.6 ft) in height spread over \n\t\t\t\t\t\tan area of 280 ha (691.9 acres) above the plains of the valley drained by the Berach River. The fort precinct has several \n\t\t\t\t\t\thistorical palaces, gates, water tanks, temples and two prominent commemorative towers.",
    "Konark Sun Temple (Konark Surya Mandir) is a 13th-century CE(year 1250) Sun temple at Konark about 35 kilometres (22 mi) northeast \n\t\t\t\t\t\tfrom Puri on the coastline of Odisha, India. The temple is attributed to king Narasimhadeva I \n\t\t\t\t\t\tof the Eastern Ganga Dynasty about 1250 CE.",
    "These Caves are approximately 30 rock-cut Buddhist cave monuments which date from the 2nd century BCE to about 480 CE in Aurangabad \n\t\t\t\t\t\tdistrict of Maharashtra state of India.The caves include paintings and rock-cut sculptures described as \n\t\t\t\t\t\tamong the finest surviving examples of ancient Indian art, particularly expressive paintings that present emotions through gesture, \n\t\t\t\t\t\tpose and form.They are universally regarded as masterpieces of Buddhist religious art",
    "Elephanta Caves are a UNESCO World Heritage Site and a collection of cave temples predominantly dedicated to the Hindu god Shiva. \n\t\t\t\t\t\tThey are on Elephanta Island, or Gharapuri (literally \"the city of caves\"), in Mumbai Harbour, 10 kilometres (6.2 mi) \n\t\t\t\t\t\teast of Mumbai in the Indian state of Maharashtra. The island, about 2 kilometres (1.2 mi) west of the Jawaharlal Nehru Port, \n\t\t\t\t\t\tconsists of five Hindu caves and a few Buddhist stupa mounds that date back to the 2nd century BCE,as well as a small group of \n\t\t\t\t\t\ttwo Buddhist caves with water tanks.",
    "The resting place of Mohammed Adil Shah and his wives, mistress, daughter and grandson, Gol Gumbaz is among the greatest examples of \n\t\t\t\t\t\tthe Adil Shahi architecture with one of the biggest domes in the world.Built in 1656 it took 30 years to \n\t\t\t\t\t\tcomplete the construction of Gol Gumbaz. The mausoleum was designed by Yaqut of Dabul.",
    "The Kangra Fort was built by the royal Rajput family of Kangra State (the Katoch dynasty), which traces its origins to the ancient \n\t\t\t\t\t\tTrigarta Kingdom, mentioned in the Mahabharata epic. It is the largest fort in the Himalayas and \n\t\t\t\t\t\tprobably the oldest dated fort in India",
    "Jantar Mantar is located in the modern city of New Delhi. \"Jantar Mantar\" literally means \"instruments for measuring the harmony of the heavens\". \n\t\t\t\t\t\tIt consists of 13 architectural astronomy instruments. The site is one of five built by Maharaja Jai Singh II of Jaipur.",
    "The Undavalli Caves, a monolithic example of Indian rock-cut architecture and one of the finest testimonials to ancient viswakarma sthapathis, \n\t\t\t\t\t\tare located in Undavalli of Guntur district in the Indian state of Andhra Pradesh.",
    "Leh Palace is a former royal palace overlooking the town of Leh, Ladakh, in the Indian Himalayas. It was constructed circa 1600 by Sengge Namgyal."
};

char option_sacred_places[20][4][50]={
    {"Brahma","Vishnu","Shiva","Durga"},
    {"Madurai","Thanjavur","Mysore","Tirupati"},
    {"Krishna","Venkateshwara","Ganesha","Saraswathi"},
    {"Srinegri","Kashi","Shabarimalai","Kanchi"},
    {"Raghavendra Swamy","Sai Baba","Rajneesh","Prabhupada"},
    {"The idol is an ice stalagmite","The idol is made from pure gold","The idol is a mummufied cow","The idol is made from pure silver"},
    {"Akshardham","Meenakshi","Angkor Vat","Siddhivinayak"},
    {"Uttarakhand","Uttar Pradesh","Bihar","West Bengal"},
    {"Uttarakhand","Uttar Pradesh","Jharkhand","Rajasthan"},
    {"Ghaziabad","Agra","Noida","Allahabad"},
    {"Telangana","Rajasthan","Delhi","Punjab"},
    {"Madhya Pradesh","Delhi","Rajasthan","Hyderabad"},
    {"Konark","Sambalpur","Rourkela","Belgam"},
    {"Odisha","Telangana","Maharashtra","Karnataka"},
    {"Madurai","Vizag","Mumbai","Bhopal"},
    {"Telangana","Rajasthan","Maharashtra","Karnataka"},
    {"Uttar Pradesh","Himachal Pradesh","Rajasthan","Haryana"},
    {"Delhi","Hyderabad","Rajasthan","Jammu & Kashmir"},
    {"Unadavalli","Mangalagiri","Annavaram","Cherlopalli"},
    {"Uttarakhand","Punjab","Delhi","Jammu & Kashmir"}
};

char ans_sacred_places[20]={'C','A','B','A','D','A','A','D','B','B','A','C','A','C','C','D','B','A','A','D'};

char Q_mystic_india[20][500]={
    "Among several seals in Mohenjo-Daro, is of a horned male along with a host of animals. What is it called?",
    "This headless statue was found in the fields of a village called Mat, near Mathura by Pt. Radhakrishna in 1911, is of which great emperor?",
    "Which among these types of land formation predominantly makes up the Terai region of The Himalayas ?",
    "Asaf-Ud-Daula's grand edifice was built to provide employment to local people suffering from the Great Famine of 1784. The complex \n\t\t\t\tconsists of several misleading labyrinths and has a mosque and a step well too. What is the name of this building?",
    "What name is given to a narrow strip of land that connects West Bengal to the North Eastern States?",
    "In which Indian City was the Battle of the Tennis Court fought by the Allied forces against Japanese forces?",
    "Where is this UNESCO heritage site famous for its sculptures on a hill located?",
    "This ritual called Chera Pahara is the beginning of annual Jatra, in which the Gajapati sweeps the floor with a golden handled broom. \n\t\t\t\tWhich English word was born of this great spectacle?",
    "Where is this architectural wonder located? (In pic: A single stonepillar hangs from a ceiling without support)",
    "The war against Tipu Sultan made the local people to build a defensive wall of 48 kms length across the northern borders and \n\t\t\t\tnothing of it remains now. What is the name of this defensive line of fortification?",
    "A steep fall in a commodity's price led to the beginning of a co-operative headed by Sri. V.S. Bhat. Today it is one of the \n\t\t\t\tleading producers of chocolate in the country. Which one?",
    "Which of these waterfalls has a railway line crossing midway and has a minute stop to enable visitors to alight and watch?",
    "The Chaturbhuj temple has world's 2nd oldest written evidence of '0' after the Bakhshali manuscript. In which city is this temple located?",
    "This city hosts the Kumbh Mela, when Jupiter is in the constellation Leo, meaning Simhastha. Which city?",
    "J'adore Series of Christian Dior has extracts of which of these as a key ingredient of its perfumes?",
    "Bhimkund is a Natural water tank and a holy place..The water of this kund is magnificently blue. Name the state in which it is located?",
    "India made a significant contribution to the numeral system with its discovery of the which number?",
    "Name the teenage yogi who walked 12,000 kilometers around the Indian subcontinent for the exploration of \"India's silent spirituality\"",
    "Who is describes as the founding interpreter of Sri Vaishnavite scripture. And the single most influential thinker of devotional Hinduism?",
    "Where is the worlds largest monolithic monument is situated?"
};

char about_mystic_india[20][1000]={
    "The Pashupati Seal is a steatite seal that was discovered at the Mohenjo-daro archaeological site of the Indus Valley Civilization .\n\t\t\t\t\t\tThe seal depicts a seated figure that is possibly tricephalic (having three heads). It was once thought to be ithyphallic , an\n\t\t\t\t\t\tinterpretation that is now mostly discarded. The man has a horned headdress and is surrounded by animals. He may represent a horned deity .\n\t\t\t\t\t\tThe seal is kept in the National Museum of India in New Delhi.",
    "A statue of Kanishka was found in the village Mat, near Mathura by Pandit Radha Krishna in 1911. At first glance, the statue appears\n\t\t\t\t\t\tvery ordinary without much details which are usually present in Indian art. However, it is interesting to note that nearly every\n\t\t\t\t\t\tscholar of ancient Indian history has commented on this piece of art. According to Romila Thapar, the statue represents “the king as an \n\t\t\t\t\t\timpressive figure in boots and coat.”",
    "Terai is a low land region containing some hill ranges. Looking out for its coverage, it covers 17% of the total area of Nepal The \n\t\t\t\t\t\tOuter Terai ends at the base of the first range of foothills called the Siwaliks or Churia . This range has a densely forested \n\t\t\t\t\t\tskirt of coarse alluvium called the bhabhar .",
    "Bara Imambara , also known as Asfi Mosque is an imambara complex in Lucknow, India built by Asaf-ud-Daula , \n\t\t\t\t\t\tNawab of Awadh in 1784. Bara means big .",
    "The Siliguri Corridor, also known as the Chicken's Neck, is a narrow stretch of land of about 22 kilometres (14 mi) width, located \n\t\t\t\t\t\tin the Indian state of West Bengal , that connects India's northeastern states to the rest of India, with the countries of \n\t\t\t\t\t\tNepal and Bangladesh lying on either side of the corridor.",
    "The Battle of the Tennis Court was part of the wider Battle of Kohima that was fought in North East India from April 4 – June 22, 1944 \n\t\t\t\t\t\tduring the Burma Campaign of the Second World War.",
    "Bound by the meandering Manu River, this region is home to one of the most spectacular heritage sites in South Asia — the giant \n\t\t\t\t\t\tbas-relief sculptures of Unakoti. Located around 178 km from Agartala, Unakoti's 'Lost Hill of Faces' is a centuries-old \n\t\t\t\t\t\tShaivite pilgrimage spot, unlike anything you'll find in India.",
    "The tradition of Chera Panhara started by King Purushottama Deva continues to this day. It is the most famous ritual associated \n\t\t\t\t\t\twith the Jagannath Puri Rath Yatra. During the festival, the Gajapati King sweeps all around the deities and chariots. \n\t\t\t\t\t\tHe then cleanses the road with a broom (gold-handled) and sprinkles sandalwood water and powder. His action bridges the gap between the rich and the poor, \n\t\t\t\t\t\tthe low caste and the high caste and sends out the very important message of dignity of labour.",
    "This was the famed Hanging Column or Pillar of Lepakshi temple, located in Anantapur district in southern Andhra Pradesh. \n\t\t\t\t\t\t“This is the pillar which does not rest on the ground fully,” the guide said, rising to stand beside us, and beaming triumphantly, \n\t\t\t\t\t\talmost as if he were the architect of this marvel.",
    "Nedumkotta or Travancore lines was a wall built as a protection against consistent invasion and threats from \n\t\t\t\t\t\tnorthern kingdoms mainly Tipu Sultan of Mysore.",
    "The Central Arecanut and Cocoa Marketing and Processing Co-operative Limited or CAMPCO was found on 11 July 1973 at Mangalore. \n\t\t\t\t\t\tSavior of Arecanut farmer and The organisation working on principles of co-operative was found to mitigate the sufferings \n\t\t\t\t\t\tof arecanut and cocoa growers in Indian states of Karnataka and Kerala.",
    "Dudhsagar Falls is a four-tiered waterfall located on the Mandovi River in the Indian state of Goa. It is 60 km from Panaji by \n\t\t\t\t\t\troad and is located on the Guntakal–Vasco da Gama rail route about 46 km east of Madgaon and 80 km south of Belagavi.",
    "Mathematicians and historians alike, believe that the inscription in the Gwalior temple is one of the oldest surviving symbols \n\t\t\t\t\t\tof zero in the world. The plaque on the temple wall mentions a land grant of 270 hastas.",
    "The City of Temples situated along the Kshipra River, Ujjain get most of its religious importance from Shri Mahakaleshwar temple. \n\t\t\t\t\t\tOther than this, it is also one of the 4 places where Kumbh Mela is held. Kumbh that is known as \n\t\t\t\t\t\tUjjain Simhastha commences when the Jupiter is in Leo .",
    "Madurai Mall is jasmine flower which is known for its powerful, mysteriously attractive and seductive fragrance. It is known as Madurai \n\t\t\t\t\t\tsmall because of its place of origin namely Madurai. Madurai is in the province of Tamil Nadu in iIndia. All the women n of \n\t\t\t\t\t\tTamil Nadu at least once in their life rime would have adorned her hair with rheas highly scented beautiful flower",
    "Great Hindu epic Mahabharata links Bhimkund with Pandavas. Tired and weary under the hot scorching sun, Draupadi fainted of thirst. Bhim, \n\t\t\t\t\t\tthe strongest of the five brothers, hit the ground with his gada, water surged out and the pool came into being.",
    "India made a significant contribution to the numeral system with its discovery of the Zero. Without it, we wouldn't have computers and \n\t\t\t\t\t\tcounting would be difficult. The earliest written evidence of the concept comes from an Indian text, Lokavibhaaga \n\t\t\t\t\t\t(\"The Parts of the Universe\"), which dates to 458 B.C.",
    "Nilkanth walked 12,000 kilometers around the Indian subcontinent over a span of 7 years. His journey took him through the \"dense jungles, \n\t\t\t\t\t\tfertile plains, majestic mountains, mighty rivers, and peaceful coastlines\" of India. [2] This journey included the \n\t\t\t\t\t\texploration of “India’s silent spirituality” and its appropriation as a \"mystic land of meditation, contemplation and enlightenment.",
    "Ramanuja not only developed theories and published philosophical works, he organized a network of temples for Vishnu-Lakshmi worship. \n\t\t\t\t\t\tRamanuja set up centers of studies for his philosophy during the 11th- and 12th-century, by traveling through India in that era, \n\t\t\t\t\t\tand these influenced generations of poet saints devoted to the Bhakti movement.",
    "The rock-cut Kailas temple at Ellora is the world’s largest monolithic monument. It took 7,000 craftsmen to carve it, starting from the \n\t\t\t\t\t\ttop of the hill of solid stone and chipping away downwards - for six generations - 150 years!"
};

char option_mystic_india[20][4][50]={
    {"Prajapati","Pasupathi","Panchakshara","Parameshwara"},
    {"Vikramaditya","Ashoka","Harshavardhana","Kanishka"},
    {"Marshy riverine grasslands","Coniferous forests","Grass Hills","Snow capped peaks"},
    {"Bara Maqbra","Bara Imambra","Gol Gumbaz","Bibi ka Maqbra"},
    {"Pigeon's flight","Cuckoo's call","Chicken's neck","Crow's feet"},
    {"Kohima, Nagaland","Agartala, Tripura","Imphal, Manipur","Aizwal, Mizoram"},
    {"Itanagar, Arunachal Pradesh","Gangtok, Sikkim","Unakoti, Tripura","Dispur, Assam"},
    {"Jayanti","Joshi","Juggler","Juggernaut"},
    {"Hampi","Lepakshi","Gandikota","Aihole"},
    {"Sultanis Battery","Udumbanshola","Nedumkotta","Vattakotta"},
    {"AMUL","KRIBHCO","IFFCO","CAMPCO"},
    {"Jog Falls","Dudhsagar","Sivasamudra","Hoganekal"},
    {"Gwalior","Dibrugarh","Varanasi","Madurai"},
    {"Haridwar","Prayag","Ujjain","Nasik"},
    {"Kumbakonam betel leaves","Madurai Jasmine","Nilgigi Tea","Salem Mangoes"},
    {"Uttar Pradesh","Madhya Pradesh","Gujarat","Uttarakhand"},
    {"One","Eight","Zero","Three"},
    {"Nilkanth","Sudama","Shiver","Kanishk"},
    {"Ramanuja","Vashuda","Shankara","Vishnu"},
    {"Badrinath","Gangotri","Konark","Ellora"}
};

char ans_mystic_india[20]={'B','D','A','B','C','A','C','D','B','C','D','B','A','C','B','B','C','A','A','D'};

char Q_indian_culture[20][500]={
    "Which of the following is not a classical dance of India?",
    "Rajgir Mahotsav is celebrated in _____:",
    "Which among the following is the hallmark feature of the Dravida style of temple architecture?",
    "The Sangai Festival is organized in ____:",
    "Kargam is a folk dance of which state?",
    "Vedic mythology refers to an ancient settlement called Pushkalavati after Pushkal, who was the son of King Bharata in the \n\t\t\t\t\t\tepic Ramayan. What is the modern location of Pushkalavati?",
    "Which state of India is associated with the Folk Dance Teratali?",
    "Consider the following pairs of caves with their states:\n\t\t\t\t\t\t1. Siju Caves?Meghalaya\n\t\t\t\t\t\t2. Kotumsar?Chattishgarh\n\t\t\t\t\t\t3. Patal Bhuvaneshwar?Uttarakhand\n\t\t\t\t\t\t4. Borra C aves?Andhra Pradesh\n\t\t\t\t\t\t5. Barabar Caves?Bihar\n\t\t\t\tWhich of the above is/are correctly matched?",
    "Which of the following contains the Madhyandina and Kanva recensions?",
    "Which of the following refers to udaka-bhaga?",
    "At which of the following places the colossal figure of Krishna effortlessly lifting up Govardhana mountain can be found?",
    "In which of the following temples, the pyramidal roof can be found?",
    "Which of the following added an entrance to the Qutub Minar called Alai Darwaza?",
    "Elephanta Caves are predominantly a ttributed to which Hindu God?",
    "Who among the following started Ganapati Festival in 1893 and thereby gave it national character?",
    "Who among the following Arab scholars studied Sanskrit and astronomy for a decade at Varanasi ?",
    "Pandit Jasraj belongs to which among the following Gharanas?",
    "In which state of North east India \"Dree Festival\" which is a crop harvest festival is observed?",
    "Which of the following period saw the emergence of rock-cut architecture?",
    "Which of the following was the author of Alhakhand?"
};

char about_indian_culture[20][2000]={
    "The Sangeet Natak Akademi recognizes Bharatnatyam, Kathak, Kuchipudi, Odishi, Kathakali, Sattriya, Manipuri and Mohiniyattam as \n\t\t\t\t\t\tclassical dances in India.",
    "Rajgir, the ancient capital of the Magadhan empire in Bihar is held sacred by both Buddhists and Jains for its association with \n\t\t\t\t\t\tthe Buddha and Mahavir. Department of Tourism, Bihar holds a colourful festival of dance and music, Rajgir Mahotsav or \n\t\t\t\t\t\tDance Festival every year in Rajgir.",
    "Vimana is a term for the tower above the Garbhagriha or Sanctum sanctorum in a Hindu temple in Dravidian style.",
    "The Sangai festival i s an annual cultural festival organised by Manipur Tourism Department on every year from November 21 to 30. \n\t\t\t\t\t\tThe festival as named as the Sangai Festival to stage the uniqueness of the shy and gentle brow-antlered deer \n\t\t\t\t\t\tpopularly known as the Sangai Deer, which is the state animal of Manipur.",
    "Karagam is a traditional dance of Tamil Nadu, which i s performed by male dancers. In this dance, the dancer wears dhoti and garlands, \n\t\t\t\t\t\tand dons a kalash, or pitcher, filled with water and uncooked rice on his head (as a symbol of life and fertility). \n\t\t\t\t\t\tThe The pitcher, decorated by a flower-bedecked conical bamboo frame, is balanced by the dancer on his head. Karagam dancers \n\t\t\t\t\t\tmove in a procession throughout the village to reach the temple of the goddess, accompanied by the drum called \n\t\t\t\t\t\tnadaswaram and other instruments.",
    "Pushkalavati was capital of ancient Kingdom of Gandhara. Its ruins are currently located in Charsadda, Pakistan, located in Peshawar \n\t\t\t\t\t\tvalley in the Khyber Pakhtunkhwa province (formerly NWFP). Pushkalavati was home of the Sanskrit grammarian Panini.",
    "Tera Tali is a famous folk dance of Rajasthan. It is Performed by the ‘ Kamar’ tribe. The women folk sit on the ground while \n\t\t\t\t\t\tperforming the Tera Tali.",
    "All given pairs are correctly matched",
    "Shukla Yajur Veda also called the White Yajur Veda or the Vajasaneya contains only the Mantras. It contains the Madhyandina and \n\t\t\t\t\t\tKanva recensions. Whereas the Krishna Yajur Veda also called the Black Yajur Veda contains both mantras and prose \n\t\t\t\t\t\texplanations/ commentary.",
    "During the Mauryan period when the importance of irrigation was fully realised, the peasants had to pay more tax on irrigated land\n\t\t\t\t\t\t which was known as udaka-bhaga. It refers to water rate, and was generally levied at one-fifth to one-third of the produce.",
    "The colossal figure of Krishna effortlessly lifting up the Govardhana mountain is one of the largest known free-standing stone image \n\t\t\t\t\t\tbelonging to the Gupta period. It is located in Varanasi.",
    "Bhitargaon temple in Kanpur District is a great example of Gupta temples made entirely of brick. The temple at Bhitargaon has a \n\t\t\t\t\t\tpyramidal roof. The walls of this temple are decorated with terracotta panels.",
    "Qutub Minar a magnificent building of the 13th century was founded by Aibak and completed by Iltutmish. Alauddin Khalji added an \n\t\t\t\t\t\tentrance to the Qutub Minar called Alai Darwaza later.",
    "Elephanta is a small island in sea and located at about 6.2 miles (North-East) from Gateway of India, Mumbai. Five caves are discovered\n\t\t\t\t\t\t in Elephanta hills, which are related to hindu religion and especially related to Lord Shiva.",
    "Bal Gangadhar Tilak started Ganapati festival in 1893. By doing so, he transformed the traditional Ganapati festival of Maharashtra \n\t\t\t\t\t\tinto a National festival.",
    "Alberuni, the Arab astronomer who studied Sanskrit and astronomy for a decade at Varanasi.",
    "Pandit Jasraj was an Indian classical vocalist, belonging to the Mewati gharana. His musical career spanned 75 years resulting in national \n\t\t\t\t\t\tand international fame, respect and numerous major awards and accolades. He died in August 2020.",
    "\"Dree Festival\" which is a crop harvest festival is observed in Arunachal Pradesh. The Apatanis, who inhabit a tranquil pine clad \n\t\t\t\t\t\tvalley called Ziro at the core of Lower Subansiri District of Arunachal Pradesh, are famous for their unique practice \n\t\t\t\t\t\tof wet rice cultivation.",
    "Stone culture dramatically emerged as the principal medium of Indian arts in the Mauryan period. Many art forms such as stone sculptures, \n\t\t\t\t\t\tring stones, disc stones, terracotta figurines, and stupa architecture were patronized by different Mauryan kings. \n\t\t\t\t\t\tThe Maurya period also saw the beginning of rock-cut architecture.",
    "Chand Bardoi was the author of Prithviraj Raso whereas Jagnayak wrote Alhakhand where he described the chivalrous deeds of Alha and Udal. \n\t\t\t\t\t\tAmir Khusrau and Baba Gorakhnath, apart from others are also famous writers of the Sultanate period."
};

char option_indian_culture[20][5][50]={
    {"Kathak","Sattriya","Manipuri","Bhangra"},
    {"Rajasthan","Bihar","Uttar Pradesh","Madhya Pradesh"},
    {"Shikara","Gopura","Vimana","Mandapa"},
    {"Assam","Manipur","Bihar","Nagaland"},
    {"Kerala","Tamil Nadu","Karanataka","Andhra Pradesh"},
    {"Panipat","Pushkar","Peshawar(in Pakistan)","Punjab"},
    {"Haryana","Rajasthan","Punjab","Gujarat"},
    {"4 and 5 Only","2,4 and 5 Only","1,2,4 and 5 Only","1,2,3,4 and 5"},
    {"Shukla Yajur Veda","Krishna Yajur Veda","Black Yajur Veda","None of the above"},
    {"Tax on irrigated land","Tax on fertile land","Tax on trade","Tax on production"},
    {"Mathura","Vrindavan","Varanasi","Deogarh"},
    {"Bhitargaon Temple","Dasavatar Temple","Shiva Temple of Bhumara","Shiva Temple of Koh"},
    {"Jalauddin Khilji","Alauddin Khilji","Mubarak Shah","Khusrau Shah"},
    {"Lord Shiva","Lord Hanuman","Lord Indra","Lord Brahma"},
    {"Ganesh Damodar Savarkar","Nana Patil","Lok Manya Tilak","Vinoba Bhave"},
    {"Alberuni","Amir Khusrau","Al'bidari","Al'Masher"},
    {"Kirana","Jaipur","Banaras","Mewati"},
    {"Meghalaya","Arunachal Pradesh","Assam","Nagaland"},
    {"Gupta period","Maurya period","Vedic period","Post-vedic period"},
    {"Chand Bardoi","Baba Gorakhnath","Amir Khusrau","Jagnayak"}
};

char ans_indian_culture[20]={'D','B','C','B','B','C','B','D','A','A','C','A','B','A','C','A','D','B','B','D'};


void Welcome(void){
    int j=0;
    for(j=0;j<6;++j){
        gotoxy(60,5+j);
        printf("%s",welcome[j]);
        Sleep(100);
    }
    
}

void title(void){
    int j=0,i=0;
    for(j=0;ICT[i][j]!='\0';++j){
        int k=0;
        for(k=0;k<5;++k){
            gotoxy(20+j,17+k);
            printf("%c",ICT[k][j]);
        }
        Sleep(10);
    }
        
}


void subtitle(void){
    char s_title[100]="The Basis Behind Its Elements.";
    int i=0;
    Sleep(1000);
    gotoxy(90,25);
    for(i=0;s_title[i]!='\0';++i){
        printf("%c",s_title[i]);
        Sleep(40);
    }
}

void Menu(void){
    int i=0;
    for(i=0;i<6;++i){
        gotoxy(90,7+i);
        printf("%s",menu[i]);
    }
}

void Team(void){
    int i=0;
    for(i=0;i<7;i++){
        gotoxy(90,5+i);
        printf("%s",team[i]);
    }
}

#endif