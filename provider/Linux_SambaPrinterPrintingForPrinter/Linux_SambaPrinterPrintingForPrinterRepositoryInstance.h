/**
 *  Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaPrinterPrintingForPrinterRepositoryInstance_h
#define Linux_SambaPrinterPrintingForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterRepositoryInstance {
  public:
       Linux_SambaPrinterPrintingForPrinterRepositoryInstance();
  	
       Linux_SambaPrinterPrintingForPrinterRepositoryInstance
  	    (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original);
  	   
       Linux_SambaPrinterPrintingForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingForPrinterRepositoryInstance();
       
       Linux_SambaPrinterPrintingForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingForPrinterInstanceName& val);        
       const Linux_SambaPrinterPrintingForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& elementP);
  };
}
#endif

