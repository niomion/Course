#include "Question.h"


Question::Question(String^ q, String^ a1, String^ a2, String^ a3, String^ a4, String^ a5, int ca) {
	question = q;
	ans1 = a1;
	ans2 = a2;
	ans3 = a3;
	ans4 = a4;
	ans5 = a5;
	c_ans = ca;
}

Question::Question() {

}