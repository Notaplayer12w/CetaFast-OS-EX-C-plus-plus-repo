#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <fstream>
#ifndef _WIN32
std::string proceed;
std::cout << "WARNING: Non-Windows OS detected. This build may contain critical bugs.\n";
std::cout << "Do you want to proceed? (yes/no): ";
std::getline(std::cin, proceed);

if (proceed != "yes" && proceed != "y") {
    std::cout << "Exited safely.\n";
    return 0; // Safely shuts down the program
}
std::cout << "\nLaunching Doors OS anyways\n\n";
#endif

int main()
{
	std::string fileList = "System_Files:\n - system.sys\n - doors_browser.config\n\nUser_Files:\n";
	std::string FilesV;
	std::string Files;
    std::string Doorsnet;
    std::string Ui;
    std::cout<<"Welcome to Ceta OS C++\n";
    std::cout<<"Type help to get started\n";
    std::string searchs = "ceta os , hi , c++ , doors net";
    std::string command = "help , version , date , doors net , shutdown , guessing game , files , dir , type , copyright";
    std::string guess;
    std::string password;
    std::string colorchoice;
    std::string passwordguess;
    std::string print;
	std::cout<<"> CetaFast OS C++ v2\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	while (true) {
        std::cout<<">Ceta ";
        std::getline(std::cin, Ui);
        
        if (Ui == "help") {
            std::cout<<"- ================================================== - Command list - ===================================================================== - X\n";
			std::cout<<"The commands / applications are: shutdown , help , version , date , doors portal , guessing game, files , dir , type(your input) , copyright, lock , color\n";
        } 
        
        else if (Ui == "version") {
            std::cout<<"Ceta OS C++ version: v2 public realese\n";
        }
        
        else if (Ui == "date") {
            std::time_t currentTime = std::time(nullptr);
			std::cout<<"-================ - Current time - ================- X \n";
			std::cout<<">current date and time: " << std::ctime(&currentTime);
        }
        else if (Ui == "guessing game") {
        	std::cout<<"-======== - guess the number 1-10 - =========== - X  \n";
			std::getline(std::cin,guess);
        	if (guess == "4") {
        		std::cout<<"You guessed right :D !!! \n";
        }
        	else if (guess != "4") {
        		std::cout<<"try again you didnt guess right good guess!! \n";
			}
			}
		else if (Ui == "files") {
			std::cout<<"-=========== - File Manager - ================ X \n";
			std::cout<< "enter file name";
			std::getline(std::cin, Files);
			fileList = fileList + "-" + Files + "\n";
			std::cout<< "added file:"<< Files << "\n";
			std::cout<< "would you like to save this as a .txt file? yes, no\n";
			std::getline(std::cin, Files);
			if (Files == "yes") {
				std::getline(std::cin, Files);
				std::ofstream myFile(Files + ".txt");
				std::cout<<"saved file\n";
			}
			
		}
		else if (Ui == "dir") {
			std::cout<<"========= - Files - ========== X";
			std::cout<< fileList << "\n";
		}
		
        else if (Ui == "type") {
        	std::cout<<">What to print ";
        	std::getline(std::cin,print);
        	std::cout<< print << "\n";
		}
		else if (Ui == "copyright") {
			std::cout<<"Ceta.Technology 2026 (c)\n";
			std::cout<<"aIl rights resorved\n";
			std::cout<<"do not redistribut with out permision from creator\n";
		}
        
		else if (Ui == "doors portal") {
            std::cout<<"============ - Doors Portal - ========== X";
			std::cout<<">Search ";
			std::getline(std::cin,searchs);
            if (searchs == "ceta os") {
                std::cout<<"Ceta OS is an os that is based on scratch popular versions are: v24 , v29 ,\n";
            }
            else if (searchs == "hi") {
                std::cout<<"Hi is a phrase use to greet people\n";
            }
                
            else if (searchs == "c++") {
                std::cout<<"C++ is a programing language used to code oses\n ";
                }

            else if (searchs == "doors portal") {
                std::cout<<"Doors Portal is a web browser made by Ceta Technologies.co \n";
            
            }
            
            else if (searchs == "google") {
            	std::cout<<"google is one of the worlds biggest and most used search engines \n";
			}
			
			else if (searchs != "ceta os" && searchs != "hi" && searchs != "c++" && searchs != "doors portal" && searchs != "google") {
				std::cout<<"search not found, sorry.\n";
			}
            
            
            }
		else if (Ui == "shutdown") {
        	std::cout<<"Powered off...\n";
        	return(0);
        	}
        else if (Ui == "lock") {
        	std::cout<<"============ - Parrot Security - ==============\n";
			std::cout<<">Set password\n";
			std::getline(std::cin, password);
			while (passwordguess != password) {
				std::cout<<">Password?";
				std::getline(std::cin, passwordguess);
				if (passwordguess == password) {
					std::cout<<">Unlocked\n";
				}
				else if (passwordguess != password) {
					std::cout<<">worng password\n";
				}
			}
			
		}
		else if (Ui == "color") {
			std::cout<<"=============== - Theme for ceta - ================\n";
			std::cout<<">choose color Green , Blue , Red , Yellow";
			std::getline(std::cin, colorchoice);
			if (colorchoice == "green") {
				std::cout << "\033[32m";
				std::cout<<">changed color to green\n";
			}
			else if (colorchoice == "blue") {
				std::cout << "\033[34m";
				std::cout<<">changed color to blue\n";
			}
			else if (colorchoice == "red") {
				std::cout << "\033[31m";
				std::cout<<"changed color to red\n";
			}
			else if (colorchoice == "yellow") {
				std::cout << "\033[33m";
				std::cout<<"changed color to yellow\n";
			}
		}
         
        	else if (Ui != "help" && Ui != "version" && Ui != "date" && Ui != "doors portal" && Ui != "shutdown" && Ui != "files" && Ui != "dir" && Ui != "type" && Ui != "copyright" && Ui != "color") {
				std::cout<<"command not found did you mean help?\n";
        	}
    }
        return 0;	 
    }
       
 
    
    
    
