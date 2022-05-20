/* Arduino USB Keyboard HID demo
*
* Sends Volume up, hello world, and Volume Down to the host PC
*
*/

/* Author: Darran Hunt
 * Released into the public domain.
 */

uint8_t buf[8] = { 0 };	/* Keyboard report buffer */
bool hasSent = false;


void setup();
void loop();

#define KEY_LEFT_CTRL	0x01
#define KEY_LEFT_SHIFT	0x02
#define KEY_RIGHT_CTRL	0x10
#define KEY_RIGHT_SHIFT	0x20

void setup() 
{
    Serial.begin(9600);
    delay(200);
}

char *str = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

void loop() 
{
    char *chp = str;
    delay(500);
    if(hasSent == false){
    //CTRL T
    buf[0] = KEY_LEFT_CTRL;
    buf[2] = 0x17;
    Serial.write(buf, 8);
    buf[0] = 0;
    buf[2] = 0;
    Serial.write(buf, 8);

    while (*chp) {
	    
	if ((*chp >= 'a') && (*chp <= 'z')) {
	    buf[2] = *chp - 'a' + 4;
	} else if ((*chp >= 'A') && (*chp <= 'Z')) {
	    buf[0] = KEY_LEFT_SHIFT;	/* Caps */
	    buf[2] = *chp - 'A' + 4;
	} else {
	    switch (*chp) {
	    case ' ':
	    	buf[2] = 0x2c;	// Space
		break;
	    case '+':
	      // buf[2] = 128;	// Volume up
	       break;
	    case '-':
	       //buf[2] = 129;	// Volume down
	       break;
      case '.':
      buf[2] = 0x37;  
      break;
      case '/':
      buf[2] = 0x38;
      break;
      case ':':
      buf[0] = KEY_LEFT_SHIFT;
      buf[2] = 0x33;
      break;
      case '4':
      buf[2] = 0x21;
      break;
      case '9':
      buf[2] = 0x26;
      break;
      case '?':
      buf[0] = KEY_LEFT_SHIFT;
      buf[2] = 0x38;
      break;
      case '=':
      buf[2] = 0x2E;
      break;
	    default:
	        /* Character not handled. To do: add rest of chars from HUT1_11.pdf */
		buf[2] = 0x37;	// Period
		break;
	    }
	}

	Serial.write(buf, 8);	// Send keypress
	buf[0] = 0;
	buf[2] = 0;
	Serial.write(buf, 8);	// Release key
	chp++;
    }
    buf[2] = 0x58;
    Serial.write(buf, 8);
    buf[2] = 0;
    Serial.write(buf, 8);
    hasSent = true;
    }
}