/**
 *  Linux_SambaGlobalPrintingOptionsManualInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaGlobalPrintingOptionsManualInstance_h
#define Linux_SambaGlobalPrintingOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsManualInstance {
  public:
       Linux_SambaGlobalPrintingOptionsManualInstance();
  	
       Linux_SambaGlobalPrintingOptionsManualInstance
  	    (const Linux_SambaGlobalPrintingOptionsManualInstance& original);
  	   
       Linux_SambaGlobalPrintingOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingOptionsManualInstance();
       
       Linux_SambaGlobalPrintingOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalPrintingOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingOptionsInstanceName& val);        
       const Linux_SambaGlobalPrintingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCupsOptionsSet() const;
       void setCupsOptions(const char* val, int makeCopy = 1);
       const char* getCupsOptions() const;

       unsigned int isDefaultDevModeSet() const;
       void setDefaultDevMode(const CMPIBoolean val);
       const CMPIBoolean getDefaultDevMode() const;

       unsigned int isMaxPrintjobsSet() const;
       void setMaxPrintjobs(const CMPIUint64 val);
       const CMPIUint64 getMaxPrintjobs() const;

       unsigned int isMaxReportedPrintjobsSet() const;
       void setMaxReportedPrintjobs(const CMPIUint64 val);
       const CMPIUint64 getMaxReportedPrintjobs() const;

       unsigned int isPrintCommandSet() const;
       void setPrintCommand(const char* val, int makeCopy = 1);
       const char* getPrintCommand() const;

       unsigned int isPrintcapCacheTimeSet() const;
       void setPrintcapCacheTime(const CMPIUint64 val);
       const CMPIUint64 getPrintcapCacheTime() const;

       unsigned int isSystemPrinterNameSet() const;
       void setSystemPrinterName(const char* val, int makeCopy = 1);
       const char* getSystemPrinterName() const;

       unsigned int isUseClientDriverSet() const;
       void setUseClientDriver(const CMPIBoolean val);
       const CMPIBoolean getUseClientDriver() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
       const char* m_CupsOptions;
       CMPIBoolean m_DefaultDevMode;
       CMPIUint64 m_MaxPrintjobs;
       CMPIUint64 m_MaxReportedPrintjobs;
       const char* m_PrintCommand;
       CMPIUint64 m_PrintcapCacheTime;
       const char* m_SystemPrinterName;
       CMPIBoolean m_UseClientDriver;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int CupsOptions:1;
         unsigned int DefaultDevMode:1;
         unsigned int MaxPrintjobs:1;
         unsigned int MaxReportedPrintjobs:1;
         unsigned int PrintCommand:1;
         unsigned int PrintcapCacheTime:1;
         unsigned int SystemPrinterName:1;
         unsigned int UseClientDriver:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingOptionsManualInstance& elementP);
  };
}
#endif

