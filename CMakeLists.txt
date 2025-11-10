cmake_minimum_required(VERSION 3.16)
project(ENNOID-BMS-Tool VERSION 6.00 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Force English compiler messages
if(MSVC)
    add_compile_options(/utf-8)
endif()

# Definitions from .pro file
add_definitions(-DDT_VERSION=6.00 -DHAS_SERIALPORT -DHAS_BLUETOOTH)

# Find Qt5 with all required modules
find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
    PrintSupport
    Network
    Bluetooth
    SerialPort
    Quick
    QuickControls2
    REQUIRED
)

# Main source files
set(SOURCES
    main.cpp
    mainwindow.cpp
    packet.cpp
    vbytearray.cpp
    commands.cpp
    configparams.cpp
    configparam.cpp
    parametereditor.cpp
    digitalfiltering.cpp
    bleuart.cpp
    utility.cpp
    bmsinterface.cpp
)

# Main header files
set(HEADERS
    mainwindow.h
    packet.h
    vbytearray.h
    commands.h
    datatypes.h
    configparams.h
    configparam.h
    parametereditor.h
    digitalfiltering.h
    bleuart.h
    utility.h
    bmsinterface.h
)

# Pages source files
set(PAGES_SOURCES
    pages/pageconnection.cpp
    pages/pagedataanalysis.cpp
    pages/pagedebugprint.cpp
    pages/pagefirmware.cpp
    pages/pagemastercell.cpp
    pages/pagemasterdisplay.cpp
    pages/pagemastergeneral.cpp
    pages/pagemastersettings.cpp
    pages/pagemastersignals.cpp
    pages/pagemasterswitch.cpp
    pages/pagertdata.cpp
    pages/pagesettings.cpp
    pages/pagesetupcalculators.cpp
    pages/pageslavefan.cpp
    pages/pageslavegeneral.cpp
    pages/pageslaveio.cpp
    pages/pageslavesettings.cpp
    pages/pageslaveswitch.cpp
    pages/pageterminal.cpp
    pages/pagewelcome.cpp
)

# Pages header files
set(PAGES_HEADERS
    pages/pageconnection.h
    pages/pagedataanalysis.h
    pages/pagedebugprint.h
    pages/pagefirmware.h
    pages/pagemastercell.h
    pages/pagemasterdisplay.h
    pages/pagemastergeneral.h
    pages/pagemastersettings.h
    pages/pagemastersignals.h
    pages/pagemasterswitch.h
    pages/pagertdata.h
    pages/pagesettings.h
    pages/pagesetupcalculators.h
    pages/pageslavefan.h
    pages/pageslavegeneral.h
    pages/pageslaveio.h
    pages/pageslavesettings.h
    pages/pageslaveswitch.h
    pages/pageterminal.h
    pages/pagewelcome.h
)

# Widgets source files
set(WIDGETS_SOURCES
    widgets/aspectimglabel.cpp
    widgets/displaybar.cpp
    widgets/displaypercentage.cpp
    widgets/helpdialog.cpp
    widgets/historylineedit.cpp
    widgets/imagewidget.cpp
    widgets/mrichtextedit.cpp
    widgets/mtextedit.cpp
    widgets/pagelistitem.cpp
    widgets/paramdialog.cpp
    widgets/parameditbool.cpp
    widgets/parameditdouble.cpp
    widgets/parameditenum.cpp
    widgets/parameditint.cpp
    widgets/parameditstring.cpp
    widgets/paramtable.cpp
    widgets/qcustomplot.cpp
    widgets/rtdatatext.cpp
    widgets/vtextbrowser.cpp
)

# Widgets header files
set(WIDGETS_HEADERS
    widgets/aspectimglabel.h
    widgets/displaybar.h
    widgets/displaypercentage.h
    widgets/helpdialog.h
    widgets/historylineedit.h
    widgets/imagewidget.h
    widgets/mrichtextedit.h
    widgets/mtextedit.h
    widgets/pagelistitem.h
    widgets/paramdialog.h
    widgets/parameditbool.h
    widgets/parameditdouble.h
    widgets/parameditenum.h
    widgets/parameditint.h
    widgets/parameditstring.h
    widgets/paramtable.h
    widgets/qcustomplot.h
    widgets/rtdatatext.h
    widgets/vtextbrowser.h
)

# Mobile source files
set(MOBILE_SOURCES
    mobile/fwhelper.cpp
    mobile/qmlui.cpp
)

# Mobile header files
set(MOBILE_HEADERS
    mobile/fwhelper.h
    mobile/qmlui.h
)

# UI forms
set(FORMS
    mainwindow.ui
    parametereditor.ui
)

# Resources
set(RESOURCES
    res.qrc
)

# Create executable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${PAGES_SOURCES}
    ${PAGES_HEADERS}
    ${WIDGETS_SOURCES}
    ${WIDGETS_HEADERS}
    ${MOBILE_SOURCES}
    ${MOBILE_HEADERS}
    ${FORMS}
    ${RESOURCES}
)

# Link Qt libraries
target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::PrintSupport
    Qt5::Network
    Qt5::Bluetooth
    Qt5::SerialPort
    Qt5::Quick
    Qt5::QuickControls2
)

# Include current directory for headers
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/pages
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets
    ${CMAKE_CURRENT_SOURCE_DIR}/mobile
)
