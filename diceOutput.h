/*takes a number to output it in a commen dice format*/
#include <Arduino.h>
#ifndef __HEADER_DICEFORMAT__
#define __HEADER_DICEFORMAT__



class diceOutput {
private:
		int led_middle;
		int led_bot_r;
		int led_mid_r;
		int led_top_r;
		int led_bot_l;
		int led_mid_l;
		int led_top_l;

public:
	void doOutput(int num) {
		doReset();
		if (num >= 1 && num <= 6)
		{
			switch (num)
			{
			case 1:
				digitalWrite(led_middle,HIGH);
				break;
			case 2:
				digitalWrite(led_top_r, HIGH);
				digitalWrite(led_bot_l, HIGH);
				break;
			case 3:
				digitalWrite(led_middle, HIGH);
				digitalWrite(led_top_r, HIGH);
				digitalWrite(led_bot_l, HIGH);
				break;
			case 4:
				digitalWrite(led_top_r, HIGH);
				digitalWrite(led_top_l, HIGH);
				digitalWrite(led_bot_l, HIGH);
				digitalWrite(led_bot_r, HIGH);
				break;
			case 5:
				digitalWrite(led_middle, HIGH);
				digitalWrite(led_top_r, HIGH);
				digitalWrite(led_top_l, HIGH);
				digitalWrite(led_bot_l, HIGH);
				digitalWrite(led_bot_r, HIGH);
				break;
			case 6:
				digitalWrite(led_top_r, HIGH);
				digitalWrite(led_top_l, HIGH);
				digitalWrite(led_mid_l, HIGH);
				digitalWrite(led_mid_r, HIGH);
				digitalWrite(led_bot_l, HIGH);
				digitalWrite(led_bot_r, HIGH);
				break;
			default:
				break;
			}

		}
	}

	void doReset() {
		digitalWrite(led_middle,LOW);
		digitalWrite(led_top_r, LOW);
		digitalWrite(led_top_l, LOW);
		digitalWrite(led_mid_l, LOW);
		digitalWrite(led_mid_r, LOW);
		digitalWrite(led_bot_l, LOW);
		digitalWrite(led_bot_r, LOW);
	}

	void doAnimation() {
		/*step 1*/
		digitalWrite(led_bot_r, HIGH);
		delay(100);

		/*step 2*/
		digitalWrite(led_mid_r, HIGH);
		//digitalWrite(led_bot_r, HIGH);
		delay(100);

		/*step 3*/
		digitalWrite(led_top_r, HIGH);
		//digitalWrite(led_mid_r, HIGH);
		//digitalWrite(led_bot_r, HIGH);
		delay(150);

		/*step 4*/
		digitalWrite(led_top_l, HIGH);
		//digitalWrite(led_top_r, HIGH);
		//digitalWrite(led_mid_r, HIGH);
		digitalWrite(led_bot_r, LOW);
		delay(300);

		/*step 5*/
		digitalWrite(led_mid_l, HIGH);
		//digitalWrite(led_top_l, HIGH);
		//digitalWrite(led_top_r, HIGH);
		digitalWrite(led_mid_r, LOW);
		delay(300);

		/*step 6*/
		digitalWrite(led_bot_l, HIGH);
		//digitalWrite(led_mid_l, HIGH);
		//digitalWrite(led_top_l, HIGH);
		digitalWrite(led_top_r, LOW);
		delay(300);

		/*step 6*/
		//digitalWrite(led_bot_l, HIGH);
		//digitalWrite(led_mid_l, HIGH);
		digitalWrite(led_top_l, LOW);
		delay(150);

		/*step 6*/
		//digitalWrite(led_bot_l, HIGH);
		digitalWrite(led_mid_l, LOW);
		delay(100);

		/*step 6*/
		digitalWrite(led_bot_l, LOW);
		delay(100);
		
		


	}

	diceOutput (int m,int br,int mr,int tr,int bl,int ml,int tl) {
		this->led_middle = m;
		this->led_bot_r = br;
		this->led_mid_r = mr;
		this->led_top_r = tr;
		this->led_bot_l = bl;
		this->led_mid_l = ml;
		this->led_top_l = tl;
	}
};

#endif // !__HEADER_DICEFORMAT__
