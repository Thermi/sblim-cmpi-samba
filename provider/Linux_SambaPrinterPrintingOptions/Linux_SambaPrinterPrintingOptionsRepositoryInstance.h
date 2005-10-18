/**
 *  Linux_SambaPrinterPrintingOptionsRepositoryInstance.h
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


#ifndef Linux_SambaPrinterPrintingOptionsRepositoryInstance_h
#define Linux_SambaPrinterPrintingOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsRepositoryInstance {
  public:
       Linux_SambaPrinterPrintingOptionsRepositoryInstance();
  	
       Linux_SambaPrinterPrintingOptionsRepositoryInstance
  	    (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original);
  	   
       Linux_SambaPrinterPrintingOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterPrintingOptionsRepositoryInstance();
       
       Linux_SambaPrinterPrintingOptionsRepositoryInstance& operator=
  	    (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterPrintingOptionsInstanceName& val);        
       const Linux_SambaPrinterPrintingOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterPrintingOptionsRepositoryInstance* m_elementP;
  	Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterPrintingOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterPrintingOptionsRepositoryInstance& elementP);
  };
}
#endif

