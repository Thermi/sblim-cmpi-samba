/**
 *  Linux_SambaPrinterPrintingForPrinterManualInstance.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterManualInstance_h
#define Linux_SambaPrinterPrintingForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterManualInstance {
  public:
       Linux_SambaPrinterPrintingForPrinterManualInstance();
  	
       Linux_SambaPrinterPrintingForPrinterManualInstance
  	    (const Linux_SambaPrinterPrintingForPrinterManualInstance& original);
  	   
       Linux_SambaPrinterPrintingForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingForPrinterManualInstance();
       
       Linux_SambaPrinterPrintingForPrinterManualInstance& operator=
  	    (const Linux_SambaPrinterPrintingForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingForPrinterInstanceName& val);        
       const Linux_SambaPrinterPrintingForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingForPrinterManualInstance* m_elementP;
  	Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingForPrinterManualInstance& elementP);
  };
}
#endif

