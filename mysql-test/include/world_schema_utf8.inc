CREATE TABLE Country (
  Code char(3) NOT NULL default '',
  Name char(52) NOT NULL default '',
  SurfaceArea float(10,2) NOT NULL default '0.00',
  Population int(11) NOT NULL default '0',
  Capital int(11) default NULL,
  PRIMARY KEY  (Code),
  UNIQUE INDEX (Name)
) CHARACTER SET utf8 COLLATE utf8_bin;
CREATE TABLE City (
  ID int(11) NOT NULL auto_increment,
  Name char(35) NOT NULL default '',
  Country char(3) NOT NULL default '',
  Population int(11) NOT NULL default '0',
  PRIMARY KEY  (ID),
  INDEX (Population),
  INDEX (Country) 
) CHARACTER SET utf8 COLLATE utf8_bin;
CREATE TABLE CountryLanguage (
  Country char(3) NOT NULL default '',
  Language char(30) NOT NULL default '',
  Percentage float(3,1) NOT NULL default '0.0',
  PRIMARY KEY  (Country, Language),
  INDEX (Percentage)
) CHARACTER SET utf8 COLLATE utf8_bin;
