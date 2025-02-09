#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"

void set_character_matrix(char character, bool *led_buffer) {
   
    switch (character) {
    case '0': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 1, 0, 0, 1, 
            1, 0, 1, 0, 1, 
            1, 0, 0, 1, 1, 
            0, 1, 1, 1, 0
        };
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '1': {
       bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '2': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 1, 1, 1, 
            0, 1, 1, 0, 0, 
            0, 1, 0, 0, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '3': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 0, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '4': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 0, 
            0, 0, 0, 0, 1, 
            1, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '5': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            0, 1, 1, 1, 1, 
            0, 0, 0, 0, 1, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '6': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '7': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 0, 0, 0, 
            0, 0, 0, 0, 1, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '8': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case '9': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 1, 
            1, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'A': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'B': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'C': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            0, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'D': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'E': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            0, 0, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'F': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 0, 0, 1, 
            1, 0, 0, 0, 0, 
            0, 0, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'G': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 1, 0, 0, 1, 
            1, 0, 0, 0, 0, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'H': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'I': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'J': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 1, 1, 
            0, 0, 0, 1, 0, 
            0, 1, 0, 0, 0, 
            0, 0, 0, 1, 0, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'K': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 0, 0, 1, 
            1, 0, 1, 0, 0, 
            0, 0, 0, 1, 1, 
            1, 0, 1, 0, 0, 
            1, 1, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'L': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 1, 1, 1, 
            1, 0, 0, 0, 0, 
            0, 0, 0, 0, 1, 
            1, 0, 0, 0, 0, 
            0, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'M': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 1, 0, 1, 
            1, 1, 0, 1, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'N': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 0, 0, 1, 1, 
            1, 0, 1, 0, 1, 
            1, 1, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'O': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'P': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 0, 0, 1, 
            1, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'Q': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 1, 1, 0, 
            1, 0, 0, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'R': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 0, 0, 1, 0, 
            0, 1, 1, 1, 1, 
            1, 0, 0, 0, 1, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'S': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 1, 
            0, 0, 0, 0, 1, 
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 0, 
            0, 1, 1, 1, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'T': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'U': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'V': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 1, 0, 1, 0, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'W': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            1, 1, 0, 1, 1, 
            1, 0, 1, 0, 1, 
            1, 0, 0, 0, 1, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'X': {
        bool pattern[NUM_PIXELS] = {
            1, 0, 0, 0, 1, 
            0, 1, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'Y': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            1, 0, 0, 0, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'Z': {
        bool pattern[NUM_PIXELS] = {
            1, 1, 1, 1, 1, 
            0, 1, 0, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 0, 1, 0, 
            1, 1, 1, 1, 1
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'a': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'b': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'c': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 0, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'd': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'e': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'f': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 0, 1, 0, 
            0, 1, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'g': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'h': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'i': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'j': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'k': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 1, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'l': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 0, 0, 0, 
            0, 0, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'm': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'n': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 1, 0, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'o': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'p': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 0, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'q': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'r': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 1, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 's': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 1, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 't': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'u': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'v': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'w': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'x': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 0, 1, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'y': {
        bool pattern[NUM_PIXELS] = {
            0, 0, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 1, 0, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    case 'z': {
        bool pattern[NUM_PIXELS] = {
            0, 1, 1, 0, 0, 
            0, 0, 1, 0, 0, 
            0, 0, 1, 1, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        }; 
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
    default:
    bool pattern[NUM_PIXELS] = {
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0, 
            0, 0, 0, 0, 0
        };
        memcpy(led_buffer, pattern, sizeof(pattern));
        break;
    }
}

static inline void set_pixel(uint32_t pixel_grb) {
    pio_sm_put_blocking(pio0, 0, pixel_grb << 8u);
}

static inline uint32_t urgb_u32(uint8_t r, uint8_t g, uint8_t b) {
    return ((uint32_t) (r) << 8) | ((uint32_t) (g) << 16) | (uint32_t) (b);
}

void set_one_led(uint8_t r, uint8_t g, uint8_t b, bool *led_buffer) {
    uint32_t color = urgb_u32(r, g, b);

    for(uint8_t i = 0; i < NUM_PIXELS; ++i) {
        if(led_buffer[i]) {
            set_pixel(color);
        } else {
            set_pixel(0);
        }
    }
}