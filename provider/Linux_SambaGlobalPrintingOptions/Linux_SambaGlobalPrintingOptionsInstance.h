/**
 *  Linux_SambaGlobalPrintingOptionsInstance.h
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


#ifndef Linux_SambaGlobalPrintingOptionsInstance_h
#define Linux_SambaGlobalPrintingOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsInstance {
  public:
       Linux_SambaGlobalPrintingOptionsInstance();
  	
       Linux_SambaGlobalPrintingOptionsInstance
  	    (const Linux_SambaGlobalPrintingOptionsInstance& original);
  	   
       Linux_SambaGlobalPrintingOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingOptionsInstance();
       
       Linux_SambaGlobalPrintingOptionsInstance& operator=
  	    (const Linux_SambaGlobalPrintingOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingOptionsInstanceName& val);        
       const Linux_SambaGlobalPrintingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isCupsOptionsSet() const;
       void setCupsOptions(const char* val, int makeCopy = 1);
       const char* getCupsOptions() const;

       unsigned int isDefaultDevModeSet() const;
       void setDefaultDevMode(const CMPIBoolean val);
       const CMPIBoolean getDefaultDevMode() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

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
       void init(const Linux_SambaGlobalPrintingOptionsInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_CupsOptions;
       CMPIBoolean m_DefaultDevMode;
       const char* m_Description;
       const char* m_ElementName;
       CMPIUint64 m_MaxPrintjobs;
       CMPIUint64 m_MaxReportedPrintjobs;
       const char* m_PrintCommand;
       CMPIUint64 m_PrintcapCacheTime;
       const char* m_SystemPrinterName;
       CMPIBoolean m_UseClientDriver;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int CupsOptions:1;
         unsigned int DefaultDevMode:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int MaxPrintjobs:1;
         unsigned int MaxReportedPrintjobs:1;
         unsigned int PrintCommand:1;
         unsigned int PrintcapCacheTime:1;
         unsigned int SystemPrinterName:1;
         unsigned int UseClientDriver:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingOptionsInstance* m_elementP;
  	Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingOptionsInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingOptionsInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingOptionsInstance& elementP);
  };
}
#endif

