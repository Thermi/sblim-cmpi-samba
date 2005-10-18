/**
 *  Linux_SambaShareOptionsInstanceName.h
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


#ifndef Linux_SambaShareOptionsInstanceName_h
#define Linux_SambaShareOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaShareOptionsInstanceName {
  public:
       Linux_SambaShareOptionsInstanceName();
  	
       Linux_SambaShareOptionsInstanceName
  	    (const Linux_SambaShareOptionsInstanceName& original);
  	   
       Linux_SambaShareOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareOptionsInstanceName();
       
       Linux_SambaShareOptionsInstanceName& operator=
  	    (const Linux_SambaShareOptionsInstanceName& original);
       
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
       void init(const Linux_SambaShareOptionsInstanceName& original);
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
  
  
  struct Linux_SambaShareOptionsInstanceNameEnumerationElement{
  	Linux_SambaShareOptionsInstanceName* m_elementP;
  	Linux_SambaShareOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaShareOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareOptionsInstanceNameEnumeration(
  	   const Linux_SambaShareOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

