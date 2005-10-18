/**
 *  Linux_SambaPrinterPrintingOptionsInstance.h
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


#ifndef Linux_SambaPrinterPrintingOptionsInstance_h
#define Linux_SambaPrinterPrintingOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsInstance {
  public:
       Linux_SambaPrinterPrintingOptionsInstance();
  	
       Linux_SambaPrinterPrintingOptionsInstance
  	    (const Linux_SambaPrinterPrintingOptionsInstance& original);
  	   
       Linux_SambaPrinterPrintingOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingOptionsInstance();
       
       Linux_SambaPrinterPrintingOptionsInstance& operator=
  	    (const Linux_SambaPrinterPrintingOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingOptionsInstanceName& val);        
       const Linux_SambaPrinterPrintingOptionsInstanceName&
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

       unsigned int isUseClientDriverSet() const;
       void setUseClientDriver(const CMPIBoolean val);
       const CMPIBoolean getUseClientDriver() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingOptionsInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_CupsOptions;
       CMPIBoolean m_DefaultDevMode;
       const char* m_Description;
       const char* m_ElementName;
       CMPIUint64 m_MaxPrintjobs;
       CMPIUint64 m_MaxReportedPrintjobs;
       const char* m_PrintCommand;
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
         unsigned int UseClientDriver:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingOptionsInstance* m_elementP;
  	Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingOptionsInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingOptionsInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingOptionsInstance& elementP);
  };
}
#endif

