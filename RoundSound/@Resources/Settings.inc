
; AUTHOR: CTURNER314
; VERSION: 1.0
; INFO: SETTINGS FOR ROUNDSOUND 
; CHANGE COLORS, PLAYER AND VISUALISER SETTINGS HERE
;_________________________________________________________
;
;
[Variables]

;Size 
SCALE=1
; CHANGE PLAYER HERE! See Players: http://docs.rainmeter.net/manual/plugins/nowplaying
;
; Spotify, or NowPlaying for any other player on the list above
MPlayer=NowPlaying
;
; The name of the Player being used. "Spotify" for Spotify, "WMP" for windows media player etc. according to name in above link
;
PlayerName=AIMP
;
; File name of the player. For hiding information when player not open
PlayerFile=AIMP.exe
;
;==================
;===PLAYER FILES 
; Change to the application name with extension
WMPFile=WMPlayer.exe
ItunesFile=Itunes.exe
MediaMonkeyFile=MediaMonkey.exe
MusicBeeFile=MusicBee.exe
WinAmpFile=Winamp.exe
AIMPFile=AIMP.exe
Foobar2000File=Foobar2000.exe
JRMJFile=JRMJ.exe
SpotifyFile=Spotify.exe
GPMDPFile=Google Play Music Desktop Player.exe
; Color Of Main Ring
RingColor=170,130,255,255
;
; Whether the main ring is hidden.
MainRingHide=0
;
; The angle in degrees in which the main ring and progress bar start (270 reccomended)
ProgressStartAngle=270
;
; The distance in degrees in which the main ring and ring progress bar go
ProgressAngle=360
;
; Transparency of Album Cover
CoverTransparency=100
;
;
;
CoverGreyscale=0
;
; Font of Song Title
TitleFont=Nexa Light
;
; Font of Artist Name
ArtistFont=Nexa Bold
;
; Size of Song Title
TitleSize=30
;
; Size of Artist Name
ArtistSize=28
; Color of the Song Title
TitleColor=227,16,16,255
;
; Color of the Artist Name
ArtistColor=255,255,255,255
;
;Color Of The Progress Bar
ProgressColor=170,130,255,255
;
;===============
;====0: Do not show a progress Bar
;====1: Show progress bar as ring
;====2; Show progress bar as line
Progress=2
;
;
; Color of the visualiser bars. Use layout 13,13,13,255:0|59,236,255,255:47|0,0,0,255:100 for gradient, where the number after the : is the place on the circle from 1 to 100. 
BarColor=255,130,30,#BarTransparency#
;
; Transparency of the visualiser bars
BarTransparency=100
;
; Width of visualiser bars
ItemWidth=25
;
; Number of visualiser bars
NumOfItems=100
;
; How much the visualiser bars extrude from the ring
ExtrudeMax=128
ExtrudeMin=0
;
; Whether the visualiser bars extrude inward (0 is no, 1 is yes.)
Inward=0
;
; Value of 0 to 1, indicating how much to smooth the points
Smoothing=1
;
; NOTE: VALUES ARE ALWAYS CLOCKWISE, STARTING FROM 0 WHICH FACES RIGHT
; What angle does the lowest freq start at?
AngleStartDeg=140
AngleStart=(Rad(#AngleStartDeg#))
; The total amount in degrees the visualiser bars cover
AngleTotalDeg=360
AngleTotal=(Rad(#AngleTotalDeg#))
;
; Set to 0 for counterCW, 1 for CW (DOES NOT affect AngleStart/AngleTotal)
ClockWise=1
;
; FFT Options: For more detailed info, read http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTOptions
FFTSize=2048
FFTOverlap=(#FFTSize#/2)
FFTAttack=185
FFTDecay=45
FreqMin=200
FreqMax=16000
Sensitivity=45
AudioDeviceID=
AudioDevicePort=Output


;=
; constants (don't edit!... Ok, do, but you'll probably want to change them back after)
;============================
SCRIPT=#@#scripts\
INC=#@#Include\
Radius=(256*#SCALE#)
RadiusY=(256*#SCALE#)
BarColorExample=255,130,30,255
=
