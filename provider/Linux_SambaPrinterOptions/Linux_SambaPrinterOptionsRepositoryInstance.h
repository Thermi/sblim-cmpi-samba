/**
 *  Linux_SambaPrinterOptionsRepositoryInstance.h
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


#ifndef Linux_SambaPrinterOptionsRepositoryInstance_h
#define Linux_SambaPrinterOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsRepositoryInstance {
  public:
       Linux_SambaPrinterOptionsRepositoryInstance();
  	
       Linux_SambaPrinterOptionsRepositoryInstance
  	    (const Linux_SambaPrinterOptionsRepositoryInstance& original);
  	   
       Linux_SambaPrinterOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterOptionsRepositoryInstance();
       
       Linux_SambaPrinterOptionsRepositoryInstance& operator=
  	    (const Linux_SambaPrinterOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterOptionsInstanceName& val);        
       const Linux_SambaPrinterOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterOptionsRepositoryInstance* m_elementP;
  	Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterOptionsRepositoryInstance& elementP);
  };
}
#endif

