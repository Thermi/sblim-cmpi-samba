/**
 *  Linux_SambaForceUserForShareInstance.h
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


#ifndef Linux_SambaForceUserForShareInstance_h
#define Linux_SambaForceUserForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForShareInstance {
  public:
       Linux_SambaForceUserForShareInstance();
  	
       Linux_SambaForceUserForShareInstance
  	    (const Linux_SambaForceUserForShareInstance& original);
  	   
       Linux_SambaForceUserForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForShareInstance();
       
       Linux_SambaForceUserForShareInstance& operator=
  	    (const Linux_SambaForceUserForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForShareInstanceName& val);        
       const Linux_SambaForceUserForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForShareInstance& original);
       void reset();
       
       Linux_SambaForceUserForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForShareInstanceEnumerationElement{
  	Linux_SambaForceUserForShareInstance* m_elementP;
  	Linux_SambaForceUserForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForShareInstanceEnumerationElement();
  	~Linux_SambaForceUserForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForShareInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForShareInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForShareInstanceEnumeration(
  	   const Linux_SambaForceUserForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForShareInstance& elementP);
  };
}
#endif

