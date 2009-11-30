\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 2" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key b \minor

		R1*2  |
		fis' 2 e' 4 d'  |
		cis' 4 b a cis'  |
		%% 5
		b 1 ~  |
		b 2. r4  |
		fis' 2 e' 4 fis'  |
		a' 4 fis' e' fis'  |
		fis' 1 ~  |
		%% 10
		fis' 2. r4  |
		b' 2 cis'' 4 d''  |
		cis'' 4 ( a' ) fis' 2  |
		g' 2 a' 4 b'  |
		a' 4 ( fis' ) d' 2  |
		%% 15
		fis' 2 e' 4 d'  |
		cis' 4 b a cis'  |
		b 1  |
		R1  |
		\bar "|."
	} % Voice
	\lyricsto "voice 2" \new Lyrics \lyricmode {
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor." __
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor." __
		"Can" -- "ta a" -- "le" -- "lu" __ "ya,"
		"can" -- "ta_a" -- "le" -- "lu" __ "ya."
		"Can" -- "ta a" -- "le" -- "lu" -- "ya" "al" "Se" -- "ñor."
	} % Lyrics 1
>> % Staff ends
