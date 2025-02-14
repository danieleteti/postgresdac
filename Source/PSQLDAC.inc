{SVN revision: $Id$}

{.$DEFINE M_DEBUG}//remove "." to go into M_DEBUG mode
                  //don't do this until you exactly know what you are doing

{$IFDEF M_DEBUG}
  {$D+} {$L+}
  {$HINTS ON}
  {$WARNINGS ON}
{$ENDIF}

//---------------------------
// FreePascal/Lazarus
//---------------------------
//
{$IFDEF FPC}
  {$MODE DELPHI}
{$ENDIF}

{$IFDEF ANDROID} {$DEFINE MOBILE} {$ENDIF}
{$IFDEF IOS} {$DEFINE MOBILE} {$ENDIF}
{$IFDEF LINUX} {$DEFINE MOBILE} {$ENDIF}


{$UNDEF MACOS_OR_MOBILE}
{$IFDEF MACOS}{$DEFINE MACOS_OR_MOBILE}{$ENDIF}
{$IFDEF MOBILE}{$DEFINE MACOS_OR_MOBILE}{$ENDIF}

//---------------------------
// Delphi/Builder versions
//---------------------------
//DELPHI 28 (RX11 Alexandria}
{$IFDEF VER350}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_28}
  {$DEFINE DELPHI_27}
  {$DEFINE DELPHI_26}
  {$DEFINE DELPHI_25}
  {$DEFINE DELPHI_24}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 27 (RX10.4 Sydney}
{$IFDEF VER340}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_27}
  {$DEFINE DELPHI_26}
  {$DEFINE DELPHI_25}
  {$DEFINE DELPHI_24}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 26 (RX10.3 Rio}
{$IFDEF VER330}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_26}
  {$DEFINE DELPHI_25}
  {$DEFINE DELPHI_24}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 25 (RX10.2 Tokyo}
{$IFDEF VER320}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_25}
  {$DEFINE DELPHI_24}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 24 (RX10.1 Big Ben)
{$IFDEF VER310}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_24}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 23 (RX10 Seattle)
{$IFDEF VER300}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_23}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 22 (Delphi XE7 Elbrus)
{$IFDEF VER290}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_22}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 21 (Delphi XE7 Proteus)
{$IFDEF VER280}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_21}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 20 (Delphi XE6 Proteus)
{$IFDEF VER270}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_20}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 19 (Delphi XE5 Zephyr)
{$IFDEF VER260}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_19}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 18 (Delphi XE4)
{$IFDEF VER250}
  {$UNDEF NEXTGEN}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_18}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 17 (Delphi XE3)
{$IFDEF VER240}
  {$UNDEF NEXTGEN}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_17}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 16 (Delphi XE2)
{$IFDEF VER230}
  {$DEFINE FMX_AVAILABLE}
  {$DEFINE DELPHI_16}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 15 (Delphi XE)
{$IFDEF VER220}
  {$DEFINE DELPHI_15}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 14 (Delphi Weaver)
{$IFDEF VER210}
  {$DEFINE DELPHI_14}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 12 (2009, Tiburon)
{$IFDEF VER200}
  {$DEFINE DELPHI_12}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

{$IFNDEF DELPHI_12}
  {$DEFINE UNDER_DELPHI_12}
{$ENDIF}

//DELPHI 11(2007)
{$IFDEF VER185}
  {$DEFINE DELPHI_11}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
  {$WARN SYMBOL_DEPRECATED OFF}
{$ENDIF}

//DELPHI 10
{$IFDEF VER180}
  {$DEFINE DELPHI_10}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 9
{$IFDEF VER170}
  {$DEFINE DELPHI_9}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6}
{$ENDIF}

//DELPHI 7
{$IFDEF VER150}
  {$DEFINE DELPHI_7}
  {$DEFINE DELPHI_6} 
{$ENDIF}

//DELPHI 6
{$IFDEF VER140}
  {$DEFINE DELPHI_6}
  {$DEFINE UNDER_DELPHI_6}
{$ENDIF}

//DELPHI 5 and C++BUILDER 5
{$IFDEF VER130}
  {$DEFINE DELPHI_5}
  {$DEFINE UNDER_DELPHI_6}
  {$DEFINE MSWINDOWS}
{$ENDIF}

//DELPHI 4
{$IFDEF VER120}
  {$DEFINE DELPHI_4}
{$ENDIF}

//C++BUILDER 4
{$IFDEF VER125}
  {$DEFINE DELPHI_4}
{$ENDIF}

{$IFDEF DELPHI_7}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CAST OFF}
{$ENDIF}

{$IFDEF BCB}
   {$ObjExportAll On} 
{$ENDIF}

