/**
 *  Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterRepositoryInstance_h
#define Linux_SambaPrinterSecurityForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterRepositoryInstance {
  public:
       Linux_SambaPrinterSecurityForPrinterRepositoryInstance();
  	
       Linux_SambaPrinterSecurityForPrinterRepositoryInstance
  	    (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original);
  	   
       Linux_SambaPrinterSecurityForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForPrinterRepositoryInstance();
       
       Linux_SambaPrinterSecurityForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForPrinterInstanceName& val);        
       const Linux_SambaPrinterSecurityForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& elementP);
  };
}
#endif

