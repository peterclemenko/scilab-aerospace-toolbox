// Copyright (C) 2010 - DIGITEO - Clément DAVID
//
// This file is released under the 3-clause BSD license. See COPYING-BSD.

function subdemolist = demo_gateway()

  demopath = get_absolute_file_path("xcos_toolbox_aerospace.dem.gateway.sce");
  subdemolist = []; // add demos here
  subdemolist(:,2) = demopath + subdemolist(:,2);
 
endfunction

subdemolist = demo_gateway();
clear demo_gateway; // remove demo_gateway on stack
