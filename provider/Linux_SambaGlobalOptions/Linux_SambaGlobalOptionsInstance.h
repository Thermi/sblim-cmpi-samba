/**
 *  Linux_SambaGlobalOptionsInstance.h
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


#ifndef Linux_SambaGlobalOptionsInstance_h
#define Linux_SambaGlobalOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalOptionsInstance {
  public:
       Linux_SambaGlobalOptionsInstance();
  	
       Linux_SambaGlobalOptionsInstance
  	    (const Linux_SambaGlobalOptionsInstance& original);
  	   
       Linux_SambaGlobalOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalOptionsInstance();
       
       Linux_SambaGlobalOptionsInstance& operator=
  	    (const Linux_SambaGlobalOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalOptionsInstanceName& val);        
       const Linux_SambaGlobalOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBindInterfacesOnlySet() const;
       void setBindInterfacesOnly(const CMPIBoolean val);
       const CMPIBoolean getBindInterfacesOnly() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isInterfacesSet() const;
       void setInterfaces(const char* val, int makeCopy = 1);
       const char* getInterfaces() const;

       unsigned int isNetbiosAliasSet() const;
       void setNetbiosAlias(const char* val, int makeCopy = 1);
       const char* getNetbiosAlias() const;

       unsigned int isNetbiosNameSet() const;
       void setNetbiosName(const char* val, int makeCopy = 1);
       const char* getNetbiosName() const;

       unsigned int isPrintableSet() const;
       void setPrintable(const CMPIBoolean val);
       const CMPIBoolean getPrintable() const;

       unsigned int isServerStringSet() const;
       void setServerString(const char* val, int makeCopy = 1);
       const char* getServerString() const;

       unsigned int isWorkgroupSet() const;
       void setWorkgroup(const char* val, int makeCopy = 1);
       const char* getWorkgroup() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalOptionsInstance& original);
       void reset();
       
       Linux_SambaGlobalOptionsInstanceName m_instanceName;
       CMPIBoolean m_BindInterfacesOnly;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       const char* m_Interfaces;
       const char* m_NetbiosAlias;
       const char* m_NetbiosName;
       CMPIBoolean m_Printable;
       const char* m_ServerString;
       const char* m_Workgroup;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int BindInterfacesOnly:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int Interfaces:1;
         unsigned int NetbiosAlias:1;
         unsigned int NetbiosName:1;
         unsigned int Printable:1;
         unsigned int ServerString:1;
         unsigned int Workgroup:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalOptionsInstanceEnumerationElement{
  	Linux_SambaGlobalOptionsInstance* m_elementP;
  	Linux_SambaGlobalOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalOptionsInstanceEnumerationElement();
  	~Linux_SambaGlobalOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalOptionsInstanceEnumeration();
  	  
  	  Linux_SambaGlobalOptionsInstanceEnumeration(
  	   const Linux_SambaGlobalOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalOptionsInstance& elementP);
  };
}
#endif

