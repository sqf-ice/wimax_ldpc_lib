#include "matrices.h"


#ifdef Z_24
int16_t wimax_576_0_83[96][20] = {
    {0, 30, 61, 107, 121, 190, 213, 218, 261, 277, 308, 320, 337, 360, 393, 413, 433, 475, 500, 504},
    {1, 31, 62, 108, 122, 191, 214, 219, 262, 278, 309, 321, 338, 361, 394, 414, 434, 476, 501, 505},
    {2, 32, 63, 109, 123, 168, 215, 220, 263, 279, 310, 322, 339, 362, 395, 415, 435, 477, 502, 506},
    {3, 33, 64, 110, 124, 169, 192, 221, 240, 280, 311, 323, 340, 363, 396, 416, 436, 478, 503, 507},
    {4, 34, 65, 111, 125, 170, 193, 222, 241, 281, 288, 324, 341, 364, 397, 417, 437, 479, 480, 508},
    {5, 35, 66, 112, 126, 171, 194, 223, 242, 282, 289, 325, 342, 365, 398, 418, 438, 456, 481, 509},
    {6, 36, 67, 113, 127, 172, 195, 224, 243, 283, 290, 326, 343, 366, 399, 419, 439, 457, 482, 510},
    {7, 37, 68, 114, 128, 173, 196, 225, 244, 284, 291, 327, 344, 367, 400, 420, 440, 458, 483, 511},
    {8, 38, 69, 115, 129, 174, 197, 226, 245, 285, 292, 328, 345, 368, 401, 421, 441, 459, 484, 512},
    {9, 39, 70, 116, 130, 175, 198, 227, 246, 286, 293, 329, 346, 369, 402, 422, 442, 460, 485, 513},
    {10, 40, 71, 117, 131, 176, 199, 228, 247, 287, 294, 330, 347, 370, 403, 423, 443, 461, 486, 514},
    {11, 41, 48, 118, 132, 177, 200, 229, 248, 264, 295, 331, 348, 371, 404, 424, 444, 462, 487, 515},
    {12, 42, 49, 119, 133, 178, 201, 230, 249, 265, 296, 332, 349, 372, 405, 425, 445, 463, 488, 516},
    {13, 43, 50, 96, 134, 179, 202, 231, 250, 266, 297, 333, 350, 373, 406, 426, 446, 464, 489, 517},
    {14, 44, 51, 97, 135, 180, 203, 232, 251, 267, 298, 334, 351, 374, 407, 427, 447, 465, 490, 518},
    {15, 45, 52, 98, 136, 181, 204, 233, 252, 268, 299, 335, 352, 375, 384, 428, 448, 466, 491, 519},
    {16, 46, 53, 99, 137, 182, 205, 234, 253, 269, 300, 312, 353, 376, 385, 429, 449, 467, 492, 520},
    {17, 47, 54, 100, 138, 183, 206, 235, 254, 270, 301, 313, 354, 377, 386, 430, 450, 468, 493, 521},
    {18, 24, 55, 101, 139, 184, 207, 236, 255, 271, 302, 314, 355, 378, 387, 431, 451, 469, 494, 522},
    {19, 25, 56, 102, 140, 185, 208, 237, 256, 272, 303, 315, 356, 379, 388, 408, 452, 470, 495, 523},
    {20, 26, 57, 103, 141, 186, 209, 238, 257, 273, 304, 316, 357, 380, 389, 409, 453, 471, 496, 524},
    {21, 27, 58, 104, 142, 187, 210, 239, 258, 274, 305, 317, 358, 381, 390, 410, 454, 472, 497, 525},
    {22, 28, 59, 105, 143, 188, 211, 216, 259, 275, 306, 318, 359, 382, 391, 411, 455, 473, 498, 526},
    {23, 29, 60, 106, 120, 189, 212, 217, 260, 276, 307, 319, 336, 383, 392, 412, 432, 474, 499, 527},
    {25, 81, 106, 131, 147, 187, 203, 250, 269, 291, 329, 339, 378, 384, 419, 444, 456, 480, 504, 528},
    {26, 82, 107, 132, 148, 188, 204, 251, 270, 292, 330, 340, 379, 385, 420, 445, 457, 481, 505, 529},
    {27, 83, 108, 133, 149, 189, 205, 252, 271, 293, 331, 341, 380, 386, 421, 446, 458, 482, 506, 530},
    {28, 84, 109, 134, 150, 190, 206, 253, 272, 294, 332, 342, 381, 387, 422, 447, 459, 483, 507, 531},
    {29, 85, 110, 135, 151, 191, 207, 254, 273, 295, 333, 343, 382, 388, 423, 448, 460, 484, 508, 532},
    {30, 86, 111, 136, 152, 168, 208, 255, 274, 296, 334, 344, 383, 389, 424, 449, 461, 485, 509, 533},
    {31, 87, 112, 137, 153, 169, 209, 256, 275, 297, 335, 345, 360, 390, 425, 450, 462, 486, 510, 534},
    {32, 88, 113, 138, 154, 170, 210, 257, 276, 298, 312, 346, 361, 391, 426, 451, 463, 487, 511, 535},
    {33, 89, 114, 139, 155, 171, 211, 258, 277, 299, 313, 347, 362, 392, 427, 452, 464, 488, 512, 536},
    {34, 90, 115, 140, 156, 172, 212, 259, 278, 300, 314, 348, 363, 393, 428, 453, 465, 489, 513, 537},
    {35, 91, 116, 141, 157, 173, 213, 260, 279, 301, 315, 349, 364, 394, 429, 454, 466, 490, 514, 538},
    {36, 92, 117, 142, 158, 174, 214, 261, 280, 302, 316, 350, 365, 395, 430, 455, 467, 491, 515, 539},
    {37, 93, 118, 143, 159, 175, 215, 262, 281, 303, 317, 351, 366, 396, 431, 432, 468, 492, 516, 540},
    {38, 94, 119, 120, 160, 176, 192, 263, 282, 304, 318, 352, 367, 397, 408, 433, 469, 493, 517, 541},
    {39, 95, 96, 121, 161, 177, 193, 240, 283, 305, 319, 353, 368, 398, 409, 434, 470, 494, 518, 542},
    {40, 72, 97, 122, 162, 178, 194, 241, 284, 306, 320, 354, 369, 399, 410, 435, 471, 495, 519, 543},
    {41, 73, 98, 123, 163, 179, 195, 242, 285, 307, 321, 355, 370, 400, 411, 436, 472, 496, 520, 544},
    {42, 74, 99, 124, 164, 180, 196, 243, 286, 308, 322, 356, 371, 401, 412, 437, 473, 497, 521, 545},
    {43, 75, 100, 125, 165, 181, 197, 244, 287, 309, 323, 357, 372, 402, 413, 438, 474, 498, 522, 546},
    {44, 76, 101, 126, 166, 182, 198, 245, 264, 310, 324, 358, 373, 403, 414, 439, 475, 499, 523, 547},
    {45, 77, 102, 127, 167, 183, 199, 246, 265, 311, 325, 359, 374, 404, 415, 440, 476, 500, 524, 548},
    {46, 78, 103, 128, 144, 184, 200, 247, 266, 288, 326, 336, 375, 405, 416, 441, 477, 501, 525, 549},
    {47, 79, 104, 129, 145, 185, 201, 248, 267, 289, 327, 337, 376, 406, 417, 442, 478, 502, 526, 550},
    {24, 80, 105, 130, 146, 186, 202, 249, 268, 290, 328, 338, 377, 407, 418, 443, 479, 503, 527, 551},
    {12, 44, 68, 73, 112, 149, 199, 222, 262, 279, 308, 314, 357, 379, 399, 430, 448, 459, 528, 552},
    {13, 45, 69, 74, 113, 150, 200, 223, 263, 280, 309, 315, 358, 380, 400, 431, 449, 460, 529, 553},
    {14, 46, 70, 75, 114, 151, 201, 224, 240, 281, 310, 316, 359, 381, 401, 408, 450, 461, 530, 554},
    {15, 47, 71, 76, 115, 152, 202, 225, 241, 282, 311, 317, 336, 382, 402, 409, 451, 462, 531, 555},
    {16, 24, 48, 77, 116, 153, 203, 226, 242, 283, 288, 318, 337, 383, 403, 410, 452, 463, 532, 556},
    {17, 25, 49, 78, 117, 154, 204, 227, 243, 284, 289, 319, 338, 360, 404, 411, 453, 464, 533, 557},
    {18, 26, 50, 79, 118, 155, 205, 228, 244, 285, 290, 320, 339, 361, 405, 412, 454, 465, 534, 558},
    {19, 27, 51, 80, 119, 156, 206, 229, 245, 286, 291, 321, 340, 362, 406, 413, 455, 466, 535, 559},
    {20, 28, 52, 81, 96, 157, 207, 230, 246, 287, 292, 322, 341, 363, 407, 414, 432, 467, 536, 560},
    {21, 29, 53, 82, 97, 158, 208, 231, 247, 264, 293, 323, 342, 364, 384, 415, 433, 468, 537, 561},
    {22, 30, 54, 83, 98, 159, 209, 232, 248, 265, 294, 324, 343, 365, 385, 416, 434, 469, 538, 562},
    {23, 31, 55, 84, 99, 160, 210, 233, 249, 266, 295, 325, 344, 366, 386, 417, 435, 470, 539, 563},
    {0, 32, 56, 85, 100, 161, 211, 234, 250, 267, 296, 326, 345, 367, 387, 418, 436, 471, 540, 564},
    {1, 33, 57, 86, 101, 162, 212, 235, 251, 268, 297, 327, 346, 368, 388, 419, 437, 472, 541, 565},
    {2, 34, 58, 87, 102, 163, 213, 236, 252, 269, 298, 328, 347, 369, 389, 420, 438, 473, 542, 566},
    {3, 35, 59, 88, 103, 164, 214, 237, 253, 270, 299, 329, 348, 370, 390, 421, 439, 474, 543, 567},
    {4, 36, 60, 89, 104, 165, 215, 238, 254, 271, 300, 330, 349, 371, 391, 422, 440, 475, 544, 568},
    {5, 37, 61, 90, 105, 166, 192, 239, 255, 272, 301, 331, 350, 372, 392, 423, 441, 476, 545, 569},
    {6, 38, 62, 91, 106, 167, 193, 216, 256, 273, 302, 332, 351, 373, 393, 424, 442, 477, 546, 570},
    {7, 39, 63, 92, 107, 144, 194, 217, 257, 274, 303, 333, 352, 374, 394, 425, 443, 478, 547, 571},
    {8, 40, 64, 93, 108, 145, 195, 218, 258, 275, 304, 334, 353, 375, 395, 426, 444, 479, 548, 572},
    {9, 41, 65, 94, 109, 146, 196, 219, 259, 276, 305, 335, 354, 376, 396, 427, 445, 456, 549, 573},
    {10, 42, 66, 95, 110, 147, 197, 220, 260, 277, 306, 312, 355, 377, 397, 428, 446, 457, 550, 574},
    {11, 43, 67, 72, 111, 148, 198, 221, 261, 278, 307, 313, 356, 378, 398, 429, 447, 458, 551, 575},
    {12, 60, 75, 129, 147, 170, 194, 221, 253, 286, 295, 335, 350, 367, 405, 431, 434, 472, 500, 552},
    {13, 61, 76, 130, 148, 171, 195, 222, 254, 287, 296, 312, 351, 368, 406, 408, 435, 473, 501, 553},
    {14, 62, 77, 131, 149, 172, 196, 223, 255, 264, 297, 313, 352, 369, 407, 409, 436, 474, 502, 554},
    {15, 63, 78, 132, 150, 173, 197, 224, 256, 265, 298, 314, 353, 370, 384, 410, 437, 475, 503, 555},
    {16, 64, 79, 133, 151, 174, 198, 225, 257, 266, 299, 315, 354, 371, 385, 411, 438, 476, 480, 556},
    {17, 65, 80, 134, 152, 175, 199, 226, 258, 267, 300, 316, 355, 372, 386, 412, 439, 477, 481, 557},
    {18, 66, 81, 135, 153, 176, 200, 227, 259, 268, 301, 317, 356, 373, 387, 413, 440, 478, 482, 558},
    {19, 67, 82, 136, 154, 177, 201, 228, 260, 269, 302, 318, 357, 374, 388, 414, 441, 479, 483, 559},
    {20, 68, 83, 137, 155, 178, 202, 229, 261, 270, 303, 319, 358, 375, 389, 415, 442, 456, 484, 560},
    {21, 69, 84, 138, 156, 179, 203, 230, 262, 271, 304, 320, 359, 376, 390, 416, 443, 457, 485, 561},
    {22, 70, 85, 139, 157, 180, 204, 231, 263, 272, 305, 321, 336, 377, 391, 417, 444, 458, 486, 562},
    {23, 71, 86, 140, 158, 181, 205, 232, 240, 273, 306, 322, 337, 378, 392, 418, 445, 459, 487, 563},
    {0, 48, 87, 141, 159, 182, 206, 233, 241, 274, 307, 323, 338, 379, 393, 419, 446, 460, 488, 564},
    {1, 49, 88, 142, 160, 183, 207, 234, 242, 275, 308, 324, 339, 380, 394, 420, 447, 461, 489, 565},
    {2, 50, 89, 143, 161, 184, 208, 235, 243, 276, 309, 325, 340, 381, 395, 421, 448, 462, 490, 566},
    {3, 51, 90, 120, 162, 185, 209, 236, 244, 277, 310, 326, 341, 382, 396, 422, 449, 463, 491, 567},
    {4, 52, 91, 121, 163, 186, 210, 237, 245, 278, 311, 327, 342, 383, 397, 423, 450, 464, 492, 568},
    {5, 53, 92, 122, 164, 187, 211, 238, 246, 279, 288, 328, 343, 360, 398, 424, 451, 465, 493, 569},
    {6, 54, 93, 123, 165, 188, 212, 239, 247, 280, 289, 329, 344, 361, 399, 425, 452, 466, 494, 570},
    {7, 55, 94, 124, 166, 189, 213, 216, 248, 281, 290, 330, 345, 362, 400, 426, 453, 467, 495, 571},
    {8, 56, 95, 125, 167, 190, 214, 217, 249, 282, 291, 331, 346, 363, 401, 427, 454, 468, 496, 572},
    {9, 57, 72, 126, 144, 191, 215, 218, 250, 283, 292, 332, 347, 364, 402, 428, 455, 469, 497, 573},
    {10, 58, 73, 127, 145, 168, 192, 219, 251, 284, 293, 333, 348, 365, 403, 429, 432, 470, 498, 574},
    {11, 59, 74, 128, 146, 169, 193, 220, 252, 285, 294, 334, 349, 366, 404, 430, 433, 471, 499, 575}
};
#endif