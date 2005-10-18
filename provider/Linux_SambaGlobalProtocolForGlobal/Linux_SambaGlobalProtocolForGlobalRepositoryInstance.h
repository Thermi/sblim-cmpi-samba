/**
 *  Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGlobalProtocolForGlobalRepositoryInstance_h
#define Linux_SambaGlobalProtocolForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalRepositoryInstance {
  public:
       Linux_SambaGlobalProtocolForGlobalRepositoryInstance();
  	
       Linux_SambaGlobalProtocolForGlobalRepositoryInstance
  	    (const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGlobalProtocolForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolForGlobalRepositoryInstance();
       
       Linux_SambaGlobalProtocolForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolForGlobalInstanceName& val);        
       const Linux_SambaGlobalProtocolForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& elementP);
  };
}
#endif

