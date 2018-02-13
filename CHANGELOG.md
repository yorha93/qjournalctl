## Changelog

#### v0.5 (2018, Feb. 13)
* `make install` creates a .desktop file in `/usr/share/applications/` (#7)
* Added autocompletion for filtering by syslog identifiers. When loading
  the journal, a list of all identifiers is created (even if you're
  following the journal in realtime) and QJournalctl suggests you
  already appeared identifiers when filtering. (#9)
* Compile against C++11 by default (#10)
* Press [Ctrl][F] to search the journal for a normal string or a RegExp (#11)
* Added a button to export the filtered journal or only the current selection (#12)
* Added more keyboard shortcuts in the main window (Ctrl+A, Ctrl+B, Ctrl+L)


#### v0.4 (2017, Oct. 22)
* Added the possibility to reverse the journalctl output
* Display the log size additionally in bytes
* Added this changelog to the about dialog


#### v0.3 (2016, Sep. 17)
* Show an error message if no boots were found (#2)
* Implemented a "Show current boot" button (#3)
* UI improvements


#### v0.21 (2016, Aug. 28)
* Created a icon for QJournalctl
* Add a quit shortcut and the corresponding menu item (#1)
* Mentioned the contributions of @dopsi


#### v0.2 (2016, Aug. 13) 
* UI improvements
* Filtering the journal by identifiers


#### v0.1 (2016, Aug. 07,  initial release)
* Listing all boots
* Showing the journal of a specific boot
* Showing the complete journal
* Filter by date or priority