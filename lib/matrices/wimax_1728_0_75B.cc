#include "matrices.h"


#ifdef Z_72
int16_t wimax_1728_0_75B[432][15] = {
    {132, 237, 442, 522, 588, 855, 885, 975, 1066, 1151, 1168, 1293, 1296, 1368, -1},
    {133, 238, 443, 523, 589, 856, 886, 976, 1067, 1080, 1169, 1294, 1297, 1369, -1},
    {134, 239, 444, 524, 590, 857, 887, 977, 1068, 1081, 1170, 1295, 1298, 1370, -1},
    {135, 240, 445, 525, 591, 858, 888, 978, 1069, 1082, 1171, 1224, 1299, 1371, -1},
    {136, 241, 446, 526, 592, 859, 889, 979, 1070, 1083, 1172, 1225, 1300, 1372, -1},
    {137, 242, 447, 527, 593, 860, 890, 980, 1071, 1084, 1173, 1226, 1301, 1373, -1},
    {138, 243, 448, 528, 594, 861, 891, 981, 1072, 1085, 1174, 1227, 1302, 1374, -1},
    {139, 244, 449, 529, 595, 862, 892, 982, 1073, 1086, 1175, 1228, 1303, 1375, -1},
    {140, 245, 450, 530, 596, 863, 893, 983, 1074, 1087, 1176, 1229, 1304, 1376, -1},
    {141, 246, 451, 531, 597, 792, 894, 984, 1075, 1088, 1177, 1230, 1305, 1377, -1},
    {142, 247, 452, 532, 598, 793, 895, 985, 1076, 1089, 1178, 1231, 1306, 1378, -1},
    {143, 248, 453, 533, 599, 794, 896, 986, 1077, 1090, 1179, 1232, 1307, 1379, -1},
    {72, 249, 454, 534, 600, 795, 897, 987, 1078, 1091, 1180, 1233, 1308, 1380, -1},
    {73, 250, 455, 535, 601, 796, 898, 988, 1079, 1092, 1181, 1234, 1309, 1381, -1},
    {74, 251, 456, 536, 602, 797, 899, 989, 1008, 1093, 1182, 1235, 1310, 1382, -1},
    {75, 252, 457, 537, 603, 798, 900, 990, 1009, 1094, 1183, 1236, 1311, 1383, -1},
    {76, 253, 458, 538, 604, 799, 901, 991, 1010, 1095, 1184, 1237, 1312, 1384, -1},
    {77, 254, 459, 539, 605, 800, 902, 992, 1011, 1096, 1185, 1238, 1313, 1385, -1},
    {78, 255, 460, 540, 606, 801, 903, 993, 1012, 1097, 1186, 1239, 1314, 1386, -1},
    {79, 256, 461, 541, 607, 802, 904, 994, 1013, 1098, 1187, 1240, 1315, 1387, -1},
    {80, 257, 462, 542, 608, 803, 905, 995, 1014, 1099, 1188, 1241, 1316, 1388, -1},
    {81, 258, 463, 543, 609, 804, 906, 996, 1015, 1100, 1189, 1242, 1317, 1389, -1},
    {82, 259, 464, 544, 610, 805, 907, 997, 1016, 1101, 1190, 1243, 1318, 1390, -1},
    {83, 260, 465, 545, 611, 806, 908, 998, 1017, 1102, 1191, 1244, 1319, 1391, -1},
    {84, 261, 466, 546, 612, 807, 909, 999, 1018, 1103, 1192, 1245, 1320, 1392, -1},
    {85, 262, 467, 547, 613, 808, 910, 1000, 1019, 1104, 1193, 1246, 1321, 1393, -1},
    {86, 263, 468, 548, 614, 809, 911, 1001, 1020, 1105, 1194, 1247, 1322, 1394, -1},
    {87, 264, 469, 549, 615, 810, 912, 1002, 1021, 1106, 1195, 1248, 1323, 1395, -1},
    {88, 265, 470, 550, 616, 811, 913, 1003, 1022, 1107, 1196, 1249, 1324, 1396, -1},
    {89, 266, 471, 551, 617, 812, 914, 1004, 1023, 1108, 1197, 1250, 1325, 1397, -1},
    {90, 267, 472, 552, 618, 813, 915, 1005, 1024, 1109, 1198, 1251, 1326, 1398, -1},
    {91, 268, 473, 553, 619, 814, 916, 1006, 1025, 1110, 1199, 1252, 1327, 1399, -1},
    {92, 269, 474, 554, 620, 815, 917, 1007, 1026, 1111, 1200, 1253, 1328, 1400, -1},
    {93, 270, 475, 555, 621, 816, 918, 936, 1027, 1112, 1201, 1254, 1329, 1401, -1},
    {94, 271, 476, 556, 622, 817, 919, 937, 1028, 1113, 1202, 1255, 1330, 1402, -1},
    {95, 272, 477, 557, 623, 818, 920, 938, 1029, 1114, 1203, 1256, 1331, 1403, -1},
    {96, 273, 478, 558, 624, 819, 921, 939, 1030, 1115, 1204, 1257, 1332, 1404, -1},
    {97, 274, 479, 559, 625, 820, 922, 940, 1031, 1116, 1205, 1258, 1333, 1405, -1},
    {98, 275, 480, 560, 626, 821, 923, 941, 1032, 1117, 1206, 1259, 1334, 1406, -1},
    {99, 276, 481, 561, 627, 822, 924, 942, 1033, 1118, 1207, 1260, 1335, 1407, -1},
    {100, 277, 482, 562, 628, 823, 925, 943, 1034, 1119, 1208, 1261, 1336, 1408, -1},
    {101, 278, 483, 563, 629, 824, 926, 944, 1035, 1120, 1209, 1262, 1337, 1409, -1},
    {102, 279, 484, 564, 630, 825, 927, 945, 1036, 1121, 1210, 1263, 1338, 1410, -1},
    {103, 280, 485, 565, 631, 826, 928, 946, 1037, 1122, 1211, 1264, 1339, 1411, -1},
    {104, 281, 486, 566, 632, 827, 929, 947, 1038, 1123, 1212, 1265, 1340, 1412, -1},
    {105, 282, 487, 567, 633, 828, 930, 948, 1039, 1124, 1213, 1266, 1341, 1413, -1},
    {106, 283, 488, 568, 634, 829, 931, 949, 1040, 1125, 1214, 1267, 1342, 1414, -1},
    {107, 284, 489, 569, 635, 830, 932, 950, 1041, 1126, 1215, 1268, 1343, 1415, -1},
    {108, 285, 490, 570, 636, 831, 933, 951, 1042, 1127, 1216, 1269, 1344, 1416, -1},
    {109, 286, 491, 571, 637, 832, 934, 952, 1043, 1128, 1217, 1270, 1345, 1417, -1},
    {110, 287, 492, 572, 638, 833, 935, 953, 1044, 1129, 1218, 1271, 1346, 1418, -1},
    {111, 216, 493, 573, 639, 834, 864, 954, 1045, 1130, 1219, 1272, 1347, 1419, -1},
    {112, 217, 494, 574, 640, 835, 865, 955, 1046, 1131, 1220, 1273, 1348, 1420, -1},
    {113, 218, 495, 575, 641, 836, 866, 956, 1047, 1132, 1221, 1274, 1349, 1421, -1},
    {114, 219, 496, 504, 642, 837, 867, 957, 1048, 1133, 1222, 1275, 1350, 1422, -1},
    {115, 220, 497, 505, 643, 838, 868, 958, 1049, 1134, 1223, 1276, 1351, 1423, -1},
    {116, 221, 498, 506, 644, 839, 869, 959, 1050, 1135, 1152, 1277, 1352, 1424, -1},
    {117, 222, 499, 507, 645, 840, 870, 960, 1051, 1136, 1153, 1278, 1353, 1425, -1},
    {118, 223, 500, 508, 646, 841, 871, 961, 1052, 1137, 1154, 1279, 1354, 1426, -1},
    {119, 224, 501, 509, 647, 842, 872, 962, 1053, 1138, 1155, 1280, 1355, 1427, -1},
    {120, 225, 502, 510, 576, 843, 873, 963, 1054, 1139, 1156, 1281, 1356, 1428, -1},
    {121, 226, 503, 511, 577, 844, 874, 964, 1055, 1140, 1157, 1282, 1357, 1429, -1},
    {122, 227, 432, 512, 578, 845, 875, 965, 1056, 1141, 1158, 1283, 1358, 1430, -1},
    {123, 228, 433, 513, 579, 846, 876, 966, 1057, 1142, 1159, 1284, 1359, 1431, -1},
    {124, 229, 434, 514, 580, 847, 877, 967, 1058, 1143, 1160, 1285, 1360, 1432, -1},
    {125, 230, 435, 515, 581, 848, 878, 968, 1059, 1144, 1161, 1286, 1361, 1433, -1},
    {126, 231, 436, 516, 582, 849, 879, 969, 1060, 1145, 1162, 1287, 1362, 1434, -1},
    {127, 232, 437, 517, 583, 850, 880, 970, 1061, 1146, 1163, 1288, 1363, 1435, -1},
    {128, 233, 438, 518, 584, 851, 881, 971, 1062, 1147, 1164, 1289, 1364, 1436, -1},
    {129, 234, 439, 519, 585, 852, 882, 972, 1063, 1148, 1165, 1290, 1365, 1437, -1},
    {130, 235, 440, 520, 586, 853, 883, 973, 1064, 1149, 1166, 1291, 1366, 1438, -1},
    {131, 236, 441, 521, 587, 854, 884, 974, 1065, 1150, 1167, 1292, 1367, 1439, -1},
    {31, 154, 267, 312, 700, 752, 800, 891, 966, 1032, 1122, 1180, 1242, 1368, 1440},
    {32, 155, 268, 313, 701, 753, 801, 892, 967, 1033, 1123, 1181, 1243, 1369, 1441},
    {33, 156, 269, 314, 702, 754, 802, 893, 968, 1034, 1124, 1182, 1244, 1370, 1442},
    {34, 157, 270, 315, 703, 755, 803, 894, 969, 1035, 1125, 1183, 1245, 1371, 1443},
    {35, 158, 271, 316, 704, 756, 804, 895, 970, 1036, 1126, 1184, 1246, 1372, 1444},
    {36, 159, 272, 317, 705, 757, 805, 896, 971, 1037, 1127, 1185, 1247, 1373, 1445},
    {37, 160, 273, 318, 706, 758, 806, 897, 972, 1038, 1128, 1186, 1248, 1374, 1446},
    {38, 161, 274, 319, 707, 759, 807, 898, 973, 1039, 1129, 1187, 1249, 1375, 1447},
    {39, 162, 275, 320, 708, 760, 808, 899, 974, 1040, 1130, 1188, 1250, 1376, 1448},
    {40, 163, 276, 321, 709, 761, 809, 900, 975, 1041, 1131, 1189, 1251, 1377, 1449},
    {41, 164, 277, 322, 710, 762, 810, 901, 976, 1042, 1132, 1190, 1252, 1378, 1450},
    {42, 165, 278, 323, 711, 763, 811, 902, 977, 1043, 1133, 1191, 1253, 1379, 1451},
    {43, 166, 279, 324, 712, 764, 812, 903, 978, 1044, 1134, 1192, 1254, 1380, 1452},
    {44, 167, 280, 325, 713, 765, 813, 904, 979, 1045, 1135, 1193, 1255, 1381, 1453},
    {45, 168, 281, 326, 714, 766, 814, 905, 980, 1046, 1136, 1194, 1256, 1382, 1454},
    {46, 169, 282, 327, 715, 767, 815, 906, 981, 1047, 1137, 1195, 1257, 1383, 1455},
    {47, 170, 283, 328, 716, 768, 816, 907, 982, 1048, 1138, 1196, 1258, 1384, 1456},
    {48, 171, 284, 329, 717, 769, 817, 908, 983, 1049, 1139, 1197, 1259, 1385, 1457},
    {49, 172, 285, 330, 718, 770, 818, 909, 984, 1050, 1140, 1198, 1260, 1386, 1458},
    {50, 173, 286, 331, 719, 771, 819, 910, 985, 1051, 1141, 1199, 1261, 1387, 1459},
    {51, 174, 287, 332, 648, 772, 820, 911, 986, 1052, 1142, 1200, 1262, 1388, 1460},
    {52, 175, 216, 333, 649, 773, 821, 912, 987, 1053, 1143, 1201, 1263, 1389, 1461},
    {53, 176, 217, 334, 650, 774, 822, 913, 988, 1054, 1144, 1202, 1264, 1390, 1462},
    {54, 177, 218, 335, 651, 775, 823, 914, 989, 1055, 1145, 1203, 1265, 1391, 1463},
    {55, 178, 219, 336, 652, 776, 824, 915, 990, 1056, 1146, 1204, 1266, 1392, 1464},
    {56, 179, 220, 337, 653, 777, 825, 916, 991, 1057, 1147, 1205, 1267, 1393, 1465},
    {57, 180, 221, 338, 654, 778, 826, 917, 992, 1058, 1148, 1206, 1268, 1394, 1466},
    {58, 181, 222, 339, 655, 779, 827, 918, 993, 1059, 1149, 1207, 1269, 1395, 1467},
    {59, 182, 223, 340, 656, 780, 828, 919, 994, 1060, 1150, 1208, 1270, 1396, 1468},
    {60, 183, 224, 341, 657, 781, 829, 920, 995, 1061, 1151, 1209, 1271, 1397, 1469},
    {61, 184, 225, 342, 658, 782, 830, 921, 996, 1062, 1080, 1210, 1272, 1398, 1470},
    {62, 185, 226, 343, 659, 783, 831, 922, 997, 1063, 1081, 1211, 1273, 1399, 1471},
    {63, 186, 227, 344, 660, 784, 832, 923, 998, 1064, 1082, 1212, 1274, 1400, 1472},
    {64, 187, 228, 345, 661, 785, 833, 924, 999, 1065, 1083, 1213, 1275, 1401, 1473},
    {65, 188, 229, 346, 662, 786, 834, 925, 1000, 1066, 1084, 1214, 1276, 1402, 1474},
    {66, 189, 230, 347, 663, 787, 835, 926, 1001, 1067, 1085, 1215, 1277, 1403, 1475},
    {67, 190, 231, 348, 664, 788, 836, 927, 1002, 1068, 1086, 1216, 1278, 1404, 1476},
    {68, 191, 232, 349, 665, 789, 837, 928, 1003, 1069, 1087, 1217, 1279, 1405, 1477},
    {69, 192, 233, 350, 666, 790, 838, 929, 1004, 1070, 1088, 1218, 1280, 1406, 1478},
    {70, 193, 234, 351, 667, 791, 839, 930, 1005, 1071, 1089, 1219, 1281, 1407, 1479},
    {71, 194, 235, 352, 668, 720, 840, 931, 1006, 1072, 1090, 1220, 1282, 1408, 1480},
    {0, 195, 236, 353, 669, 721, 841, 932, 1007, 1073, 1091, 1221, 1283, 1409, 1481},
    {1, 196, 237, 354, 670, 722, 842, 933, 936, 1074, 1092, 1222, 1284, 1410, 1482},
    {2, 197, 238, 355, 671, 723, 843, 934, 937, 1075, 1093, 1223, 1285, 1411, 1483},
    {3, 198, 239, 356, 672, 724, 844, 935, 938, 1076, 1094, 1152, 1286, 1412, 1484},
    {4, 199, 240, 357, 673, 725, 845, 864, 939, 1077, 1095, 1153, 1287, 1413, 1485},
    {5, 200, 241, 358, 674, 726, 846, 865, 940, 1078, 1096, 1154, 1288, 1414, 1486},
    {6, 201, 242, 359, 675, 727, 847, 866, 941, 1079, 1097, 1155, 1289, 1415, 1487},
    {7, 202, 243, 288, 676, 728, 848, 867, 942, 1008, 1098, 1156, 1290, 1416, 1488},
    {8, 203, 244, 289, 677, 729, 849, 868, 943, 1009, 1099, 1157, 1291, 1417, 1489},
    {9, 204, 245, 290, 678, 730, 850, 869, 944, 1010, 1100, 1158, 1292, 1418, 1490},
    {10, 205, 246, 291, 679, 731, 851, 870, 945, 1011, 1101, 1159, 1293, 1419, 1491},
    {11, 206, 247, 292, 680, 732, 852, 871, 946, 1012, 1102, 1160, 1294, 1420, 1492},
    {12, 207, 248, 293, 681, 733, 853, 872, 947, 1013, 1103, 1161, 1295, 1421, 1493},
    {13, 208, 249, 294, 682, 734, 854, 873, 948, 1014, 1104, 1162, 1224, 1422, 1494},
    {14, 209, 250, 295, 683, 735, 855, 874, 949, 1015, 1105, 1163, 1225, 1423, 1495},
    {15, 210, 251, 296, 684, 736, 856, 875, 950, 1016, 1106, 1164, 1226, 1424, 1496},
    {16, 211, 252, 297, 685, 737, 857, 876, 951, 1017, 1107, 1165, 1227, 1425, 1497},
    {17, 212, 253, 298, 686, 738, 858, 877, 952, 1018, 1108, 1166, 1228, 1426, 1498},
    {18, 213, 254, 299, 687, 739, 859, 878, 953, 1019, 1109, 1167, 1229, 1427, 1499},
    {19, 214, 255, 300, 688, 740, 860, 879, 954, 1020, 1110, 1168, 1230, 1428, 1500},
    {20, 215, 256, 301, 689, 741, 861, 880, 955, 1021, 1111, 1169, 1231, 1429, 1501},
    {21, 144, 257, 302, 690, 742, 862, 881, 956, 1022, 1112, 1170, 1232, 1430, 1502},
    {22, 145, 258, 303, 691, 743, 863, 882, 957, 1023, 1113, 1171, 1233, 1431, 1503},
    {23, 146, 259, 304, 692, 744, 792, 883, 958, 1024, 1114, 1172, 1234, 1432, 1504},
    {24, 147, 260, 305, 693, 745, 793, 884, 959, 1025, 1115, 1173, 1235, 1433, 1505},
    {25, 148, 261, 306, 694, 746, 794, 885, 960, 1026, 1116, 1174, 1236, 1434, 1506},
    {26, 149, 262, 307, 695, 747, 795, 886, 961, 1027, 1117, 1175, 1237, 1435, 1507},
    {27, 150, 263, 308, 696, 748, 796, 887, 962, 1028, 1118, 1176, 1238, 1436, 1508},
    {28, 151, 264, 309, 697, 749, 797, 888, 963, 1029, 1119, 1177, 1239, 1437, 1509},
    {29, 152, 265, 310, 698, 750, 798, 889, 964, 1030, 1120, 1178, 1240, 1438, 1510},
    {30, 153, 266, 311, 699, 751, 799, 890, 965, 1031, 1121, 1179, 1241, 1439, 1511},
    {159, 407, 461, 628, 698, 820, 867, 990, 1043, 1101, 1197, 1227, 1356, 1440, 1512},
    {160, 408, 462, 629, 699, 821, 868, 991, 1044, 1102, 1198, 1228, 1357, 1441, 1513},
    {161, 409, 463, 630, 700, 822, 869, 992, 1045, 1103, 1199, 1229, 1358, 1442, 1514},
    {162, 410, 464, 631, 701, 823, 870, 993, 1046, 1104, 1200, 1230, 1359, 1443, 1515},
    {163, 411, 465, 632, 702, 824, 871, 994, 1047, 1105, 1201, 1231, 1360, 1444, 1516},
    {164, 412, 466, 633, 703, 825, 872, 995, 1048, 1106, 1202, 1232, 1361, 1445, 1517},
    {165, 413, 467, 634, 704, 826, 873, 996, 1049, 1107, 1203, 1233, 1362, 1446, 1518},
    {166, 414, 468, 635, 705, 827, 874, 997, 1050, 1108, 1204, 1234, 1363, 1447, 1519},
    {167, 415, 469, 636, 706, 828, 875, 998, 1051, 1109, 1205, 1235, 1364, 1448, 1520},
    {168, 416, 470, 637, 707, 829, 876, 999, 1052, 1110, 1206, 1236, 1365, 1449, 1521},
    {169, 417, 471, 638, 708, 830, 877, 1000, 1053, 1111, 1207, 1237, 1366, 1450, 1522},
    {170, 418, 472, 639, 709, 831, 878, 1001, 1054, 1112, 1208, 1238, 1367, 1451, 1523},
    {171, 419, 473, 640, 710, 832, 879, 1002, 1055, 1113, 1209, 1239, 1296, 1452, 1524},
    {172, 420, 474, 641, 711, 833, 880, 1003, 1056, 1114, 1210, 1240, 1297, 1453, 1525},
    {173, 421, 475, 642, 712, 834, 881, 1004, 1057, 1115, 1211, 1241, 1298, 1454, 1526},
    {174, 422, 476, 643, 713, 835, 882, 1005, 1058, 1116, 1212, 1242, 1299, 1455, 1527},
    {175, 423, 477, 644, 714, 836, 883, 1006, 1059, 1117, 1213, 1243, 1300, 1456, 1528},
    {176, 424, 478, 645, 715, 837, 884, 1007, 1060, 1118, 1214, 1244, 1301, 1457, 1529},
    {177, 425, 479, 646, 716, 838, 885, 936, 1061, 1119, 1215, 1245, 1302, 1458, 1530},
    {178, 426, 480, 647, 717, 839, 886, 937, 1062, 1120, 1216, 1246, 1303, 1459, 1531},
    {179, 427, 481, 576, 718, 840, 887, 938, 1063, 1121, 1217, 1247, 1304, 1460, 1532},
    {180, 428, 482, 577, 719, 841, 888, 939, 1064, 1122, 1218, 1248, 1305, 1461, 1533},
    {181, 429, 483, 578, 648, 842, 889, 940, 1065, 1123, 1219, 1249, 1306, 1462, 1534},
    {182, 430, 484, 579, 649, 843, 890, 941, 1066, 1124, 1220, 1250, 1307, 1463, 1535},
    {183, 431, 485, 580, 650, 844, 891, 942, 1067, 1125, 1221, 1251, 1308, 1464, 1536},
    {184, 360, 486, 581, 651, 845, 892, 943, 1068, 1126, 1222, 1252, 1309, 1465, 1537},
    {185, 361, 487, 582, 652, 846, 893, 944, 1069, 1127, 1223, 1253, 1310, 1466, 1538},
    {186, 362, 488, 583, 653, 847, 894, 945, 1070, 1128, 1152, 1254, 1311, 1467, 1539},
    {187, 363, 489, 584, 654, 848, 895, 946, 1071, 1129, 1153, 1255, 1312, 1468, 1540},
    {188, 364, 490, 585, 655, 849, 896, 947, 1072, 1130, 1154, 1256, 1313, 1469, 1541},
    {189, 365, 491, 586, 656, 850, 897, 948, 1073, 1131, 1155, 1257, 1314, 1470, 1542},
    {190, 366, 492, 587, 657, 851, 898, 949, 1074, 1132, 1156, 1258, 1315, 1471, 1543},
    {191, 367, 493, 588, 658, 852, 899, 950, 1075, 1133, 1157, 1259, 1316, 1472, 1544},
    {192, 368, 494, 589, 659, 853, 900, 951, 1076, 1134, 1158, 1260, 1317, 1473, 1545},
    {193, 369, 495, 590, 660, 854, 901, 952, 1077, 1135, 1159, 1261, 1318, 1474, 1546},
    {194, 370, 496, 591, 661, 855, 902, 953, 1078, 1136, 1160, 1262, 1319, 1475, 1547},
    {195, 371, 497, 592, 662, 856, 903, 954, 1079, 1137, 1161, 1263, 1320, 1476, 1548},
    {196, 372, 498, 593, 663, 857, 904, 955, 1008, 1138, 1162, 1264, 1321, 1477, 1549},
    {197, 373, 499, 594, 664, 858, 905, 956, 1009, 1139, 1163, 1265, 1322, 1478, 1550},
    {198, 374, 500, 595, 665, 859, 906, 957, 1010, 1140, 1164, 1266, 1323, 1479, 1551},
    {199, 375, 501, 596, 666, 860, 907, 958, 1011, 1141, 1165, 1267, 1324, 1480, 1552},
    {200, 376, 502, 597, 667, 861, 908, 959, 1012, 1142, 1166, 1268, 1325, 1481, 1553},
    {201, 377, 503, 598, 668, 862, 909, 960, 1013, 1143, 1167, 1269, 1326, 1482, 1554},
    {202, 378, 432, 599, 669, 863, 910, 961, 1014, 1144, 1168, 1270, 1327, 1483, 1555},
    {203, 379, 433, 600, 670, 792, 911, 962, 1015, 1145, 1169, 1271, 1328, 1484, 1556},
    {204, 380, 434, 601, 671, 793, 912, 963, 1016, 1146, 1170, 1272, 1329, 1485, 1557},
    {205, 381, 435, 602, 672, 794, 913, 964, 1017, 1147, 1171, 1273, 1330, 1486, 1558},
    {206, 382, 436, 603, 673, 795, 914, 965, 1018, 1148, 1172, 1274, 1331, 1487, 1559},
    {207, 383, 437, 604, 674, 796, 915, 966, 1019, 1149, 1173, 1275, 1332, 1488, 1560},
    {208, 384, 438, 605, 675, 797, 916, 967, 1020, 1150, 1174, 1276, 1333, 1489, 1561},
    {209, 385, 439, 606, 676, 798, 917, 968, 1021, 1151, 1175, 1277, 1334, 1490, 1562},
    {210, 386, 440, 607, 677, 799, 918, 969, 1022, 1080, 1176, 1278, 1335, 1491, 1563},
    {211, 387, 441, 608, 678, 800, 919, 970, 1023, 1081, 1177, 1279, 1336, 1492, 1564},
    {212, 388, 442, 609, 679, 801, 920, 971, 1024, 1082, 1178, 1280, 1337, 1493, 1565},
    {213, 389, 443, 610, 680, 802, 921, 972, 1025, 1083, 1179, 1281, 1338, 1494, 1566},
    {214, 390, 444, 611, 681, 803, 922, 973, 1026, 1084, 1180, 1282, 1339, 1495, 1567},
    {215, 391, 445, 612, 682, 804, 923, 974, 1027, 1085, 1181, 1283, 1340, 1496, 1568},
    {144, 392, 446, 613, 683, 805, 924, 975, 1028, 1086, 1182, 1284, 1341, 1497, 1569},
    {145, 393, 447, 614, 684, 806, 925, 976, 1029, 1087, 1183, 1285, 1342, 1498, 1570},
    {146, 394, 448, 615, 685, 807, 926, 977, 1030, 1088, 1184, 1286, 1343, 1499, 1571},
    {147, 395, 449, 616, 686, 808, 927, 978, 1031, 1089, 1185, 1287, 1344, 1500, 1572},
    {148, 396, 450, 617, 687, 809, 928, 979, 1032, 1090, 1186, 1288, 1345, 1501, 1573},
    {149, 397, 451, 618, 688, 810, 929, 980, 1033, 1091, 1187, 1289, 1346, 1502, 1574},
    {150, 398, 452, 619, 689, 811, 930, 981, 1034, 1092, 1188, 1290, 1347, 1503, 1575},
    {151, 399, 453, 620, 690, 812, 931, 982, 1035, 1093, 1189, 1291, 1348, 1504, 1576},
    {152, 400, 454, 621, 691, 813, 932, 983, 1036, 1094, 1190, 1292, 1349, 1505, 1577},
    {153, 401, 455, 622, 692, 814, 933, 984, 1037, 1095, 1191, 1293, 1350, 1506, 1578},
    {154, 402, 456, 623, 693, 815, 934, 985, 1038, 1096, 1192, 1294, 1351, 1507, 1579},
    {155, 403, 457, 624, 694, 816, 935, 986, 1039, 1097, 1193, 1295, 1352, 1508, 1580},
    {156, 404, 458, 625, 695, 817, 864, 987, 1040, 1098, 1194, 1224, 1353, 1509, 1581},
    {157, 405, 459, 626, 696, 818, 865, 988, 1041, 1099, 1195, 1225, 1354, 1510, 1582},
    {158, 406, 460, 627, 697, 819, 866, 989, 1042, 1100, 1196, 1226, 1355, 1511, 1583},
    {48, 73, 335, 506, 614, 780, 803, 934, 942, 1071, 1107, 1162, 1238, 1512, 1584},
    {49, 74, 336, 507, 615, 781, 804, 935, 943, 1072, 1108, 1163, 1239, 1513, 1585},
    {50, 75, 337, 508, 616, 782, 805, 864, 944, 1073, 1109, 1164, 1240, 1514, 1586},
    {51, 76, 338, 509, 617, 783, 806, 865, 945, 1074, 1110, 1165, 1241, 1515, 1587},
    {52, 77, 339, 510, 618, 784, 807, 866, 946, 1075, 1111, 1166, 1242, 1516, 1588},
    {53, 78, 340, 511, 619, 785, 808, 867, 947, 1076, 1112, 1167, 1243, 1517, 1589},
    {54, 79, 341, 512, 620, 786, 809, 868, 948, 1077, 1113, 1168, 1244, 1518, 1590},
    {55, 80, 342, 513, 621, 787, 810, 869, 949, 1078, 1114, 1169, 1245, 1519, 1591},
    {56, 81, 343, 514, 622, 788, 811, 870, 950, 1079, 1115, 1170, 1246, 1520, 1592},
    {57, 82, 344, 515, 623, 789, 812, 871, 951, 1008, 1116, 1171, 1247, 1521, 1593},
    {58, 83, 345, 516, 624, 790, 813, 872, 952, 1009, 1117, 1172, 1248, 1522, 1594},
    {59, 84, 346, 517, 625, 791, 814, 873, 953, 1010, 1118, 1173, 1249, 1523, 1595},
    {60, 85, 347, 518, 626, 720, 815, 874, 954, 1011, 1119, 1174, 1250, 1524, 1596},
    {61, 86, 348, 519, 627, 721, 816, 875, 955, 1012, 1120, 1175, 1251, 1525, 1597},
    {62, 87, 349, 520, 628, 722, 817, 876, 956, 1013, 1121, 1176, 1252, 1526, 1598},
    {63, 88, 350, 521, 629, 723, 818, 877, 957, 1014, 1122, 1177, 1253, 1527, 1599},
    {64, 89, 351, 522, 630, 724, 819, 878, 958, 1015, 1123, 1178, 1254, 1528, 1600},
    {65, 90, 352, 523, 631, 725, 820, 879, 959, 1016, 1124, 1179, 1255, 1529, 1601},
    {66, 91, 353, 524, 632, 726, 821, 880, 960, 1017, 1125, 1180, 1256, 1530, 1602},
    {67, 92, 354, 525, 633, 727, 822, 881, 961, 1018, 1126, 1181, 1257, 1531, 1603},
    {68, 93, 355, 526, 634, 728, 823, 882, 962, 1019, 1127, 1182, 1258, 1532, 1604},
    {69, 94, 356, 527, 635, 729, 824, 883, 963, 1020, 1128, 1183, 1259, 1533, 1605},
    {70, 95, 357, 528, 636, 730, 825, 884, 964, 1021, 1129, 1184, 1260, 1534, 1606},
    {71, 96, 358, 529, 637, 731, 826, 885, 965, 1022, 1130, 1185, 1261, 1535, 1607},
    {0, 97, 359, 530, 638, 732, 827, 886, 966, 1023, 1131, 1186, 1262, 1536, 1608},
    {1, 98, 288, 531, 639, 733, 828, 887, 967, 1024, 1132, 1187, 1263, 1537, 1609},
    {2, 99, 289, 532, 640, 734, 829, 888, 968, 1025, 1133, 1188, 1264, 1538, 1610},
    {3, 100, 290, 533, 641, 735, 830, 889, 969, 1026, 1134, 1189, 1265, 1539, 1611},
    {4, 101, 291, 534, 642, 736, 831, 890, 970, 1027, 1135, 1190, 1266, 1540, 1612},
    {5, 102, 292, 535, 643, 737, 832, 891, 971, 1028, 1136, 1191, 1267, 1541, 1613},
    {6, 103, 293, 536, 644, 738, 833, 892, 972, 1029, 1137, 1192, 1268, 1542, 1614},
    {7, 104, 294, 537, 645, 739, 834, 893, 973, 1030, 1138, 1193, 1269, 1543, 1615},
    {8, 105, 295, 538, 646, 740, 835, 894, 974, 1031, 1139, 1194, 1270, 1544, 1616},
    {9, 106, 296, 539, 647, 741, 836, 895, 975, 1032, 1140, 1195, 1271, 1545, 1617},
    {10, 107, 297, 540, 576, 742, 837, 896, 976, 1033, 1141, 1196, 1272, 1546, 1618},
    {11, 108, 298, 541, 577, 743, 838, 897, 977, 1034, 1142, 1197, 1273, 1547, 1619},
    {12, 109, 299, 542, 578, 744, 839, 898, 978, 1035, 1143, 1198, 1274, 1548, 1620},
    {13, 110, 300, 543, 579, 745, 840, 899, 979, 1036, 1144, 1199, 1275, 1549, 1621},
    {14, 111, 301, 544, 580, 746, 841, 900, 980, 1037, 1145, 1200, 1276, 1550, 1622},
    {15, 112, 302, 545, 581, 747, 842, 901, 981, 1038, 1146, 1201, 1277, 1551, 1623},
    {16, 113, 303, 546, 582, 748, 843, 902, 982, 1039, 1147, 1202, 1278, 1552, 1624},
    {17, 114, 304, 547, 583, 749, 844, 903, 983, 1040, 1148, 1203, 1279, 1553, 1625},
    {18, 115, 305, 548, 584, 750, 845, 904, 984, 1041, 1149, 1204, 1280, 1554, 1626},
    {19, 116, 306, 549, 585, 751, 846, 905, 985, 1042, 1150, 1205, 1281, 1555, 1627},
    {20, 117, 307, 550, 586, 752, 847, 906, 986, 1043, 1151, 1206, 1282, 1556, 1628},
    {21, 118, 308, 551, 587, 753, 848, 907, 987, 1044, 1080, 1207, 1283, 1557, 1629},
    {22, 119, 309, 552, 588, 754, 849, 908, 988, 1045, 1081, 1208, 1284, 1558, 1630},
    {23, 120, 310, 553, 589, 755, 850, 909, 989, 1046, 1082, 1209, 1285, 1559, 1631},
    {24, 121, 311, 554, 590, 756, 851, 910, 990, 1047, 1083, 1210, 1286, 1560, 1632},
    {25, 122, 312, 555, 591, 757, 852, 911, 991, 1048, 1084, 1211, 1287, 1561, 1633},
    {26, 123, 313, 556, 592, 758, 853, 912, 992, 1049, 1085, 1212, 1288, 1562, 1634},
    {27, 124, 314, 557, 593, 759, 854, 913, 993, 1050, 1086, 1213, 1289, 1563, 1635},
    {28, 125, 315, 558, 594, 760, 855, 914, 994, 1051, 1087, 1214, 1290, 1564, 1636},
    {29, 126, 316, 559, 595, 761, 856, 915, 995, 1052, 1088, 1215, 1291, 1565, 1637},
    {30, 127, 317, 560, 596, 762, 857, 916, 996, 1053, 1089, 1216, 1292, 1566, 1638},
    {31, 128, 318, 561, 597, 763, 858, 917, 997, 1054, 1090, 1217, 1293, 1567, 1639},
    {32, 129, 319, 562, 598, 764, 859, 918, 998, 1055, 1091, 1218, 1294, 1568, 1640},
    {33, 130, 320, 563, 599, 765, 860, 919, 999, 1056, 1092, 1219, 1295, 1569, 1641},
    {34, 131, 321, 564, 600, 766, 861, 920, 1000, 1057, 1093, 1220, 1224, 1570, 1642},
    {35, 132, 322, 565, 601, 767, 862, 921, 1001, 1058, 1094, 1221, 1225, 1571, 1643},
    {36, 133, 323, 566, 602, 768, 863, 922, 1002, 1059, 1095, 1222, 1226, 1572, 1644},
    {37, 134, 324, 567, 603, 769, 792, 923, 1003, 1060, 1096, 1223, 1227, 1573, 1645},
    {38, 135, 325, 568, 604, 770, 793, 924, 1004, 1061, 1097, 1152, 1228, 1574, 1646},
    {39, 136, 326, 569, 605, 771, 794, 925, 1005, 1062, 1098, 1153, 1229, 1575, 1647},
    {40, 137, 327, 570, 606, 772, 795, 926, 1006, 1063, 1099, 1154, 1230, 1576, 1648},
    {41, 138, 328, 571, 607, 773, 796, 927, 1007, 1064, 1100, 1155, 1231, 1577, 1649},
    {42, 139, 329, 572, 608, 774, 797, 928, 936, 1065, 1101, 1156, 1232, 1578, 1650},
    {43, 140, 330, 573, 609, 775, 798, 929, 937, 1066, 1102, 1157, 1233, 1579, 1651},
    {44, 141, 331, 574, 610, 776, 799, 930, 938, 1067, 1103, 1158, 1234, 1580, 1652},
    {45, 142, 332, 575, 611, 777, 800, 931, 939, 1068, 1104, 1159, 1235, 1581, 1653},
    {46, 143, 333, 504, 612, 778, 801, 932, 940, 1069, 1105, 1160, 1236, 1582, 1654},
    {47, 72, 334, 505, 613, 779, 802, 933, 941, 1070, 1106, 1161, 1237, 1583, 1655},
    {111, 189, 276, 379, 488, 856, 921, 936, 1010, 1134, 1197, 1242, 1584, 1656, -1},
    {112, 190, 277, 380, 489, 857, 922, 937, 1011, 1135, 1198, 1243, 1585, 1657, -1},
    {113, 191, 278, 381, 490, 858, 923, 938, 1012, 1136, 1199, 1244, 1586, 1658, -1},
    {114, 192, 279, 382, 491, 859, 924, 939, 1013, 1137, 1200, 1245, 1587, 1659, -1},
    {115, 193, 280, 383, 492, 860, 925, 940, 1014, 1138, 1201, 1246, 1588, 1660, -1},
    {116, 194, 281, 384, 493, 861, 926, 941, 1015, 1139, 1202, 1247, 1589, 1661, -1},
    {117, 195, 282, 385, 494, 862, 927, 942, 1016, 1140, 1203, 1248, 1590, 1662, -1},
    {118, 196, 283, 386, 495, 863, 928, 943, 1017, 1141, 1204, 1249, 1591, 1663, -1},
    {119, 197, 284, 387, 496, 792, 929, 944, 1018, 1142, 1205, 1250, 1592, 1664, -1},
    {120, 198, 285, 388, 497, 793, 930, 945, 1019, 1143, 1206, 1251, 1593, 1665, -1},
    {121, 199, 286, 389, 498, 794, 931, 946, 1020, 1144, 1207, 1252, 1594, 1666, -1},
    {122, 200, 287, 390, 499, 795, 932, 947, 1021, 1145, 1208, 1253, 1595, 1667, -1},
    {123, 201, 216, 391, 500, 796, 933, 948, 1022, 1146, 1209, 1254, 1596, 1668, -1},
    {124, 202, 217, 392, 501, 797, 934, 949, 1023, 1147, 1210, 1255, 1597, 1669, -1},
    {125, 203, 218, 393, 502, 798, 935, 950, 1024, 1148, 1211, 1256, 1598, 1670, -1},
    {126, 204, 219, 394, 503, 799, 864, 951, 1025, 1149, 1212, 1257, 1599, 1671, -1},
    {127, 205, 220, 395, 432, 800, 865, 952, 1026, 1150, 1213, 1258, 1600, 1672, -1},
    {128, 206, 221, 396, 433, 801, 866, 953, 1027, 1151, 1214, 1259, 1601, 1673, -1},
    {129, 207, 222, 397, 434, 802, 867, 954, 1028, 1080, 1215, 1260, 1602, 1674, -1},
    {130, 208, 223, 398, 435, 803, 868, 955, 1029, 1081, 1216, 1261, 1603, 1675, -1},
    {131, 209, 224, 399, 436, 804, 869, 956, 1030, 1082, 1217, 1262, 1604, 1676, -1},
    {132, 210, 225, 400, 437, 805, 870, 957, 1031, 1083, 1218, 1263, 1605, 1677, -1},
    {133, 211, 226, 401, 438, 806, 871, 958, 1032, 1084, 1219, 1264, 1606, 1678, -1},
    {134, 212, 227, 402, 439, 807, 872, 959, 1033, 1085, 1220, 1265, 1607, 1679, -1},
    {135, 213, 228, 403, 440, 808, 873, 960, 1034, 1086, 1221, 1266, 1608, 1680, -1},
    {136, 214, 229, 404, 441, 809, 874, 961, 1035, 1087, 1222, 1267, 1609, 1681, -1},
    {137, 215, 230, 405, 442, 810, 875, 962, 1036, 1088, 1223, 1268, 1610, 1682, -1},
    {138, 144, 231, 406, 443, 811, 876, 963, 1037, 1089, 1152, 1269, 1611, 1683, -1},
    {139, 145, 232, 407, 444, 812, 877, 964, 1038, 1090, 1153, 1270, 1612, 1684, -1},
    {140, 146, 233, 408, 445, 813, 878, 965, 1039, 1091, 1154, 1271, 1613, 1685, -1},
    {141, 147, 234, 409, 446, 814, 879, 966, 1040, 1092, 1155, 1272, 1614, 1686, -1},
    {142, 148, 235, 410, 447, 815, 880, 967, 1041, 1093, 1156, 1273, 1615, 1687, -1},
    {143, 149, 236, 411, 448, 816, 881, 968, 1042, 1094, 1157, 1274, 1616, 1688, -1},
    {72, 150, 237, 412, 449, 817, 882, 969, 1043, 1095, 1158, 1275, 1617, 1689, -1},
    {73, 151, 238, 413, 450, 818, 883, 970, 1044, 1096, 1159, 1276, 1618, 1690, -1},
    {74, 152, 239, 414, 451, 819, 884, 971, 1045, 1097, 1160, 1277, 1619, 1691, -1},
    {75, 153, 240, 415, 452, 820, 885, 972, 1046, 1098, 1161, 1278, 1620, 1692, -1},
    {76, 154, 241, 416, 453, 821, 886, 973, 1047, 1099, 1162, 1279, 1621, 1693, -1},
    {77, 155, 242, 417, 454, 822, 887, 974, 1048, 1100, 1163, 1280, 1622, 1694, -1},
    {78, 156, 243, 418, 455, 823, 888, 975, 1049, 1101, 1164, 1281, 1623, 1695, -1},
    {79, 157, 244, 419, 456, 824, 889, 976, 1050, 1102, 1165, 1282, 1624, 1696, -1},
    {80, 158, 245, 420, 457, 825, 890, 977, 1051, 1103, 1166, 1283, 1625, 1697, -1},
    {81, 159, 246, 421, 458, 826, 891, 978, 1052, 1104, 1167, 1284, 1626, 1698, -1},
    {82, 160, 247, 422, 459, 827, 892, 979, 1053, 1105, 1168, 1285, 1627, 1699, -1},
    {83, 161, 248, 423, 460, 828, 893, 980, 1054, 1106, 1169, 1286, 1628, 1700, -1},
    {84, 162, 249, 424, 461, 829, 894, 981, 1055, 1107, 1170, 1287, 1629, 1701, -1},
    {85, 163, 250, 425, 462, 830, 895, 982, 1056, 1108, 1171, 1288, 1630, 1702, -1},
    {86, 164, 251, 426, 463, 831, 896, 983, 1057, 1109, 1172, 1289, 1631, 1703, -1},
    {87, 165, 252, 427, 464, 832, 897, 984, 1058, 1110, 1173, 1290, 1632, 1704, -1},
    {88, 166, 253, 428, 465, 833, 898, 985, 1059, 1111, 1174, 1291, 1633, 1705, -1},
    {89, 167, 254, 429, 466, 834, 899, 986, 1060, 1112, 1175, 1292, 1634, 1706, -1},
    {90, 168, 255, 430, 467, 835, 900, 987, 1061, 1113, 1176, 1293, 1635, 1707, -1},
    {91, 169, 256, 431, 468, 836, 901, 988, 1062, 1114, 1177, 1294, 1636, 1708, -1},
    {92, 170, 257, 360, 469, 837, 902, 989, 1063, 1115, 1178, 1295, 1637, 1709, -1},
    {93, 171, 258, 361, 470, 838, 903, 990, 1064, 1116, 1179, 1224, 1638, 1710, -1},
    {94, 172, 259, 362, 471, 839, 904, 991, 1065, 1117, 1180, 1225, 1639, 1711, -1},
    {95, 173, 260, 363, 472, 840, 905, 992, 1066, 1118, 1181, 1226, 1640, 1712, -1},
    {96, 174, 261, 364, 473, 841, 906, 993, 1067, 1119, 1182, 1227, 1641, 1713, -1},
    {97, 175, 262, 365, 474, 842, 907, 994, 1068, 1120, 1183, 1228, 1642, 1714, -1},
    {98, 176, 263, 366, 475, 843, 908, 995, 1069, 1121, 1184, 1229, 1643, 1715, -1},
    {99, 177, 264, 367, 476, 844, 909, 996, 1070, 1122, 1185, 1230, 1644, 1716, -1},
    {100, 178, 265, 368, 477, 845, 910, 997, 1071, 1123, 1186, 1231, 1645, 1717, -1},
    {101, 179, 266, 369, 478, 846, 911, 998, 1072, 1124, 1187, 1232, 1646, 1718, -1},
    {102, 180, 267, 370, 479, 847, 912, 999, 1073, 1125, 1188, 1233, 1647, 1719, -1},
    {103, 181, 268, 371, 480, 848, 913, 1000, 1074, 1126, 1189, 1234, 1648, 1720, -1},
    {104, 182, 269, 372, 481, 849, 914, 1001, 1075, 1127, 1190, 1235, 1649, 1721, -1},
    {105, 183, 270, 373, 482, 850, 915, 1002, 1076, 1128, 1191, 1236, 1650, 1722, -1},
    {106, 184, 271, 374, 483, 851, 916, 1003, 1077, 1129, 1192, 1237, 1651, 1723, -1},
    {107, 185, 272, 375, 484, 852, 917, 1004, 1078, 1130, 1193, 1238, 1652, 1724, -1},
    {108, 186, 273, 376, 485, 853, 918, 1005, 1079, 1131, 1194, 1239, 1653, 1725, -1},
    {109, 187, 274, 377, 486, 854, 919, 1006, 1008, 1132, 1195, 1240, 1654, 1726, -1},
    {110, 188, 275, 378, 487, 855, 920, 1007, 1009, 1133, 1196, 1241, 1655, 1727, -1},
    {57, 299, 381, 530, 702, 742, 843, 927, 999, 1027, 1128, 1160, 1290, 1296, 1656},
    {58, 300, 382, 531, 703, 743, 844, 928, 1000, 1028, 1129, 1161, 1291, 1297, 1657},
    {59, 301, 383, 532, 704, 744, 845, 929, 1001, 1029, 1130, 1162, 1292, 1298, 1658},
    {60, 302, 384, 533, 705, 745, 846, 930, 1002, 1030, 1131, 1163, 1293, 1299, 1659},
    {61, 303, 385, 534, 706, 746, 847, 931, 1003, 1031, 1132, 1164, 1294, 1300, 1660},
    {62, 304, 386, 535, 707, 747, 848, 932, 1004, 1032, 1133, 1165, 1295, 1301, 1661},
    {63, 305, 387, 536, 708, 748, 849, 933, 1005, 1033, 1134, 1166, 1224, 1302, 1662},
    {64, 306, 388, 537, 709, 749, 850, 934, 1006, 1034, 1135, 1167, 1225, 1303, 1663},
    {65, 307, 389, 538, 710, 750, 851, 935, 1007, 1035, 1136, 1168, 1226, 1304, 1664},
    {66, 308, 390, 539, 711, 751, 852, 864, 936, 1036, 1137, 1169, 1227, 1305, 1665},
    {67, 309, 391, 540, 712, 752, 853, 865, 937, 1037, 1138, 1170, 1228, 1306, 1666},
    {68, 310, 392, 541, 713, 753, 854, 866, 938, 1038, 1139, 1171, 1229, 1307, 1667},
    {69, 311, 393, 542, 714, 754, 855, 867, 939, 1039, 1140, 1172, 1230, 1308, 1668},
    {70, 312, 394, 543, 715, 755, 856, 868, 940, 1040, 1141, 1173, 1231, 1309, 1669},
    {71, 313, 395, 544, 716, 756, 857, 869, 941, 1041, 1142, 1174, 1232, 1310, 1670},
    {0, 314, 396, 545, 717, 757, 858, 870, 942, 1042, 1143, 1175, 1233, 1311, 1671},
    {1, 315, 397, 546, 718, 758, 859, 871, 943, 1043, 1144, 1176, 1234, 1312, 1672},
    {2, 316, 398, 547, 719, 759, 860, 872, 944, 1044, 1145, 1177, 1235, 1313, 1673},
    {3, 317, 399, 548, 648, 760, 861, 873, 945, 1045, 1146, 1178, 1236, 1314, 1674},
    {4, 318, 400, 549, 649, 761, 862, 874, 946, 1046, 1147, 1179, 1237, 1315, 1675},
    {5, 319, 401, 550, 650, 762, 863, 875, 947, 1047, 1148, 1180, 1238, 1316, 1676},
    {6, 320, 402, 551, 651, 763, 792, 876, 948, 1048, 1149, 1181, 1239, 1317, 1677},
    {7, 321, 403, 552, 652, 764, 793, 877, 949, 1049, 1150, 1182, 1240, 1318, 1678},
    {8, 322, 404, 553, 653, 765, 794, 878, 950, 1050, 1151, 1183, 1241, 1319, 1679},
    {9, 323, 405, 554, 654, 766, 795, 879, 951, 1051, 1080, 1184, 1242, 1320, 1680},
    {10, 324, 406, 555, 655, 767, 796, 880, 952, 1052, 1081, 1185, 1243, 1321, 1681},
    {11, 325, 407, 556, 656, 768, 797, 881, 953, 1053, 1082, 1186, 1244, 1322, 1682},
    {12, 326, 408, 557, 657, 769, 798, 882, 954, 1054, 1083, 1187, 1245, 1323, 1683},
    {13, 327, 409, 558, 658, 770, 799, 883, 955, 1055, 1084, 1188, 1246, 1324, 1684},
    {14, 328, 410, 559, 659, 771, 800, 884, 956, 1056, 1085, 1189, 1247, 1325, 1685},
    {15, 329, 411, 560, 660, 772, 801, 885, 957, 1057, 1086, 1190, 1248, 1326, 1686},
    {16, 330, 412, 561, 661, 773, 802, 886, 958, 1058, 1087, 1191, 1249, 1327, 1687},
    {17, 331, 413, 562, 662, 774, 803, 887, 959, 1059, 1088, 1192, 1250, 1328, 1688},
    {18, 332, 414, 563, 663, 775, 804, 888, 960, 1060, 1089, 1193, 1251, 1329, 1689},
    {19, 333, 415, 564, 664, 776, 805, 889, 961, 1061, 1090, 1194, 1252, 1330, 1690},
    {20, 334, 416, 565, 665, 777, 806, 890, 962, 1062, 1091, 1195, 1253, 1331, 1691},
    {21, 335, 417, 566, 666, 778, 807, 891, 963, 1063, 1092, 1196, 1254, 1332, 1692},
    {22, 336, 418, 567, 667, 779, 808, 892, 964, 1064, 1093, 1197, 1255, 1333, 1693},
    {23, 337, 419, 568, 668, 780, 809, 893, 965, 1065, 1094, 1198, 1256, 1334, 1694},
    {24, 338, 420, 569, 669, 781, 810, 894, 966, 1066, 1095, 1199, 1257, 1335, 1695},
    {25, 339, 421, 570, 670, 782, 811, 895, 967, 1067, 1096, 1200, 1258, 1336, 1696},
    {26, 340, 422, 571, 671, 783, 812, 896, 968, 1068, 1097, 1201, 1259, 1337, 1697},
    {27, 341, 423, 572, 672, 784, 813, 897, 969, 1069, 1098, 1202, 1260, 1338, 1698},
    {28, 342, 424, 573, 673, 785, 814, 898, 970, 1070, 1099, 1203, 1261, 1339, 1699},
    {29, 343, 425, 574, 674, 786, 815, 899, 971, 1071, 1100, 1204, 1262, 1340, 1700},
    {30, 344, 426, 575, 675, 787, 816, 900, 972, 1072, 1101, 1205, 1263, 1341, 1701},
    {31, 345, 427, 504, 676, 788, 817, 901, 973, 1073, 1102, 1206, 1264, 1342, 1702},
    {32, 346, 428, 505, 677, 789, 818, 902, 974, 1074, 1103, 1207, 1265, 1343, 1703},
    {33, 347, 429, 506, 678, 790, 819, 903, 975, 1075, 1104, 1208, 1266, 1344, 1704},
    {34, 348, 430, 507, 679, 791, 820, 904, 976, 1076, 1105, 1209, 1267, 1345, 1705},
    {35, 349, 431, 508, 680, 720, 821, 905, 977, 1077, 1106, 1210, 1268, 1346, 1706},
    {36, 350, 360, 509, 681, 721, 822, 906, 978, 1078, 1107, 1211, 1269, 1347, 1707},
    {37, 351, 361, 510, 682, 722, 823, 907, 979, 1079, 1108, 1212, 1270, 1348, 1708},
    {38, 352, 362, 511, 683, 723, 824, 908, 980, 1008, 1109, 1213, 1271, 1349, 1709},
    {39, 353, 363, 512, 684, 724, 825, 909, 981, 1009, 1110, 1214, 1272, 1350, 1710},
    {40, 354, 364, 513, 685, 725, 826, 910, 982, 1010, 1111, 1215, 1273, 1351, 1711},
    {41, 355, 365, 514, 686, 726, 827, 911, 983, 1011, 1112, 1216, 1274, 1352, 1712},
    {42, 356, 366, 515, 687, 727, 828, 912, 984, 1012, 1113, 1217, 1275, 1353, 1713},
    {43, 357, 367, 516, 688, 728, 829, 913, 985, 1013, 1114, 1218, 1276, 1354, 1714},
    {44, 358, 368, 517, 689, 729, 830, 914, 986, 1014, 1115, 1219, 1277, 1355, 1715},
    {45, 359, 369, 518, 690, 730, 831, 915, 987, 1015, 1116, 1220, 1278, 1356, 1716},
    {46, 288, 370, 519, 691, 731, 832, 916, 988, 1016, 1117, 1221, 1279, 1357, 1717},
    {47, 289, 371, 520, 692, 732, 833, 917, 989, 1017, 1118, 1222, 1280, 1358, 1718},
    {48, 290, 372, 521, 693, 733, 834, 918, 990, 1018, 1119, 1223, 1281, 1359, 1719},
    {49, 291, 373, 522, 694, 734, 835, 919, 991, 1019, 1120, 1152, 1282, 1360, 1720},
    {50, 292, 374, 523, 695, 735, 836, 920, 992, 1020, 1121, 1153, 1283, 1361, 1721},
    {51, 293, 375, 524, 696, 736, 837, 921, 993, 1021, 1122, 1154, 1284, 1362, 1722},
    {52, 294, 376, 525, 697, 737, 838, 922, 994, 1022, 1123, 1155, 1285, 1363, 1723},
    {53, 295, 377, 526, 698, 738, 839, 923, 995, 1023, 1124, 1156, 1286, 1364, 1724},
    {54, 296, 378, 527, 699, 739, 840, 924, 996, 1024, 1125, 1157, 1287, 1365, 1725},
    {55, 297, 379, 528, 700, 740, 841, 925, 997, 1025, 1126, 1158, 1288, 1366, 1726},
    {56, 298, 380, 529, 701, 741, 842, 926, 998, 1026, 1127, 1159, 1289, 1367, 1727}
};
#endif