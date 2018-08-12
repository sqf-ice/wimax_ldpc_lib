#include "matrices.h"


#ifdef Z_48
int16_t wimax_1152_0_75A[288][15] = {
    {3, 67, 97, 190, 351, 419, 523, 594, 643, 674, 725, 839, 888, 912, -1},
    {4, 68, 98, 191, 352, 420, 524, 595, 644, 675, 726, 840, 889, 913, -1},
    {5, 69, 99, 144, 353, 421, 525, 596, 645, 676, 727, 841, 890, 914, -1},
    {6, 70, 100, 145, 354, 422, 526, 597, 646, 677, 728, 842, 891, 915, -1},
    {7, 71, 101, 146, 355, 423, 527, 598, 647, 678, 729, 843, 892, 916, -1},
    {8, 72, 102, 147, 356, 424, 480, 599, 648, 679, 730, 844, 893, 917, -1},
    {9, 73, 103, 148, 357, 425, 481, 600, 649, 680, 731, 845, 894, 918, -1},
    {10, 74, 104, 149, 358, 426, 482, 601, 650, 681, 732, 846, 895, 919, -1},
    {11, 75, 105, 150, 359, 427, 483, 602, 651, 682, 733, 847, 896, 920, -1},
    {12, 76, 106, 151, 360, 428, 484, 603, 652, 683, 734, 848, 897, 921, -1},
    {13, 77, 107, 152, 361, 429, 485, 604, 653, 684, 735, 849, 898, 922, -1},
    {14, 78, 108, 153, 362, 430, 486, 605, 654, 685, 736, 850, 899, 923, -1},
    {15, 79, 109, 154, 363, 431, 487, 606, 655, 686, 737, 851, 900, 924, -1},
    {16, 80, 110, 155, 364, 384, 488, 607, 656, 687, 738, 852, 901, 925, -1},
    {17, 81, 111, 156, 365, 385, 489, 608, 657, 688, 739, 853, 902, 926, -1},
    {18, 82, 112, 157, 366, 386, 490, 609, 658, 689, 740, 854, 903, 927, -1},
    {19, 83, 113, 158, 367, 387, 491, 610, 659, 690, 741, 855, 904, 928, -1},
    {20, 84, 114, 159, 368, 388, 492, 611, 660, 691, 742, 856, 905, 929, -1},
    {21, 85, 115, 160, 369, 389, 493, 612, 661, 692, 743, 857, 906, 930, -1},
    {22, 86, 116, 161, 370, 390, 494, 613, 662, 693, 744, 858, 907, 931, -1},
    {23, 87, 117, 162, 371, 391, 495, 614, 663, 694, 745, 859, 908, 932, -1},
    {24, 88, 118, 163, 372, 392, 496, 615, 664, 695, 746, 860, 909, 933, -1},
    {25, 89, 119, 164, 373, 393, 497, 616, 665, 696, 747, 861, 910, 934, -1},
    {26, 90, 120, 165, 374, 394, 498, 617, 666, 697, 748, 862, 911, 935, -1},
    {27, 91, 121, 166, 375, 395, 499, 618, 667, 698, 749, 863, 864, 936, -1},
    {28, 92, 122, 167, 376, 396, 500, 619, 668, 699, 750, 816, 865, 937, -1},
    {29, 93, 123, 168, 377, 397, 501, 620, 669, 700, 751, 817, 866, 938, -1},
    {30, 94, 124, 169, 378, 398, 502, 621, 670, 701, 752, 818, 867, 939, -1},
    {31, 95, 125, 170, 379, 399, 503, 622, 671, 702, 753, 819, 868, 940, -1},
    {32, 48, 126, 171, 380, 400, 504, 623, 624, 703, 754, 820, 869, 941, -1},
    {33, 49, 127, 172, 381, 401, 505, 576, 625, 704, 755, 821, 870, 942, -1},
    {34, 50, 128, 173, 382, 402, 506, 577, 626, 705, 756, 822, 871, 943, -1},
    {35, 51, 129, 174, 383, 403, 507, 578, 627, 706, 757, 823, 872, 944, -1},
    {36, 52, 130, 175, 336, 404, 508, 579, 628, 707, 758, 824, 873, 945, -1},
    {37, 53, 131, 176, 337, 405, 509, 580, 629, 708, 759, 825, 874, 946, -1},
    {38, 54, 132, 177, 338, 406, 510, 581, 630, 709, 760, 826, 875, 947, -1},
    {39, 55, 133, 178, 339, 407, 511, 582, 631, 710, 761, 827, 876, 948, -1},
    {40, 56, 134, 179, 340, 408, 512, 583, 632, 711, 762, 828, 877, 949, -1},
    {41, 57, 135, 180, 341, 409, 513, 584, 633, 712, 763, 829, 878, 950, -1},
    {42, 58, 136, 181, 342, 410, 514, 585, 634, 713, 764, 830, 879, 951, -1},
    {43, 59, 137, 182, 343, 411, 515, 586, 635, 714, 765, 831, 880, 952, -1},
    {44, 60, 138, 183, 344, 412, 516, 587, 636, 715, 766, 832, 881, 953, -1},
    {45, 61, 139, 184, 345, 413, 517, 588, 637, 716, 767, 833, 882, 954, -1},
    {46, 62, 140, 185, 346, 414, 518, 589, 638, 717, 720, 834, 883, 955, -1},
    {47, 63, 141, 186, 347, 415, 519, 590, 639, 718, 721, 835, 884, 956, -1},
    {0, 64, 142, 187, 348, 416, 520, 591, 640, 719, 722, 836, 885, 957, -1},
    {1, 65, 143, 188, 349, 417, 521, 592, 641, 672, 723, 837, 886, 958, -1},
    {2, 66, 96, 189, 350, 418, 522, 593, 642, 673, 724, 838, 887, 959, -1},
    {31, 95, 105, 186, 286, 327, 391, 574, 646, 684, 736, 783, 912, 960, -1},
    {32, 48, 106, 187, 287, 328, 392, 575, 647, 685, 737, 784, 913, 961, -1},
    {33, 49, 107, 188, 240, 329, 393, 528, 648, 686, 738, 785, 914, 962, -1},
    {34, 50, 108, 189, 241, 330, 394, 529, 649, 687, 739, 786, 915, 963, -1},
    {35, 51, 109, 190, 242, 331, 395, 530, 650, 688, 740, 787, 916, 964, -1},
    {36, 52, 110, 191, 243, 332, 396, 531, 651, 689, 741, 788, 917, 965, -1},
    {37, 53, 111, 144, 244, 333, 397, 532, 652, 690, 742, 789, 918, 966, -1},
    {38, 54, 112, 145, 245, 334, 398, 533, 653, 691, 743, 790, 919, 967, -1},
    {39, 55, 113, 146, 246, 335, 399, 534, 654, 692, 744, 791, 920, 968, -1},
    {40, 56, 114, 147, 247, 288, 400, 535, 655, 693, 745, 792, 921, 969, -1},
    {41, 57, 115, 148, 248, 289, 401, 536, 656, 694, 746, 793, 922, 970, -1},
    {42, 58, 116, 149, 249, 290, 402, 537, 657, 695, 747, 794, 923, 971, -1},
    {43, 59, 117, 150, 250, 291, 403, 538, 658, 696, 748, 795, 924, 972, -1},
    {44, 60, 118, 151, 251, 292, 404, 539, 659, 697, 749, 796, 925, 973, -1},
    {45, 61, 119, 152, 252, 293, 405, 540, 660, 698, 750, 797, 926, 974, -1},
    {46, 62, 120, 153, 253, 294, 406, 541, 661, 699, 751, 798, 927, 975, -1},
    {47, 63, 121, 154, 254, 295, 407, 542, 662, 700, 752, 799, 928, 976, -1},
    {0, 64, 122, 155, 255, 296, 408, 543, 663, 701, 753, 800, 929, 977, -1},
    {1, 65, 123, 156, 256, 297, 409, 544, 664, 702, 754, 801, 930, 978, -1},
    {2, 66, 124, 157, 257, 298, 410, 545, 665, 703, 755, 802, 931, 979, -1},
    {3, 67, 125, 158, 258, 299, 411, 546, 666, 704, 756, 803, 932, 980, -1},
    {4, 68, 126, 159, 259, 300, 412, 547, 667, 705, 757, 804, 933, 981, -1},
    {5, 69, 127, 160, 260, 301, 413, 548, 668, 706, 758, 805, 934, 982, -1},
    {6, 70, 128, 161, 261, 302, 414, 549, 669, 707, 759, 806, 935, 983, -1},
    {7, 71, 129, 162, 262, 303, 415, 550, 670, 708, 760, 807, 936, 984, -1},
    {8, 72, 130, 163, 263, 304, 416, 551, 671, 709, 761, 808, 937, 985, -1},
    {9, 73, 131, 164, 264, 305, 417, 552, 624, 710, 762, 809, 938, 986, -1},
    {10, 74, 132, 165, 265, 306, 418, 553, 625, 711, 763, 810, 939, 987, -1},
    {11, 75, 133, 166, 266, 307, 419, 554, 626, 712, 764, 811, 940, 988, -1},
    {12, 76, 134, 167, 267, 308, 420, 555, 627, 713, 765, 812, 941, 989, -1},
    {13, 77, 135, 168, 268, 309, 421, 556, 628, 714, 766, 813, 942, 990, -1},
    {14, 78, 136, 169, 269, 310, 422, 557, 629, 715, 767, 814, 943, 991, -1},
    {15, 79, 137, 170, 270, 311, 423, 558, 630, 716, 720, 815, 944, 992, -1},
    {16, 80, 138, 171, 271, 312, 424, 559, 631, 717, 721, 768, 945, 993, -1},
    {17, 81, 139, 172, 272, 313, 425, 560, 632, 718, 722, 769, 946, 994, -1},
    {18, 82, 140, 173, 273, 314, 426, 561, 633, 719, 723, 770, 947, 995, -1},
    {19, 83, 141, 174, 274, 315, 427, 562, 634, 672, 724, 771, 948, 996, -1},
    {20, 84, 142, 175, 275, 316, 428, 563, 635, 673, 725, 772, 949, 997, -1},
    {21, 85, 143, 176, 276, 317, 429, 564, 636, 674, 726, 773, 950, 998, -1},
    {22, 86, 96, 177, 277, 318, 430, 565, 637, 675, 727, 774, 951, 999, -1},
    {23, 87, 97, 178, 278, 319, 431, 566, 638, 676, 728, 775, 952, 1000, -1},
    {24, 88, 98, 179, 279, 320, 384, 567, 639, 677, 729, 776, 953, 1001, -1},
    {25, 89, 99, 180, 280, 321, 385, 568, 640, 678, 730, 777, 954, 1002, -1},
    {26, 90, 100, 181, 281, 322, 386, 569, 641, 679, 731, 778, 955, 1003, -1},
    {27, 91, 101, 182, 282, 323, 387, 570, 642, 680, 732, 779, 956, 1004, -1},
    {28, 92, 102, 183, 283, 324, 388, 571, 643, 681, 733, 780, 957, 1005, -1},
    {29, 93, 103, 184, 284, 325, 389, 572, 644, 682, 734, 781, 958, 1006, -1},
    {30, 94, 104, 185, 285, 326, 390, 573, 645, 683, 735, 782, 959, 1007, -1},
    {35, 123, 198, 273, 310, 375, 471, 581, 683, 747, 803, 857, 960, 1008, -1},
    {36, 124, 199, 274, 311, 376, 472, 582, 684, 748, 804, 858, 961, 1009, -1},
    {37, 125, 200, 275, 312, 377, 473, 583, 685, 749, 805, 859, 962, 1010, -1},
    {38, 126, 201, 276, 313, 378, 474, 584, 686, 750, 806, 860, 963, 1011, -1},
    {39, 127, 202, 277, 314, 379, 475, 585, 687, 751, 807, 861, 964, 1012, -1},
    {40, 128, 203, 278, 315, 380, 476, 586, 688, 752, 808, 862, 965, 1013, -1},
    {41, 129, 204, 279, 316, 381, 477, 587, 689, 753, 809, 863, 966, 1014, -1},
    {42, 130, 205, 280, 317, 382, 478, 588, 690, 754, 810, 816, 967, 1015, -1},
    {43, 131, 206, 281, 318, 383, 479, 589, 691, 755, 811, 817, 968, 1016, -1},
    {44, 132, 207, 282, 319, 336, 432, 590, 692, 756, 812, 818, 969, 1017, -1},
    {45, 133, 208, 283, 320, 337, 433, 591, 693, 757, 813, 819, 970, 1018, -1},
    {46, 134, 209, 284, 321, 338, 434, 592, 694, 758, 814, 820, 971, 1019, -1},
    {47, 135, 210, 285, 322, 339, 435, 593, 695, 759, 815, 821, 972, 1020, -1},
    {0, 136, 211, 286, 323, 340, 436, 594, 696, 760, 768, 822, 973, 1021, -1},
    {1, 137, 212, 287, 324, 341, 437, 595, 697, 761, 769, 823, 974, 1022, -1},
    {2, 138, 213, 240, 325, 342, 438, 596, 698, 762, 770, 824, 975, 1023, -1},
    {3, 139, 214, 241, 326, 343, 439, 597, 699, 763, 771, 825, 976, 1024, -1},
    {4, 140, 215, 242, 327, 344, 440, 598, 700, 764, 772, 826, 977, 1025, -1},
    {5, 141, 216, 243, 328, 345, 441, 599, 701, 765, 773, 827, 978, 1026, -1},
    {6, 142, 217, 244, 329, 346, 442, 600, 702, 766, 774, 828, 979, 1027, -1},
    {7, 143, 218, 245, 330, 347, 443, 601, 703, 767, 775, 829, 980, 1028, -1},
    {8, 96, 219, 246, 331, 348, 444, 602, 704, 720, 776, 830, 981, 1029, -1},
    {9, 97, 220, 247, 332, 349, 445, 603, 705, 721, 777, 831, 982, 1030, -1},
    {10, 98, 221, 248, 333, 350, 446, 604, 706, 722, 778, 832, 983, 1031, -1},
    {11, 99, 222, 249, 334, 351, 447, 605, 707, 723, 779, 833, 984, 1032, -1},
    {12, 100, 223, 250, 335, 352, 448, 606, 708, 724, 780, 834, 985, 1033, -1},
    {13, 101, 224, 251, 288, 353, 449, 607, 709, 725, 781, 835, 986, 1034, -1},
    {14, 102, 225, 252, 289, 354, 450, 608, 710, 726, 782, 836, 987, 1035, -1},
    {15, 103, 226, 253, 290, 355, 451, 609, 711, 727, 783, 837, 988, 1036, -1},
    {16, 104, 227, 254, 291, 356, 452, 610, 712, 728, 784, 838, 989, 1037, -1},
    {17, 105, 228, 255, 292, 357, 453, 611, 713, 729, 785, 839, 990, 1038, -1},
    {18, 106, 229, 256, 293, 358, 454, 612, 714, 730, 786, 840, 991, 1039, -1},
    {19, 107, 230, 257, 294, 359, 455, 613, 715, 731, 787, 841, 992, 1040, -1},
    {20, 108, 231, 258, 295, 360, 456, 614, 716, 732, 788, 842, 993, 1041, -1},
    {21, 109, 232, 259, 296, 361, 457, 615, 717, 733, 789, 843, 994, 1042, -1},
    {22, 110, 233, 260, 297, 362, 458, 616, 718, 734, 790, 844, 995, 1043, -1},
    {23, 111, 234, 261, 298, 363, 459, 617, 719, 735, 791, 845, 996, 1044, -1},
    {24, 112, 235, 262, 299, 364, 460, 618, 672, 736, 792, 846, 997, 1045, -1},
    {25, 113, 236, 263, 300, 365, 461, 619, 673, 737, 793, 847, 998, 1046, -1},
    {26, 114, 237, 264, 301, 366, 462, 620, 674, 738, 794, 848, 999, 1047, -1},
    {27, 115, 238, 265, 302, 367, 463, 621, 675, 739, 795, 849, 1000, 1048, -1},
    {28, 116, 239, 266, 303, 368, 464, 622, 676, 740, 796, 850, 1001, 1049, -1},
    {29, 117, 192, 267, 304, 369, 465, 623, 677, 741, 797, 851, 1002, 1050, -1},
    {30, 118, 193, 268, 305, 370, 466, 576, 678, 742, 798, 852, 1003, 1051, -1},
    {31, 119, 194, 269, 306, 371, 467, 577, 679, 743, 799, 853, 1004, 1052, -1},
    {32, 120, 195, 270, 307, 372, 468, 578, 680, 744, 800, 854, 1005, 1053, -1},
    {33, 121, 196, 271, 308, 373, 469, 579, 681, 745, 801, 855, 1006, 1054, -1},
    {34, 122, 197, 272, 309, 374, 470, 580, 682, 746, 802, 856, 1007, 1055, -1},
    {19, 78, 177, 196, 276, 311, 368, 451, 510, 549, 815, 832, 864, 1008, 1056},
    {20, 79, 178, 197, 277, 312, 369, 452, 511, 550, 768, 833, 865, 1009, 1057},
    {21, 80, 179, 198, 278, 313, 370, 453, 512, 551, 769, 834, 866, 1010, 1058},
    {22, 81, 180, 199, 279, 314, 371, 454, 513, 552, 770, 835, 867, 1011, 1059},
    {23, 82, 181, 200, 280, 315, 372, 455, 514, 553, 771, 836, 868, 1012, 1060},
    {24, 83, 182, 201, 281, 316, 373, 456, 515, 554, 772, 837, 869, 1013, 1061},
    {25, 84, 183, 202, 282, 317, 374, 457, 516, 555, 773, 838, 870, 1014, 1062},
    {26, 85, 184, 203, 283, 318, 375, 458, 517, 556, 774, 839, 871, 1015, 1063},
    {27, 86, 185, 204, 284, 319, 376, 459, 518, 557, 775, 840, 872, 1016, 1064},
    {28, 87, 186, 205, 285, 320, 377, 460, 519, 558, 776, 841, 873, 1017, 1065},
    {29, 88, 187, 206, 286, 321, 378, 461, 520, 559, 777, 842, 874, 1018, 1066},
    {30, 89, 188, 207, 287, 322, 379, 462, 521, 560, 778, 843, 875, 1019, 1067},
    {31, 90, 189, 208, 240, 323, 380, 463, 522, 561, 779, 844, 876, 1020, 1068},
    {32, 91, 190, 209, 241, 324, 381, 464, 523, 562, 780, 845, 877, 1021, 1069},
    {33, 92, 191, 210, 242, 325, 382, 465, 524, 563, 781, 846, 878, 1022, 1070},
    {34, 93, 144, 211, 243, 326, 383, 466, 525, 564, 782, 847, 879, 1023, 1071},
    {35, 94, 145, 212, 244, 327, 336, 467, 526, 565, 783, 848, 880, 1024, 1072},
    {36, 95, 146, 213, 245, 328, 337, 468, 527, 566, 784, 849, 881, 1025, 1073},
    {37, 48, 147, 214, 246, 329, 338, 469, 480, 567, 785, 850, 882, 1026, 1074},
    {38, 49, 148, 215, 247, 330, 339, 470, 481, 568, 786, 851, 883, 1027, 1075},
    {39, 50, 149, 216, 248, 331, 340, 471, 482, 569, 787, 852, 884, 1028, 1076},
    {40, 51, 150, 217, 249, 332, 341, 472, 483, 570, 788, 853, 885, 1029, 1077},
    {41, 52, 151, 218, 250, 333, 342, 473, 484, 571, 789, 854, 886, 1030, 1078},
    {42, 53, 152, 219, 251, 334, 343, 474, 485, 572, 790, 855, 887, 1031, 1079},
    {43, 54, 153, 220, 252, 335, 344, 475, 486, 573, 791, 856, 888, 1032, 1080},
    {44, 55, 154, 221, 253, 288, 345, 476, 487, 574, 792, 857, 889, 1033, 1081},
    {45, 56, 155, 222, 254, 289, 346, 477, 488, 575, 793, 858, 890, 1034, 1082},
    {46, 57, 156, 223, 255, 290, 347, 478, 489, 528, 794, 859, 891, 1035, 1083},
    {47, 58, 157, 224, 256, 291, 348, 479, 490, 529, 795, 860, 892, 1036, 1084},
    {0, 59, 158, 225, 257, 292, 349, 432, 491, 530, 796, 861, 893, 1037, 1085},
    {1, 60, 159, 226, 258, 293, 350, 433, 492, 531, 797, 862, 894, 1038, 1086},
    {2, 61, 160, 227, 259, 294, 351, 434, 493, 532, 798, 863, 895, 1039, 1087},
    {3, 62, 161, 228, 260, 295, 352, 435, 494, 533, 799, 816, 896, 1040, 1088},
    {4, 63, 162, 229, 261, 296, 353, 436, 495, 534, 800, 817, 897, 1041, 1089},
    {5, 64, 163, 230, 262, 297, 354, 437, 496, 535, 801, 818, 898, 1042, 1090},
    {6, 65, 164, 231, 263, 298, 355, 438, 497, 536, 802, 819, 899, 1043, 1091},
    {7, 66, 165, 232, 264, 299, 356, 439, 498, 537, 803, 820, 900, 1044, 1092},
    {8, 67, 166, 233, 265, 300, 357, 440, 499, 538, 804, 821, 901, 1045, 1093},
    {9, 68, 167, 234, 266, 301, 358, 441, 500, 539, 805, 822, 902, 1046, 1094},
    {10, 69, 168, 235, 267, 302, 359, 442, 501, 540, 806, 823, 903, 1047, 1095},
    {11, 70, 169, 236, 268, 303, 360, 443, 502, 541, 807, 824, 904, 1048, 1096},
    {12, 71, 170, 237, 269, 304, 361, 444, 503, 542, 808, 825, 905, 1049, 1097},
    {13, 72, 171, 238, 270, 305, 362, 445, 504, 543, 809, 826, 906, 1050, 1098},
    {14, 73, 172, 239, 271, 306, 363, 446, 505, 544, 810, 827, 907, 1051, 1099},
    {15, 74, 173, 192, 272, 307, 364, 447, 506, 545, 811, 828, 908, 1052, 1100},
    {16, 75, 174, 193, 273, 308, 365, 448, 507, 546, 812, 829, 909, 1053, 1101},
    {17, 76, 175, 194, 274, 309, 366, 449, 508, 547, 813, 830, 910, 1054, 1102},
    {18, 77, 176, 195, 275, 310, 367, 450, 509, 548, 814, 831, 911, 1055, 1103},
    {208, 266, 315, 376, 431, 443, 483, 553, 588, 669, 694, 730, 1056, 1104, -1},
    {209, 267, 316, 377, 384, 444, 484, 554, 589, 670, 695, 731, 1057, 1105, -1},
    {210, 268, 317, 378, 385, 445, 485, 555, 590, 671, 696, 732, 1058, 1106, -1},
    {211, 269, 318, 379, 386, 446, 486, 556, 591, 624, 697, 733, 1059, 1107, -1},
    {212, 270, 319, 380, 387, 447, 487, 557, 592, 625, 698, 734, 1060, 1108, -1},
    {213, 271, 320, 381, 388, 448, 488, 558, 593, 626, 699, 735, 1061, 1109, -1},
    {214, 272, 321, 382, 389, 449, 489, 559, 594, 627, 700, 736, 1062, 1110, -1},
    {215, 273, 322, 383, 390, 450, 490, 560, 595, 628, 701, 737, 1063, 1111, -1},
    {216, 274, 323, 336, 391, 451, 491, 561, 596, 629, 702, 738, 1064, 1112, -1},
    {217, 275, 324, 337, 392, 452, 492, 562, 597, 630, 703, 739, 1065, 1113, -1},
    {218, 276, 325, 338, 393, 453, 493, 563, 598, 631, 704, 740, 1066, 1114, -1},
    {219, 277, 326, 339, 394, 454, 494, 564, 599, 632, 705, 741, 1067, 1115, -1},
    {220, 278, 327, 340, 395, 455, 495, 565, 600, 633, 706, 742, 1068, 1116, -1},
    {221, 279, 328, 341, 396, 456, 496, 566, 601, 634, 707, 743, 1069, 1117, -1},
    {222, 280, 329, 342, 397, 457, 497, 567, 602, 635, 708, 744, 1070, 1118, -1},
    {223, 281, 330, 343, 398, 458, 498, 568, 603, 636, 709, 745, 1071, 1119, -1},
    {224, 282, 331, 344, 399, 459, 499, 569, 604, 637, 710, 746, 1072, 1120, -1},
    {225, 283, 332, 345, 400, 460, 500, 570, 605, 638, 711, 747, 1073, 1121, -1},
    {226, 284, 333, 346, 401, 461, 501, 571, 606, 639, 712, 748, 1074, 1122, -1},
    {227, 285, 334, 347, 402, 462, 502, 572, 607, 640, 713, 749, 1075, 1123, -1},
    {228, 286, 335, 348, 403, 463, 503, 573, 608, 641, 714, 750, 1076, 1124, -1},
    {229, 287, 288, 349, 404, 464, 504, 574, 609, 642, 715, 751, 1077, 1125, -1},
    {230, 240, 289, 350, 405, 465, 505, 575, 610, 643, 716, 752, 1078, 1126, -1},
    {231, 241, 290, 351, 406, 466, 506, 528, 611, 644, 717, 753, 1079, 1127, -1},
    {232, 242, 291, 352, 407, 467, 507, 529, 612, 645, 718, 754, 1080, 1128, -1},
    {233, 243, 292, 353, 408, 468, 508, 530, 613, 646, 719, 755, 1081, 1129, -1},
    {234, 244, 293, 354, 409, 469, 509, 531, 614, 647, 672, 756, 1082, 1130, -1},
    {235, 245, 294, 355, 410, 470, 510, 532, 615, 648, 673, 757, 1083, 1131, -1},
    {236, 246, 295, 356, 411, 471, 511, 533, 616, 649, 674, 758, 1084, 1132, -1},
    {237, 247, 296, 357, 412, 472, 512, 534, 617, 650, 675, 759, 1085, 1133, -1},
    {238, 248, 297, 358, 413, 473, 513, 535, 618, 651, 676, 760, 1086, 1134, -1},
    {239, 249, 298, 359, 414, 474, 514, 536, 619, 652, 677, 761, 1087, 1135, -1},
    {192, 250, 299, 360, 415, 475, 515, 537, 620, 653, 678, 762, 1088, 1136, -1},
    {193, 251, 300, 361, 416, 476, 516, 538, 621, 654, 679, 763, 1089, 1137, -1},
    {194, 252, 301, 362, 417, 477, 517, 539, 622, 655, 680, 764, 1090, 1138, -1},
    {195, 253, 302, 363, 418, 478, 518, 540, 623, 656, 681, 765, 1091, 1139, -1},
    {196, 254, 303, 364, 419, 479, 519, 541, 576, 657, 682, 766, 1092, 1140, -1},
    {197, 255, 304, 365, 420, 432, 520, 542, 577, 658, 683, 767, 1093, 1141, -1},
    {198, 256, 305, 366, 421, 433, 521, 543, 578, 659, 684, 720, 1094, 1142, -1},
    {199, 257, 306, 367, 422, 434, 522, 544, 579, 660, 685, 721, 1095, 1143, -1},
    {200, 258, 307, 368, 423, 435, 523, 545, 580, 661, 686, 722, 1096, 1144, -1},
    {201, 259, 308, 369, 424, 436, 524, 546, 581, 662, 687, 723, 1097, 1145, -1},
    {202, 260, 309, 370, 425, 437, 525, 547, 582, 663, 688, 724, 1098, 1146, -1},
    {203, 261, 310, 371, 426, 438, 526, 548, 583, 664, 689, 725, 1099, 1147, -1},
    {204, 262, 311, 372, 427, 439, 527, 549, 584, 665, 690, 726, 1100, 1148, -1},
    {205, 263, 312, 373, 428, 440, 480, 550, 585, 666, 691, 727, 1101, 1149, -1},
    {206, 264, 313, 374, 429, 441, 481, 551, 586, 667, 692, 728, 1102, 1150, -1},
    {207, 265, 314, 375, 430, 442, 482, 552, 587, 668, 693, 729, 1103, 1151, -1},
    {79, 111, 188, 202, 387, 452, 508, 536, 611, 650, 781, 829, 888, 1104, -1},
    {80, 112, 189, 203, 388, 453, 509, 537, 612, 651, 782, 830, 889, 1105, -1},
    {81, 113, 190, 204, 389, 454, 510, 538, 613, 652, 783, 831, 890, 1106, -1},
    {82, 114, 191, 205, 390, 455, 511, 539, 614, 653, 784, 832, 891, 1107, -1},
    {83, 115, 144, 206, 391, 456, 512, 540, 615, 654, 785, 833, 892, 1108, -1},
    {84, 116, 145, 207, 392, 457, 513, 541, 616, 655, 786, 834, 893, 1109, -1},
    {85, 117, 146, 208, 393, 458, 514, 542, 617, 656, 787, 835, 894, 1110, -1},
    {86, 118, 147, 209, 394, 459, 515, 543, 618, 657, 788, 836, 895, 1111, -1},
    {87, 119, 148, 210, 395, 460, 516, 544, 619, 658, 789, 837, 896, 1112, -1},
    {88, 120, 149, 211, 396, 461, 517, 545, 620, 659, 790, 838, 897, 1113, -1},
    {89, 121, 150, 212, 397, 462, 518, 546, 621, 660, 791, 839, 898, 1114, -1},
    {90, 122, 151, 213, 398, 463, 519, 547, 622, 661, 792, 840, 899, 1115, -1},
    {91, 123, 152, 214, 399, 464, 520, 548, 623, 662, 793, 841, 900, 1116, -1},
    {92, 124, 153, 215, 400, 465, 521, 549, 576, 663, 794, 842, 901, 1117, -1},
    {93, 125, 154, 216, 401, 466, 522, 550, 577, 664, 795, 843, 902, 1118, -1},
    {94, 126, 155, 217, 402, 467, 523, 551, 578, 665, 796, 844, 903, 1119, -1},
    {95, 127, 156, 218, 403, 468, 524, 552, 579, 666, 797, 845, 904, 1120, -1},
    {48, 128, 157, 219, 404, 469, 525, 553, 580, 667, 798, 846, 905, 1121, -1},
    {49, 129, 158, 220, 405, 470, 526, 554, 581, 668, 799, 847, 906, 1122, -1},
    {50, 130, 159, 221, 406, 471, 527, 555, 582, 669, 800, 848, 907, 1123, -1},
    {51, 131, 160, 222, 407, 472, 480, 556, 583, 670, 801, 849, 908, 1124, -1},
    {52, 132, 161, 223, 408, 473, 481, 557, 584, 671, 802, 850, 909, 1125, -1},
    {53, 133, 162, 224, 409, 474, 482, 558, 585, 624, 803, 851, 910, 1126, -1},
    {54, 134, 163, 225, 410, 475, 483, 559, 586, 625, 804, 852, 911, 1127, -1},
    {55, 135, 164, 226, 411, 476, 484, 560, 587, 626, 805, 853, 864, 1128, -1},
    {56, 136, 165, 227, 412, 477, 485, 561, 588, 627, 806, 854, 865, 1129, -1},
    {57, 137, 166, 228, 413, 478, 486, 562, 589, 628, 807, 855, 866, 1130, -1},
    {58, 138, 167, 229, 414, 479, 487, 563, 590, 629, 808, 856, 867, 1131, -1},
    {59, 139, 168, 230, 415, 432, 488, 564, 591, 630, 809, 857, 868, 1132, -1},
    {60, 140, 169, 231, 416, 433, 489, 565, 592, 631, 810, 858, 869, 1133, -1},
    {61, 141, 170, 232, 417, 434, 490, 566, 593, 632, 811, 859, 870, 1134, -1},
    {62, 142, 171, 233, 418, 435, 491, 567, 594, 633, 812, 860, 871, 1135, -1},
    {63, 143, 172, 234, 419, 436, 492, 568, 595, 634, 813, 861, 872, 1136, -1},
    {64, 96, 173, 235, 420, 437, 493, 569, 596, 635, 814, 862, 873, 1137, -1},
    {65, 97, 174, 236, 421, 438, 494, 570, 597, 636, 815, 863, 874, 1138, -1},
    {66, 98, 175, 237, 422, 439, 495, 571, 598, 637, 768, 816, 875, 1139, -1},
    {67, 99, 176, 238, 423, 440, 496, 572, 599, 638, 769, 817, 876, 1140, -1},
    {68, 100, 177, 239, 424, 441, 497, 573, 600, 639, 770, 818, 877, 1141, -1},
    {69, 101, 178, 192, 425, 442, 498, 574, 601, 640, 771, 819, 878, 1142, -1},
    {70, 102, 179, 193, 426, 443, 499, 575, 602, 641, 772, 820, 879, 1143, -1},
    {71, 103, 180, 194, 427, 444, 500, 528, 603, 642, 773, 821, 880, 1144, -1},
    {72, 104, 181, 195, 428, 445, 501, 529, 604, 643, 774, 822, 881, 1145, -1},
    {73, 105, 182, 196, 429, 446, 502, 530, 605, 644, 775, 823, 882, 1146, -1},
    {74, 106, 183, 197, 430, 447, 503, 531, 606, 645, 776, 824, 883, 1147, -1},
    {75, 107, 184, 198, 431, 448, 504, 532, 607, 646, 777, 825, 884, 1148, -1},
    {76, 108, 185, 199, 384, 449, 505, 533, 608, 647, 778, 826, 885, 1149, -1},
    {77, 109, 186, 200, 385, 450, 506, 534, 609, 648, 779, 827, 886, 1150, -1},
    {78, 110, 187, 201, 386, 451, 507, 535, 610, 649, 780, 828, 887, 1151, -1}
};
#endif