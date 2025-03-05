; AUTHOR: CHARLIE TURNER
; VERSION: 1.0
; INFO: THE MEASURES FOR ROUNDSOUND WHEN SPOTIFY IS BEING USED
[Variables]
;Just includes variables used for the skin :)
@Include=Settings.inc

[MeasureCover]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=AlbumArt
Res=640
DefaultPath=#@#Images/Default.png
CoverPath=#@#Images/Cover.png

[MeasureTitle]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=TrackName

[MeasureArtist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName

[MeasureTitle]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName

[MeasureProgress]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress

[MeasureState]
Measure=Plugin
Plugin=NowPlaying
Playername=Spotify
PlayerType=State

[MeasureStateButton]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
Substitute="0":"Play","1":"Pause","2":"Play"
