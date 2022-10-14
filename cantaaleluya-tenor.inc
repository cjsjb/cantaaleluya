\context Staff = "Tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key b \minor

		R1*2  |
		fis 2 e 4 d  |
		cis 4 b, a, cis  |
		%% 5
		b, 1  |
		R1  |
		fis 2 e 4 fis  |
		a 4 fis r2  |
		fis 2 fis 4 gis  |
		%% 10
		ais 2 b 4 ( cis' )  |
		d' 1  |
		cis' 1  |
		b 1  |
		a 4 ( d' cis' a )  |
		%% 15
		d' 2 cis' 4 b  |
		a 4 fis e fis  |
		fis 1  |
		R1  |
		\bar "|."
	} % Voice
	\new Lyrics \lyricsto "voz-tenor" {
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor."
		"Can" -- "ta a" -- "le" -- "lu" -- "ya..."
		"Can" -- "ta a" -- "le" -- "lu" -- "ya," __ "a" -- "le" -- "lu" -- "ya." __
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor."
	} % Lyrics 1
>> % Staff ends
