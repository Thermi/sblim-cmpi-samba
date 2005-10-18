/**
 *  Linux_SambaGlobalPrintingForGlobalInstanceName.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalInstanceName_h
#define Linux_SambaGlobalPrintingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalInstanceName {
  public:
       Linux_SambaGlobalPrintingForGlobalInstanceName();
  	
       Linux_SambaGlobalPrintingForGlobalInstanceName
  	    (const Linux_SambaGlobalPrintingForGlobalInstanceName& original);
  	   
       Linux_SambaGlobalPrintingForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalPrintingForGlobalInstanceName();
       
       Linux_SambaGlobalPrintingForGlobalInstanceName& operator=
  	    (const Linux_SambaGlobalPrintingForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaGlobalPrintingOptionsInstanceName& val);
       const Linux_SambaGlobalPrintingOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalPrintingOptionsInstanceName m_SettingData;
       Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGlobalPrintingForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalPrintingForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

