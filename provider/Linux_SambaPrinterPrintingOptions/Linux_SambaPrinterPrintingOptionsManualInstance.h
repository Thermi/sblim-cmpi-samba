/**
 *  Linux_SambaPrinterPrintingOptionsManualInstance.h
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


#ifndef Linux_SambaPrinterPrintingOptionsManualInstance_h
#define Linux_SambaPrinterPrintingOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsManualInstance {
  public:
       Linux_SambaPrinterPrintingOptionsManualInstance();
  	
       Linux_SambaPrinterPrintingOptionsManualInstance
  	    (const Linux_SambaPrinterPrintingOptionsManualInstance& original);
  	   
       Linux_SambaPrinterPrintingOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingOptionsManualInstance();
       
       Linux_SambaPrinterPrintingOptionsManualInstance& operator=
  	    (const Linux_SambaPrinterPrintingOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingOptionsInstanceName& val);        
       const Linux_SambaPrinterPrintingOptionsInstanceName&
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

       unsigned int isUseClientDriverSet() const;
       void setUseClientDriver(const CMPIBoolean val);
       const CMPIBoolean getUseClientDriver() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingOptionsManualInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
       const char* m_CupsOptions;
       CMPIBoolean m_DefaultDevMode;
       CMPIUint64 m_MaxPrintjobs;
       CMPIUint64 m_MaxReportedPrintjobs;
       const char* m_PrintCommand;
       CMPIBoolean m_UseClientDriver;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int CupsOptions:1;
         unsigned int DefaultDevMode:1;
         unsigned int MaxPrintjobs:1;
         unsigned int MaxReportedPrintjobs:1;
         unsigned int PrintCommand:1;
         unsigned int UseClientDriver:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingOptionsManualInstance* m_elementP;
  	Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingOptionsManualInstance& elementP);
  };
}
#endif

