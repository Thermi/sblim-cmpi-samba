/**
 *  Linux_SambaServiceRepositoryInstance.h
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


#ifndef Linux_SambaServiceRepositoryInstance_h
#define Linux_SambaServiceRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceRepositoryInstance {
  public:
       Linux_SambaServiceRepositoryInstance();
  	
       Linux_SambaServiceRepositoryInstance
  	    (const Linux_SambaServiceRepositoryInstance& original);
  	   
       Linux_SambaServiceRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceRepositoryInstance();
       
       Linux_SambaServiceRepositoryInstance& operator=
  	    (const Linux_SambaServiceRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceInstanceName& val);        
       const Linux_SambaServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceRepositoryInstance& original);
       void reset();
       
       Linux_SambaServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceRepositoryInstanceEnumerationElement{
  	Linux_SambaServiceRepositoryInstance* m_elementP;
  	Linux_SambaServiceRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceRepositoryInstanceEnumerationElement();
  	~Linux_SambaServiceRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaServiceRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaServiceRepositoryInstanceEnumeration(
  	   const Linux_SambaServiceRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceRepositoryInstance& elementP);
  };
}
#endif

