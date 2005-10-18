/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h
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


#ifndef Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance_h
#define Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance {
  public:
       Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance();
  	
       Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original);
  	   
       Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance();
       
       Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& operator=
  	    (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val);        
       const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original);
       void reset();
       
       Linux_SambaGlobalFileNameHandlingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance* m_elementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& elementP);
  };
}
#endif

