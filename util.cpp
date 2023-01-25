#include<iostream>
using namespace std;
int resetlaunchpad()
{
	system("defaults write com.apple.dock ResetLaunchPad -bool true");
	system("killall Dock");
	return 1;
}
int setdarkmode()
{
	system("defaults write -g NSRequiresAquaSystemAppearance -bool Yes");
	system("Killall Finder");
	return 1;
}
int redarkmode()
{
	system("defaults write -g NSRequiresAquaSystemAppearance -bool No");
	system("Killall Finder");
	return 1;
}
int unkonwnsource()
{
	system("sudo spctl --master-disable");
	return 1;
}
void resetdockicon(){
	system("defaults delete com.apple.dock;killall Dock");
}
int main()
{
	cout<<"l: Reset Launchpad"<<endl;
	cout<<"d: Use Old Dark Mode(Dark Dock Only)"<<endl;
	cout<<"D: Recover Mojave Dark Mode"<<endl;
	cout<<"a: Allow apps downloaded from anywhere"<<endl;
	cout<<"q: quit the programe"<<endl;
	char input;
	while(1)
	{
		cin>>input;
		if(input=='l')
		{
			resetlaunchpad();
		}
		if(input=='d')
		{
			setdarkmode();
		}
		if(input=='D')
		{
			redarkmode();
		}
		if(input=='a')
		{
			unkonwnsource();
		}
		if(input=='q')
		{
			return 0;
		}
	}
}
