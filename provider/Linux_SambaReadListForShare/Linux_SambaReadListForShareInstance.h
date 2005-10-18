/**
 *  Linux_SambaReadListForShareInstance.h
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


#ifndef Linux_SambaReadListForShareInstance_h
#define Linux_SambaReadListForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForShareInstance {
  public:
       Linux_SambaReadListForShareInstance();
  	
       Linux_SambaReadListForShareInstance
  	    (const Linux_SambaReadListForShareInstance& original);
  	   
       Linux_SambaReadListForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForShareInstance();
       
       Linux_SambaReadListForShareInstance& operator=
  	    (const Linux_SambaReadListForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForShareInstanceName& val);        
       const Linux_SambaReadListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForShareInstance& original);
       void reset();
       
       Linux_SambaReadListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForShareInstanceEnumerationElement{
  	Linux_SambaReadListForShareInstance* m_elementP;
  	Linux_SambaReadListForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForShareInstanceEnumerationElement();
  	~Linux_SambaReadListForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForShareInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForShareInstanceEnumeration();
  	  
  	  Linux_SambaReadListForShareInstanceEnumeration(
  	   const Linux_SambaReadListForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForShareInstance& elementP);
  };
}
#endif

