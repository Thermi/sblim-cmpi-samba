/**
 *  Linux_SambaUserRepositoryInstance.h
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


#ifndef Linux_SambaUserRepositoryInstance_h
#define Linux_SambaUserRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUserInstanceName.h"

namespace genProvider {

  class Linux_SambaUserRepositoryInstance {
  public:
       Linux_SambaUserRepositoryInstance();
  	
       Linux_SambaUserRepositoryInstance
  	    (const Linux_SambaUserRepositoryInstance& original);
  	   
       Linux_SambaUserRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUserRepositoryInstance();
       
       Linux_SambaUserRepositoryInstance& operator=
  	    (const Linux_SambaUserRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUserInstanceName& val);        
       const Linux_SambaUserInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaUserRepositoryInstance& original);
       void reset();
       
       Linux_SambaUserInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUserRepositoryInstanceEnumerationElement{
  	Linux_SambaUserRepositoryInstance* m_elementP;
  	Linux_SambaUserRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUserRepositoryInstanceEnumerationElement();
  	~Linux_SambaUserRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUserRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaUserRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUserRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUserRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUserRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaUserRepositoryInstanceEnumeration(
  	   const Linux_SambaUserRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUserRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUserRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUserRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUserRepositoryInstance& elementP);
  };
}
#endif

