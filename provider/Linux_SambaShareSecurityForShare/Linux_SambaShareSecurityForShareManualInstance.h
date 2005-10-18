/**
 *  Linux_SambaShareSecurityForShareManualInstance.h
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


#ifndef Linux_SambaShareSecurityForShareManualInstance_h
#define Linux_SambaShareSecurityForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareManualInstance {
  public:
       Linux_SambaShareSecurityForShareManualInstance();
  	
       Linux_SambaShareSecurityForShareManualInstance
  	    (const Linux_SambaShareSecurityForShareManualInstance& original);
  	   
       Linux_SambaShareSecurityForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForShareManualInstance();
       
       Linux_SambaShareSecurityForShareManualInstance& operator=
  	    (const Linux_SambaShareSecurityForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForShareInstanceName& val);        
       const Linux_SambaShareSecurityForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForShareManualInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForShareManualInstanceEnumerationElement{
  	Linux_SambaShareSecurityForShareManualInstance* m_elementP;
  	Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForShareManualInstanceEnumeration(
  	   const Linux_SambaShareSecurityForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForShareManualInstance& elementP);
  };
}
#endif

