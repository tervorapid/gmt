/*--------------------------------------------------------------------
 *
 *	Copyright (c) 2005-2022 by the GMT Team (https://www.generic-mapping-tools.org/team.html)
 *	See LICENSE.TXT file for copying and redistribution conditions.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as published by
 *	the Free Software Foundation; version 3 or any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	Contact info: www.generic-mapping-tools.org
 *--------------------------------------------------------------------*/
/* MGD-77 Data Record Field Defaults:
 * Paul Wessel and M. T. Hamilton (nee Chandler) *
 *
		   Name,                          Abbrev,     Start,  Length,  FortranCode,   Factor,   readMGD77,   order,   printMGD77,   printVALS,   Not_given    */
		{ "Data Record Type",                      "drt",         1U,	   1,        "int",        1,       "%1d",       1,        "%1d",        NULL,           "9" },
		{ "Time Zone Correction",                   "tz",        10U,	   3,        "int",        1,      "%03d",       3,      "%+03d",        NULL,         "+99" },
		{ "Year",                                 "year",        13U,	   4,        "int",        1,      "%04d",       4,       "%04d",        NULL,        "9999" },
		{ "Month",                               "month",        17U,	   2,        "int",        1,      "%02d",       5,       "%02d",        NULL,          "99" },
		{ "Day of Month",                          "day",        19U,	   2,        "int",        1,      "%02d",       6,       "%02d",        NULL,          "99" },
		{ "Hour",                                 "hour",        21U,	   2,        "int",        1,      "%02d",       7,       "%02d",        NULL,          "99" },
		{ "Minutes",                               "min",        23U,	   5,       "real",     1000,      "%05d",       8,       "%05d",        NULL,       "99999" },
		{ "Latitude",                              "lat",        28U,	   8,       "real",   100000,      "%08d",       9,      "%+08d",     "%9.5f",    "+9999999" },
		{ "Longitude",                             "lon",        36U,	   9,       "real",   100000,      "%09d",      10,      "%+09d",    "%10.5f",   "+99999999" },
		{ "Position Type Code",                    "ptc",        45U,	   1,        "int",        1,       "%1d",      11,        "%1d",        NULL,           "9" },
		{ "Bathymetry Two-Way Travel-Time",        "twt",        46U,	   6,       "real",    10000,      "%06d",      12,       "%06d",     "%7.4f",      "999999" },
		{ "Bathymetry Corrected Depth",          "depth",        52U,	   6,       "real",       10,      "%06d",      13,       "%06d",     "%7.1f",      "999999" },
		{ "Bathymetry Correction Code",            "bcc",        58U,	   2,        "int",        1,      "%02d",      14,       "%02d",        NULL,          "99" },
		{ "Bathymetry Type Code",                  "btc",        60U,	   1,        "int",        1,       "%1d",      15,        "%1d",        NULL,           "9" },
		{ "Magnetics First Sensor Total Field",   "mtf1",        61U,	   6,       "real",       10,      "%06d",      16,       "%06d",     "%7.1f",      "999999" },
		{ "Magnetics Second Sensor Total Field",  "mtf2",        67U,	   6,       "real",       10,      "%06d",      17,       "%06d",     "%7.1f",      "999999" },
		{ "Magnetics Residual Field", 	           "mag",        73U,	   6,       "real",       10,      "%06d",      18,      "%+06d",     "%7.1f",      "+99999" },
		{ "Magnetics Sensor For Residual Field", "msens",        79U,	   1,        "int",        1,       "%1d",      19,        "%1d",        NULL,           "9" },
		{ "Magnetics Diurnal Correction",         "diur",        80U,	   5,       "real",       10,      "%05d",      20,      "%+05d",     "%6.1f",       "+9999" },
		{ "Magnetics Sensor Depth or Altitude",    "msd",        85U,	   6,        "int",        1,      "%06d",      21,      "%+06d",       "%7d",      "+99999" },
		{ "Gravity Observed",                     "gobs",        91U,	   7,       "real",       10,      "%07d",      22,       "%07d",     "%8.1f",     "9999999" },
		{ "Gravity Eotvos Correction",             "eot",        98U,	   6,       "real",       10,      "%06d",      23,      "%+06d",     "%7.1f",      "+99999" },
		{ "Gravity Free-Air Anomaly",              "faa",       104U,	   5,       "real",       10,      "%05d",      24,      "%+05d",     "%6.1f",       "+9999" },
		{ "Navigation Quality Code",               "nqc",       120U,	   1,        "int",        1,       "%1d",      27,        "%1d",        NULL,           "9" },
		{ "Survey ID",                              "id",         2U,	   8,       "char",    false,       "%8s",       2,        "%-8s",       NULL,    "99999999" },
		{ "Seismic Line Number",                   "sln",       109U,	   5,       "char",    false,       "%5s",      25,        "%-5s",       NULL,       "99999" },
		{ "Seismic Shot-Point Number",            "sspn",       114U,	   6,       "char",    false,       "%6s",      26,        "%-6s",       NULL,      "999999" },
		{ "GMT Time",                             "time",         0U,	   0,       "real",        1,       "%1d",       0,        "%1d",        NULL,           "9" },
		{ "Bathymetry Quality Code",               "bqc",         0U,	   0,        "int",        1,       "%1d",       0,        "%1d",        NULL,           "9" },
		{ "Magnetics Quality Code",                "mqc",         0U,	   0,        "int",        1,       "%1d",       0,        "%1d",        NULL,           "9" },
		{ "Gravity Quality Code",                  "gqc",         0U,	   0,        "int",        1,       "%1d",       0,        "%1d",        NULL,           "9" }
