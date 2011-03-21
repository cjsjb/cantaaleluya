\context Staff = "Mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 3" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key b \minor

		R1*4  |
		%% 5
		fis' 2 e' 4 d'  |
		cis' 4 b a cis'  |
		b 1 ~  |
		b 2. r4  |
		R1*10  |
		\bar "|."
	} % Voice
>> % Staff ends
