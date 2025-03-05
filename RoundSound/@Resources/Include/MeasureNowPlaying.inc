; AUTHOR: CTURNER314
; VERSION: 1.0
; INFO: MEASURES DATA FOR THE SKIN WHEN ONE OF THE 'FULLY SUPPORTED PLAYERS' IS BEING USED
;____________________________________________________

[Variables]
;includes any variables used for the skin
@Include=Settings.inc

[MeasureState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=State
UpdateDivider=10

[MeasureTitle]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE
UpdateDivider=10
Substitute="":"N/A"

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=ARTIST
UpdateDivider=10
Substitute="":"N/A"

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=COVER
Substitute="":"#@#images\Default.png"
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=Progress
UpdateDivider=10

[MeasureStateButton]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE
Substitute="0":"Play","1":"Pause","2":"Play"