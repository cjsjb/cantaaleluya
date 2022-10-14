\context Staff = "Mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key b \minor

		R1*4  |
%% 5
		fis' 2 e' 4 d'  |
		cis' 4 b a cis'  |
		b 1  |
		R1  |
		fis' 2 e' 4 d'  |
%% 10
		cis' 2 d' 4 ( e' )  |
		fis' 1  |
		e' 1  |
		d' 1  |
		d' 1  |
%% 15
		fis' 2 e' 4 d'  |
		cis' 4 b a cis'  |
		d' 1  |
		R1  |
		\bar "|."
	} % Voice
	\new Lyrics \lyricsto "voz-mezzo" {
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor."
		"Can" -- "ta a" -- "le" -- "lu" -- "ya," __ "a" -- "le" -- "lu" -- "ya."
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor."
	} % Lyrics 1
>> % Staff ends
