/**
 *  Linux_SambaPrinterForServiceRepositoryInstance.h
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


#ifndef Linux_SambaPrinterForServiceRepositoryInstance_h
#define Linux_SambaPrinterForServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceRepositoryInstance {
  public:
       Linux_SambaPrinterForServiceRepositoryInstance();
  	
       Linux_SambaPrinterForServiceRepositoryInstance
  	    (const Linux_SambaPrinterForServiceRepositoryInstance& original);
  	   
       Linux_SambaPrinterForServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterForServiceRepositoryInstance();
       
       Linux_SambaPrinterForServiceRepositoryInstance& operator=
  	    (const Linux_SambaPrinterForServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterForServiceInstanceName& val);        
       const Linux_SambaPrinterForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterForServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaPrinterForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaPrinterForServiceRepositoryInstance* m_elementP;
  	Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterForServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterForServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaPrinterForServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaPrinterForServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterForServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterForServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterForServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterForServiceRepositoryInstance& elementP);
  };
}
#endif

