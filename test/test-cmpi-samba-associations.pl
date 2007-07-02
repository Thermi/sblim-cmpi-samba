#!/usr/bin/perl


#############  Initial
 $testsuite_dir = "/usr/share/sblim-testsuite/";
 $testsuite_xmldir = $testsuite_dir."/xml/";


#############  Read CIM Request XML files ###############################################
 print "\n Reading directory: $testsuite_xmldir";
 opendir(DIRHANDLE, $testsuite_xmldir) or die "\n ERROR: Can't open dir: $testsuite_xmldir\n";
 @allxmlfiles = grep { /Linux_Samba[a-zA-Z]+.xml/ } readdir DIRHANDLE;
 close(DIRHANDLE);


#############  CI Test Statistics ########################################################
 my $total_classes = 0;
 my $failed  = 0;
 my $passed  = 0; 

#############  Perform Tests #############################################################
 open(RESULTS_FILEHANDLE,">".$testsuite_xmldir."/ci_test_results") or die "\n Error: Couldn't create file: $testsuite_xmldir/ci_test_results\n";

 foreach my $file (@allxmlfiles) {

   $total_classes = $total_classes + 1;
   $xmlfile = $testsuite_xmldir.$file;

   print "\n\n#####  Executing CI test for class $file "; 
   print RESULTS_FILEHANDLE "\n\n#####  Executing CI test for class $file "; 
           $command = "wbemexec  ".$xmlfile;
#          print "\n executing command: $command ............";
          print RESULTS_FILEHANDLE "\n executing command: $command .......";
           @result=`$command 2>&1`;
#          print "@result";

  foreach my $result_line (@result) {
    if ( $result_line =~ /ERROR CODE/ ||
         $result_line =~ /Validation error/ ||
         $result_line =~ /Validation\%20error/ ) {

      $failed = $failed + 1;
      print "... failed\n";
      print RESULTS_FILEHANDLE "... failed\n";
#    print "  Error : $result_line";

    }
  }
  print "\n--------------------------------------------------------------------------------";
  print RESULTS_FILEHANDLE "\n--------------------------------------------------------------------------------";
 }

##############  Tabulate Results #########################################################
 $passed = $total_classes-$failed;

 print  "\n###############################################################################";
 print  "\n                      Total No of Create Instance tests run : $total_classes";
 print  "\n                      No. of Testcases passed               : $passed";
 print  "\n                      No. of Testcases failed               : $failed";
 print  "\n###############################################################################\n\n";


 print RESULTS_FILEHANDLE "\n###############################################################################";
 print RESULTS_FILEHANDLE "\n             Total No of Create Instance tests run : $total_classes";
 print RESULTS_FILEHANDLE "\n             No. of Testcases passed               : $passed";
 print RESULTS_FILEHANDLE "\n             No. of Testcases failed               : $failed";
 print RESULTS_FILEHANDLE "\n###############################################################################\n\n";

 close(RESULTS_FILEHANDLE);
