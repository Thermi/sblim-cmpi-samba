/**
 *  Linux_SambaShareFileNameHandlingOptionsInstanceName.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsInstanceName_h
#define Linux_SambaShareFileNameHandlingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsInstanceName {
  public:
       Linux_SambaShareFileNameHandlingOptionsInstanceName();
  	
       Linux_SambaShareFileNameHandlingOptionsInstanceName
  	    (const Linux_SambaShareFileNameHandlingOptionsInstanceName& original);
  	   
       Linux_SambaShareFileNameHandlingOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareFileNameHandlingOptionsInstanceName();
       
       Linux_SambaShareFileNameHandlingOptionsInstanceName& operator=
  	    (const Linux_SambaShareFileNameHandlingOptionsInstanceName& original);
       
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
       void init(const Linux_SambaShareFileNameHandlingOptionsInstanceName& original);
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
  
  
  struct Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement{
  	Linux_SambaShareFileNameHandlingOptionsInstanceName* m_elementP;
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(
  	   const Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareFileNameHandlingOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

