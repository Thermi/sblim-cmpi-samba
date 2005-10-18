/**
 *  Linux_SambaCommonSecurityForShareManualInstance.h
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


#ifndef Linux_SambaCommonSecurityForShareManualInstance_h
#define Linux_SambaCommonSecurityForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareManualInstance {
  public:
       Linux_SambaCommonSecurityForShareManualInstance();
  	
       Linux_SambaCommonSecurityForShareManualInstance
  	    (const Linux_SambaCommonSecurityForShareManualInstance& original);
  	   
       Linux_SambaCommonSecurityForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForShareManualInstance();
       
       Linux_SambaCommonSecurityForShareManualInstance& operator=
  	    (const Linux_SambaCommonSecurityForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForShareInstanceName& val);        
       const Linux_SambaCommonSecurityForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForShareManualInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForShareManualInstance* m_elementP;
  	Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForShareManualInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForShareManualInstance& elementP);
  };
}
#endif

