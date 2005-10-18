/**
 *  Linux_SambaWriteListForShareInstance.h
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


#ifndef Linux_SambaWriteListForShareInstance_h
#define Linux_SambaWriteListForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForShareInstance {
  public:
       Linux_SambaWriteListForShareInstance();
  	
       Linux_SambaWriteListForShareInstance
  	    (const Linux_SambaWriteListForShareInstance& original);
  	   
       Linux_SambaWriteListForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForShareInstance();
       
       Linux_SambaWriteListForShareInstance& operator=
  	    (const Linux_SambaWriteListForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForShareInstanceName& val);        
       const Linux_SambaWriteListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForShareInstance& original);
       void reset();
       
       Linux_SambaWriteListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForShareInstanceEnumerationElement{
  	Linux_SambaWriteListForShareInstance* m_elementP;
  	Linux_SambaWriteListForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForShareInstanceEnumerationElement();
  	~Linux_SambaWriteListForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForShareInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForShareInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForShareInstanceEnumeration(
  	   const Linux_SambaWriteListForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForShareInstance& elementP);
  };
}
#endif

