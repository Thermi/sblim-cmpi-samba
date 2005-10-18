/**
 *  Linux_SambaForceUserForGlobalInstance.h
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


#ifndef Linux_SambaForceUserForGlobalInstance_h
#define Linux_SambaForceUserForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForGlobalInstance {
  public:
       Linux_SambaForceUserForGlobalInstance();
  	
       Linux_SambaForceUserForGlobalInstance
  	    (const Linux_SambaForceUserForGlobalInstance& original);
  	   
       Linux_SambaForceUserForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForGlobalInstance();
       
       Linux_SambaForceUserForGlobalInstance& operator=
  	    (const Linux_SambaForceUserForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForGlobalInstanceName& val);        
       const Linux_SambaForceUserForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForGlobalInstance& original);
       void reset();
       
       Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForGlobalInstanceEnumerationElement{
  	Linux_SambaForceUserForGlobalInstance* m_elementP;
  	Linux_SambaForceUserForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForGlobalInstanceEnumerationElement();
  	~Linux_SambaForceUserForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForGlobalInstanceEnumeration(
  	   const Linux_SambaForceUserForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForGlobalInstance& elementP);
  };
}
#endif

