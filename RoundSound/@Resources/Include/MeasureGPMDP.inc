; AUTHOR: CTURNER314
; VERSION: 1.0
; INFO: MEASURES DATA FOR THE SKIN WHEN GOOGLE PLAY MUSIC DESKTOP PLAYER IS BEING USED
;____________________________________________________

[Variables]
;Just includes any variables used for the skin
@Include=Settings.inc

[MeasureState]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State

[MeasureTitle]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Title
Substitute="":"N/A"

[MeasureArtist]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Artist
Substitute="":"N/A"

[MeasureCover]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Cover
DefaultPath=#@#images\Default.png
CoverPath=#@#images\coverGPMDP.png

[MeasureStateButton]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureProgress]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Progress
;AverageSize=20
