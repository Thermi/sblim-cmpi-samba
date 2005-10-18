/**
 *  Linux_SambaPrinterSecurityOptionsRepositoryInstance.h
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


#ifndef Linux_SambaPrinterSecurityOptionsRepositoryInstance_h
#define Linux_SambaPrinterSecurityOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsRepositoryInstance {
  public:
       Linux_SambaPrinterSecurityOptionsRepositoryInstance();
  	
       Linux_SambaPrinterSecurityOptionsRepositoryInstance
  	    (const Linux_SambaPrinterSecurityOptionsRepositoryInstance& original);
  	   
       Linux_SambaPrinterSecurityOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityOptionsRepositoryInstance();
       
       Linux_SambaPrinterSecurityOptionsRepositoryInstance& operator=
  	    (const Linux_SambaPrinterSecurityOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityOptionsInstanceName& val);        
       const Linux_SambaPrinterSecurityOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityOptionsRepositoryInstance* m_elementP;
  	Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityOptionsRepositoryInstance& elementP);
  };
}
#endif

