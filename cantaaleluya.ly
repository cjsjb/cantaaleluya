% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Canta aleluya"
	tagline = "Coro Juvenil San Juan Bosco"
	composer = "Luis Alfredo Díaz"
	copyright = "Copyright © 1976 Luis Alfredo Díaz"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*18  %% 1-18
}
globalTempo = {
	\tempo 4 = 133  \skip 1*18
}
\score {
	\new StaffGroup << % common
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "cantaaleluya-acordes.inc"
		\include "cantaaleluya-soprano.inc"
		\include "cantaaleluya-mezzo.inc"
		\include "cantaaleluya-tenor.inc"

	>> % notes
	\layout { }
} % score
