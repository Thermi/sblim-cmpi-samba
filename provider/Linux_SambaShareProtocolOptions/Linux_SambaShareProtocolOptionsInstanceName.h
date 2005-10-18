/**
 *  Linux_SambaShareProtocolOptionsInstanceName.h
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


#ifndef Linux_SambaShareProtocolOptionsInstanceName_h
#define Linux_SambaShareProtocolOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsInstanceName {
  public:
       Linux_SambaShareProtocolOptionsInstanceName();
  	
       Linux_SambaShareProtocolOptionsInstanceName
  	    (const Linux_SambaShareProtocolOptionsInstanceName& original);
  	   
       Linux_SambaShareProtocolOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareProtocolOptionsInstanceName();
       
       Linux_SambaShareProtocolOptionsInstanceName& operator=
  	    (const Linux_SambaShareProtocolOptionsInstanceName& original);
       
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
       void init(const Linux_SambaShareProtocolOptionsInstanceName& original);
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
  
  
  struct Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement{
  	Linux_SambaShareProtocolOptionsInstanceName* m_elementP;
  	Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareProtocolOptionsInstanceNameEnumeration(
  	   const Linux_SambaShareProtocolOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareProtocolOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

