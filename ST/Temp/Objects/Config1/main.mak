SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\MATLAB\R2023a\bin;C:\Program Files\Git\cmd;C:\Program Files\nodejs\;C:\ProgramData\chocolatey\bin;C:\Users\emili\AppData\Local\Programs\Python\Launcher\;C:\Users\emili\AppData\Local\Programs\Eclipse Adoptium\jdk-17.0.7.7-hotspot\bin;C:\Users\emili\AppData\Local\Microsoft\WindowsApps;C:\Users\emili\AppData\Local\Programs\Microsoft VS Code\bin;C:\msys64\mingw64\bin;C:\Users\emili\AppData\Local\GitHubDesktop\bin;C:\texlive\2023\bin\windows;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\emili\AppData\Local\Programs\Python\Launcher\;C:\Users\emili\AppData\Local\Programs\Eclipse Adoptium\jdk-17.0.7.7-hotspot\bin;C:\Users\emili\AppData\Local\Microsoft\WindowsApps;C:\Users\emili\AppData\Local\Programs\Microsoft VS Code\bin;C:\msys64\mingw64\bin;C:\Users\emili\AppData\Local\GitHubDesktop\bin;C:\texlive\2023\bin\windows;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Program Files\AS412\bin-en\4.12;C:\Program Files\AS412\bin-en\4.11;C:\Program Files\AS412\bin-en\4.10;C:\Program Files\AS412\bin-en\4.9;C:\Program Files\AS412\bin-en\4.8;C:\Program Files\AS412\bin-en\4.7;C:\Program Files\AS412\bin-en\4.6;C:\Program Files\AS412\bin-en\4.5;C:\Program Files\AS412\bin-en\4.4;C:\Program Files\AS412\bin-en\4.3;C:\Program Files\AS412\bin-en\4.2;C:\Program Files\AS412\bin-en\4.1;C:\Program Files\AS412\bin-en\4.0;C:\Program Files\AS412\bin-en
export AS_BUILD_MODE := Build
export AS_VERSION := 4.12.2.93
export AS_WORKINGVERSION := 4.12
export AS_COMPANY_NAME := HP
export AS_USER_NAME := emili
export AS_PATH := C:/Program Files/AS412
export AS_BIN_PATH := C:/Program Files/AS412/bin-en
export AS_PROJECT_PATH := C:/Users/emili/OneDrive\ -\ unibg.it/UNI/Anno\ III/Automazione\ Industriale/GitHub/Laboratorio-di-Automazione-Industriale/ST
export AS_PROJECT_NAME := ST
export AS_SYSTEM_PATH := C:/Program\ Files/AS/System
export AS_VC_PATH := C:/Program\ Files/AS412/AS/VC
export AS_TEMP_PATH := C:/Users/emili/OneDrive\ -\ unibg.it/UNI/Anno\ III/Automazione\ Industriale/GitHub/Laboratorio-di-Automazione-Industriale/ST/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := C:/Users/emili/OneDrive\ -\ unibg.it/UNI/Anno\ III/Automazione\ Industriale/GitHub/Laboratorio-di-Automazione-Industriale/ST/Binaries
export AS_GNU_INST_PATH := C:/Program\ Files/AS412/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := C:/Program\ Files/AS412/AS/GnuInst/V4.1.2/4.9/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/Program Files/AS412/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := C:/Program Files/AS412/AS/GnuInst/V4.1.2/4.9/bin
export AS_INSTALL_PATH := C:/Program\ Files/AS412
export WIN32_AS_PATH := "C:\Program Files\AS412"
export WIN32_AS_BIN_PATH := "C:\Program Files\AS412\bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Users\emili\OneDrive - unibg.it\UNI\Anno III\Automazione Industriale\GitHub\Laboratorio-di-Automazione-Industriale\ST"
export WIN32_AS_SYSTEM_PATH := "C:\Program Files\AS\System"
export WIN32_AS_VC_PATH := "C:\Program Files\AS412\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Users\emili\OneDrive - unibg.it\UNI\Anno III\Automazione Industriale\GitHub\Laboratorio-di-Automazione-Industriale\ST\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Users\emili\OneDrive - unibg.it\UNI\Anno III\Automazione Industriale\GitHub\Laboratorio-di-Automazione-Industriale\ST\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\Program Files\AS412\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "C:\Program Files\AS412\AS\GnuInst\V4.1.2\bin"
export WIN32_AS_INSTALL_PATH := "C:\Program Files\AS412"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/4.9/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/ST.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'Build'   

