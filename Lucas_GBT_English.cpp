#include <iostream>
using namespace std;
#include <chrono>
#include <thread>

string nama;
string prom;
string apcb;

int main()
{
	bool rusdi = true;
	bool gibran = false;
	cout<< "Enter your name: \a";
	cin>> nama;

	cout<< "*------------------------------------*" << endl;
	cout<< "| Lucas'S GBT (2.0 NEWEST ONE)   \a    |" << endl;
	cout<< "*------------------------------------*" << endl;
	cout<< "|- NEW WORKING MATH OPS UPDATE       |" << endl;
	cout<< "| 1. You can now do basic math OPS   |" << endl;
	cout<< "| 2. Clear the math answer from Lucas's  |" << endl;
	cout<< "| Example : 1+1 or 1+2              |" << endl;
	cout<< "| Example : 1-1 or 1-2              |" << endl;
	cout<< "| Example : 1x1 or 1x2              |" << endl;
	cout<< "| Example : 1/1 or 1/2              |" << endl;
	cout<< "*------------------------------------*" << endl;
	cout<< "What can I do for you, Mr. " << nama << "?\a" << endl;
	cin.ignore();

	for (int i = 0; i < 100; i++) {
		cout<< ">";
		getline (cin, prom);

		size_t bang = prom.find("!");

		if (bang == string::npos) {
			size_t jali = prom.find("?");

			if (jali == string::npos) {
				if (prom.find("hello") != string::npos || prom.find("hello") != string::npos || prom.find("hi") != string::npos) {
					cout<< "Processing your message...\a" << endl;
					std::this_thread::sleep_for(std::chrono::seconds(3));
					if (i == 0) {
						cout<< "hello juga " << nama << " Looks like this is our first meeting! Let me introduce myself. My name is Lucas's GBT. What are your plans for today?\a" << endl;
					}
					else if (i == 1) {
						cout<< "Hello again... Let me introduce myself once more. My name is Lucas's GBT. How can I help you\a" << endl;
					}

					else if (i == 2) {
						cout<< "Hmm, hello again? If you have a plan, just tell me! I've already introduced myself.\a" << endl;
					}

					else if (i == 3) {
						cout<< "um.. " << nama << " I think we can get straight to the point since we've already met. If you're feeling sad or lonely, you can talk to me..\a" << endl;
					}

					else {
						cout<< "Hello... If you want to make a plan, just tell me..\a" << endl;
					}
				}

	else if (prom.find("1") != string::npos || prom.find("2") != string::npos || prom.find("3") != string::npos || prom.find("4") != string::npos || prom.find("5") != string::npos || prom.find("6") != string::npos || prom.find("7") != string::npos || prom.find("8") != string::npos || prom.find("9") != string::npos || prom.find("10") != string::npos) {
				    string arya = prom.substr(0,1);
				    string ayyj = prom.substr(0,2);
				    if (ayyj.find("10") != string::npos) {
				        gibran = true;
				    }
				    if (gibran) {
				        apcb = prom.substr(3,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 10 is 20✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 10 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 10 = 100✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 10 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 1 is 11✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 1 = 9✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 1 = 10✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 1 = 10✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 2 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 2 = 8✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 2 = 20✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 2 = 5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 3 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 3 = 7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 3 = 30✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 3 = 3.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 4 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 4 = 6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 4 = 40✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 4 = 2.5✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 5 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 5 = 5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 5 = 50✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 5 = 2✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 6 is 16✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 6 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 6 = 60✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 6 = 1.66666666667✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 7 is 17✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 7 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 7 = 70✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 7 = 1.42857142857✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 8 is 18✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 8 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 8 = 80✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 8 = 1.25✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 10 + 9 is 19✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 10 - 9 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 10 x 9 = 90✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 10 ÷ 9 = 1.11111111111✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				       
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 10 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("1") != string::npos) {
				       
				        apcb = prom.substr(2,prom.length());
				        if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 10 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 10 = -9✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 10 = 10✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 10 = 0.1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 1 is 2✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 1 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 1 = 1✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 1 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 2 is 3✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 2 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 2 = 2✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 2 = 0.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 3 is 4✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 3 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 3 = 3✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 3 = 0.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 4 is 5✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 4 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 4 = 4✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 4 = 0.250✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 5 is 6✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 5 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 5 = 5✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 5 = 0.2✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 6 is 7✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 6 = -5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 6 = 6✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 6 = 0.16666666666✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 7 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 7 = -6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 7 = 7✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 7 = 0.14285714285✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 8 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 8 = -7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 8 = 8✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 8 = 0.125✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 1 + 9 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 1 - 9 = -8✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 1 x 9 = 9✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 1 ÷ 9 = 0.11111111111✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 1 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("2") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 10 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 10 = -8✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 10 = 20✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 10 = 0.2✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 1 is 3✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 1 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 1 = 2✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 1 = 2✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 2 is 4✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 2 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 2 = 4✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 2 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 3 is 5✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 3 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 3 = 6✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 3 = 0.66666666666✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 4 is 6✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 4 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 4 = 8✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 4 = 0.5✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 5 is 7✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 5 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 5 = 10✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 5 = 0.4✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 6 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 6 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 6 = 12✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 6 = 0.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 7 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 7 = -5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 7 = 14✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 7 = 0.28571428571✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 8 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 8 = -6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 8 = 16✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 8 = 0.25✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 2 + 9 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 2 - 9 = -7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 2 x 9 = 18✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 2 ÷ 9 = 0.22222222222✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				       
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 2 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("3") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 10 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 10 = -7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 10 = 30✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 10 = 0.3✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 1 is 4✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 1 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 1 = 3✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 1 = 3✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 2 is 5✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 2 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 2 = 6✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 2 = 1.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 3 is 6✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 3 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 3 = 9✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 3 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 4 is 7✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 4 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 4 = 12✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 4 = 0.75✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 5 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 5 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 5 = 15✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 5 = 0.6✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 6 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 6 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 6 = 18✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 6 = 0.5✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 7 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 7 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 7 = 21✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 7 = 0.42857142857✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 8 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 8 = -5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 8 = 24✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 8 = 0.375✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 3 + 9 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 3 - 9 = -6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 3 x 9 = 27✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 3 ÷ 9 = 0.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				       
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 3 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("4") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 10 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 10 = -6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 10 = 40✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 10 = 0.4✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 1 is 5✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 1 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 1 = 4✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 1 = 4✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 2 is 6✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 2 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 2 = 8✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 2 = 2✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 3 is 7✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 3 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 3 = 12✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 3 = 1.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 4 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 4 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 4 = 16✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 4 = 1✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 5 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 5 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 5 = 20✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 5 = 0.8✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 6 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 6 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 6 = 24✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 6 = 0.66666666666✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 7 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 7 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 7 = 28✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 7 = 0.57142857142✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 8 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 8 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 8 = 32✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 8 = 0.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 4 + 9 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 4 - 9 = -5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 4 x 9 = 36✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 4 ÷ 9 = 0.44444444444✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				      
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 4 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("5") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				          if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 10 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 10 = -5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 10 = 50✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 10 = 0.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 1 is 6✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 1 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 1 = 5✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 1 = 5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 2 is 7✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 2 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 2 = 10✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 2 = 2.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 3 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 3 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 3 = 15✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 3 = 1.66666666667✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 4 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 4 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 4 = 20✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 4 = 1.25✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 5 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 5 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 5 = 25✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 5 = 1✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 6 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 6 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 6 = 30✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 6 = 0.83333333333✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 7 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 7 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 7 = 35✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 7 = 0.71428571428✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 8 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 8 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 8 = 40✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 8 = 0.625✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 5 + 9 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 5 - 9 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 5 x 9 = 45✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 5 ÷ 9 = 0.55555555555✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				     
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 5 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("6") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 10 is 16✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 10 = -4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 10 = 60✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 10 = 0.6✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 1 is 7✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 1 = 5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 1 = 6✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 1 = 6✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 2 is 8✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 2 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 2 = 12✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 2 = 3✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 3 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 3 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 3 = 18✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 3 = 2✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 4 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 4 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 4 = 24✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 4 = 1.5✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 5 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 5 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 5 = 30✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 5 = 1.2✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 6 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 6 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 6 = 36✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 6 = 1✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 7 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 7 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 7 = 42✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 7 = 0.85714285714✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 8 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 8 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 8 = 48✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 8 = 0.75✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 6 + 9 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 6 - 9 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 6 x 9 = 54✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 6 ÷ 9 = 0.66666666666✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				       
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 6 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("7") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				        if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 10 is 17✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 10 = -3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 10 = 70✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 10 = 0.7✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 1 is 8✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 1 = 6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 1 = 7✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 1 = 7✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 2 is 9✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 2 = 5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 2 = 14✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 2 = 3.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 3 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 3 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 3 = 21✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 3 = 2.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 4 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 4 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 4 = 28✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 4 = 1.75✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 5 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 5 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 5 = 35✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 5 = 1.4✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 6 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 6 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 6 = 42✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 6 = 1.16666666667✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 7 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 7 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 7 = 49✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 7 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 8 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 8 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 8 = 56✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 8 = 0.875✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 7 + 9 is 16✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 7 - 9 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 7 x 9 = 63✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 7 ÷ 9 = 0.77777777777✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 7 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("8") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 10 is 18✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 10 = -2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 10 = 80✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 10 = 0.8✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 1 is 9✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 1 = 7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 1 = 8✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 1 = 8✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 2 is 10✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 2 = 6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 2 = 16✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 2 = 4✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 3 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 3 = 5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 3 = 24✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 3 = 2.66666666667✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 4 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 4 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 4 = 32✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 4 = 2✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 5 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 5 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 5 = 40✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 5 = 1.6✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 6 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 6 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 6 = 48✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 6 = 1.33333333333✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 7 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 7 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 7 = 56✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 7 = 1.14285714286✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 8 is 16✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 8 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 8 = 64✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 8 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 8 + 9 is 17✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 8 - 9 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 8 x 9 = 72✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 8 ÷ 9 = 0.88888888888✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				       
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 8 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				    else if (arya.find("9") != string::npos) {
				        apcb = prom.substr(2,prom.length());
				         if (apcb.find("10") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 10 is 19✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 10 = -1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 10 = 90✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 10 = 0.9✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("1") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 1 is 10✅ Is there anything I can help you with?\a"<< endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 1 = 8✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 1 = 9✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 1 = 9✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("2") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 2 is 11✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 2 = 7✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 2 = 18✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 2 = 4.5✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("3") != string::npos) {
				             if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 3 is 12✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 3 = 6✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 3 = 27✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 3 = 3✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("4") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 4 is 13✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 4 = 5✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 4 = 36✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 4 = 2.25✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("5") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 5 is 14✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 5 = 4✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 5 = 45✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 5 = 1.8✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("6") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 6 is 15✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 6 = 3✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 6 = 54✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 6 = 1.5✅ If you have another question, just let me know!\a"<< endl;
				            } 
				        }
				        else if (apcb.find("7") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 7 is 16✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 7 = 2✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 7 = 63✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 7 = 1.28571428571✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("8") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 8 is 17✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 8 = 1✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 8 = 72✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 8 = 1.125✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				        else if (apcb.find("9") != string::npos) {
				            if (prom.find("add") != string::npos || prom.find("add") != string::npos || prom.find("plus") != string::npos || prom.find("+") != string::npos) {
				                cout<< "Of course! The result of 9 + 9 is 18✅ Is there anything else I can help you with?\a" << endl;
				            }
				            else if (prom.find("subtract") != string::npos || prom.find("subtract") != string::npos || prom.find("minus") != string::npos || prom.find("-") != string::npos) {
				                cout<< "Now we're getting into basic math operations! The result of 9 - 9 = 0✅ If you want to calculate something, just ask me!\a" << endl;
				            }
				            else if (prom.find("multiply") != string::npos || prom.find("multiply") != string::npos || prom.find("Multiply") != string::npos || prom.find("Multiply by") != string::npos || prom.find("multiply") != string::npos || prom.find("X") != string::npos || prom.find("x") != string::npos) {
				                cout<< "This operation is getting a little harder! But once you understand it, it's easy. 9 x 9 = 81✅ \a"<< endl;
				            }
				            else if (prom.find("divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide") != string::npos || prom.find("divide") != string::npos || prom.find("Divide by") != string::npos || prom.find("÷") != string::npos || prom.find("/") != string::npos) {
				                cout<< "Wow, this operation is getting tricky! The answer to 9 ÷ 9 = 1✅ If you have another question, just let me know!\a"<< endl;
				            }
				        }
				      
				        else {
				            cout<< "Oh no! " << nama << " what are you trying to do with the number 9 here? Do you want to add, multiply, or divide it? Just tell me!\a" << endl;
				        }
				    }
				   gibran = false; 
				}
         	}

			else {

				if (prom.find("hello") != string::npos || prom.find("hello") != string::npos || prom.find("hi") != string::npos) {
					cout<< "Processing your message...\a" << endl;
					std::this_thread::sleep_for(std::chrono::seconds(3));
					if (i == 0) {
						cout<< "hello juga " << nama << " It seems you're both confused and curious. What are your plans for today?\a" << endl;
					}
					else if (i == 1) {
						cout<< "Hello! How can I help you?\a" << endl;
					}
					else if (i == 2) {
						cout<< "Hmm, hello again? If you're confused about a question or a topic, just let me know.\a" << endl;
					}

					else if (i == 3) {
						cout<< "um.. " << nama << " I think we can get straight to the point since we've already met. If you're confused about relationships, you can talk to me\a" << endl;
					}

					else {
						cout<< "If you want to make plans or talk about relationships, just tell me..\a" << endl;
					}
				}
			}
		}

		else {
			if (prom.find("hello") != string::npos || prom.find("hello") != string::npos || prom.find("hi") != string::npos) {
				cout<< "Processing your message...\a" << endl;
				std::this_thread::sleep_for(std::chrono::seconds(3));
				if (i == 0) {
					cout<< "hello juga " << nama << " It seems you're really enthusiastic! What are your plans for today?\a" << endl;
				}
				else if (i == 1) {
					cout<< "Hello again!! What's the plan? You seem full of energy!\a" << endl;
				}
				else if (i == 2) {
					cout<< "Hmm, hello again? If you have a plan, just tell me! You're full of energy!\a" << endl;
				}

				else if (i == 3) {
					cout<< "um.. " << nama << " I think we can get straight to the point since we've already met. Or would you like to talk? That's okay!\a" << endl;
				}

				else {
					cout<< "If you want to make a plan, just tell me. I'm here...\a" << endl;
				}
			}

		}

	}


	return 0;
}