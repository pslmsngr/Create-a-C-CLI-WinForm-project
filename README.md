# Create-a-C++-CLI-WinForm-project
Create a C++/CLI WinForm project using Visual Studio 2017.

1.	Create C++/CLI CLR Console Application project named CppCliWinForm.

2.	Add System.Drawing and System.Windows.Forms references to the C++/CLI Console Application project.

3.	Right-click on the C++/CLI CLR Console Application project and select Properties.  On the Property Pages ensure that Configurations is selected to All Configurations and the Platform is selected to All Platforms.

    a.	In the Configuration Properties in Linker in the System in the SubSystem select Windows (/SUBSYSTEM:WINDOWS).

    b.	In the Configuration Properties in Linker in the Advanced in the Entry Point enter main.

    c.	Click the Apply button, then OK.

7.	Add Assembly Resource File (.resx) to the C++/CLI Empty project; named as Form1.resx.

8.	Add Windows Form to the C++/CLI Empty project; named as Form1.h.  You will also notice that it added a Form1.cpp file also.  This can be removed or kept.

9.	Right-click on the C++/CLI CLR Console Application project and select Unload Project.  Right-click on the C++/CLI CLR Console Application project again and select Edit ....  Search for the ItemGroup which contains the "Form1.resx" line:
		<ItemGroup>
    			<EmbeddedResource Include="Form1.resx" />
  		</ItemGroup>
	and replace it with this:
	  	<ItemGroup>
    			<EmbeddedResource Include="Form1.resx">
      				<DependentUpon>Form1.h</DependentUpon>
      				<SubType>Designer</SubType>
    			</EmbeddedResource>
  		</ItemGroup>
      
10.	Right-click on the C++/CLI CLR Console Application project again and select Reload Project and select Yes on the MessageBox.  When you open the Solution Explorer, you will notice the Form1.resx is now connected with Form1.h.

11.	Modify the CppCliWinForm.cpp file as follows:
    Add #include "Form1.h" under the existing #include "stdafx.h".
    Copy the namespace name from Form1.h and paste in place of the System namespace in the source file.  In our example the result would be using namespace CppCliWinForm.
    Add [System::STAThreadAttribute] above the int main(array<System::String ^ > ^args) line.
    
12.	Insert the following above the return 0; line:
   	// Enabling Windows XP visual effects before any controls are created
   	System::Windows::Forms::Application::EnableVisualStyles();
   	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

   	// Create the main window and run it
   	System::Windows::Forms::Application::Run(gcnew Form1());
    
13.	Now compile and run you C++/CLI WinForm project.

14.	Double-click on the Form1.h file.  If you do not see the WinForm Designer, save and close the project and then reopen it.  This should fix it.
