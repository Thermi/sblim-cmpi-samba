/**
 *  Linux_SambaGlobalProtocolOptionsInstanceName.h
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


#ifndef Linux_SambaGlobalProtocolOptionsInstanceName_h
#define Linux_SambaGlobalProtocolOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsInstanceName {
  public:
       Linux_SambaGlobalProtocolOptionsInstanceName();
  	
       Linux_SambaGlobalProtocolOptionsInstanceName
  	    (const Linux_SambaGlobalProtocolOptionsInstanceName& original);
  	   
       Linux_SambaGlobalProtocolOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalProtocolOptionsInstanceName();
       
       Linux_SambaGlobalProtocolOptionsInstanceName& operator=
  	    (const Linux_SambaGlobalProtocolOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement{
  	Linux_SambaGlobalProtocolOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration(
  	   const Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalProtocolOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

