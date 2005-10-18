/**
 *  Linux_SambaForceGroupForShareInstance.h
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


#ifndef Linux_SambaForceGroupForShareInstance_h
#define Linux_SambaForceGroupForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareInstance {
  public:
       Linux_SambaForceGroupForShareInstance();
  	
       Linux_SambaForceGroupForShareInstance
  	    (const Linux_SambaForceGroupForShareInstance& original);
  	   
       Linux_SambaForceGroupForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForShareInstance();
       
       Linux_SambaForceGroupForShareInstance& operator=
  	    (const Linux_SambaForceGroupForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForShareInstanceName& val);        
       const Linux_SambaForceGroupForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForShareInstance& original);
       void reset();
       
       Linux_SambaForceGroupForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForShareInstanceEnumerationElement{
  	Linux_SambaForceGroupForShareInstance* m_elementP;
  	Linux_SambaForceGroupForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForShareInstanceEnumerationElement();
  	~Linux_SambaForceGroupForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForShareInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForShareInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForShareInstanceEnumeration(
  	   const Linux_SambaForceGroupForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForShareInstance& elementP);
  };
}
#endif

