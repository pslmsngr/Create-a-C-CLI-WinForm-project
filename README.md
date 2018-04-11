# Create-a-C-CLI-WinForm-project
Create a C++/CLI WinForm project using Visual Studio 2017.
1) Using Visual Studio 2017, create a Visual C++\CLR\CLR Console Application named CppCliWinForm.

2) Right-click on the CppCliWinForm project within the Solution Explorer and select Properties.

3) Within the CppCliWinForm Property Pages:

   a) Select Configuration: All Configurations and Platform: All Platforms.
   
   b) Select Configuration Properties\Linker\System\SubSystem: Windows (/SUBSYTEM:WINDOWS), and then the Apply button.
   
   c) Select Configuration Properties\Linker\Advanced\Entry Point: main, and then the Apply button.
   
4) Right-click on the CppCliWinForm project within the Solution Explorer and Add\New Item:

   a) Select Visual C++\UI\Windows Form named Form1.h, and then the Add button.

5) Right-click on the CppCliWinForm project within the Solution Explorer and Add\New Item:

   a) Select Visual C++\Resource\AssemblyResource File (.resx) named Form1.resx, and then the Add button.

6) Right-click on the CppCliWinForm project within the Solution Explorer and select Unload Project:

   a) Select the Yes button if asked to save any files.
   
7) Right-click on the CppCliWinForm project within the Solution Explorer and select Edit CppCliWinForm.vcxproj:
   
   a) Go to near the bottom of the Xml and change this:
        <ItemGroup>
         <EmbeddedResource Include="Form1.resx" />
        </ItemGroup>

     to this:
       <ItemGroup>
        <EmbeddedResource Include="Form1.resx">
          <DependentUpon>Form1.h</DependentUpon>
          <SubType>Designer</SubType>
        </EmbeddedResource>
      </ItemGroup>

8) Right-click on the CppCliWinForm project within the Solution Explorer and select Reload CppCliWinForm.vcxproj:

   a) Select the Yes button if asked to close any files.
