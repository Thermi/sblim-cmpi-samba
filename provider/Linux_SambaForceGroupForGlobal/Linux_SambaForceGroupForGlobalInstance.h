/**
 *  Linux_SambaForceGroupForGlobalInstance.h
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


#ifndef Linux_SambaForceGroupForGlobalInstance_h
#define Linux_SambaForceGroupForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalInstance {
  public:
       Linux_SambaForceGroupForGlobalInstance();
  	
       Linux_SambaForceGroupForGlobalInstance
  	    (const Linux_SambaForceGroupForGlobalInstance& original);
  	   
       Linux_SambaForceGroupForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForGlobalInstance();
       
       Linux_SambaForceGroupForGlobalInstance& operator=
  	    (const Linux_SambaForceGroupForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForGlobalInstanceName& val);        
       const Linux_SambaForceGroupForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForGlobalInstance& original);
       void reset();
       
       Linux_SambaForceGroupForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForGlobalInstanceEnumerationElement{
  	Linux_SambaForceGroupForGlobalInstance* m_elementP;
  	Linux_SambaForceGroupForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForGlobalInstanceEnumerationElement();
  	~Linux_SambaForceGroupForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForGlobalInstanceEnumeration(
  	   const Linux_SambaForceGroupForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForGlobalInstance& elementP);
  };
}
#endif

