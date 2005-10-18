/**
 *  Linux_SambaGroupRepositoryInstance.h
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


#ifndef Linux_SambaGroupRepositoryInstance_h
#define Linux_SambaGroupRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupRepositoryInstance {
  public:
       Linux_SambaGroupRepositoryInstance();
  	
       Linux_SambaGroupRepositoryInstance
  	    (const Linux_SambaGroupRepositoryInstance& original);
  	   
       Linux_SambaGroupRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupRepositoryInstance();
       
       Linux_SambaGroupRepositoryInstance& operator=
  	    (const Linux_SambaGroupRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupInstanceName& val);        
       const Linux_SambaGroupInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupRepositoryInstance& original);
       void reset();
       
       Linux_SambaGroupInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupRepositoryInstanceEnumerationElement{
  	Linux_SambaGroupRepositoryInstance* m_elementP;
  	Linux_SambaGroupRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupRepositoryInstanceEnumerationElement();
  	~Linux_SambaGroupRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGroupRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGroupRepositoryInstanceEnumeration(
  	   const Linux_SambaGroupRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupRepositoryInstance& elementP);
  };
}
#endif

