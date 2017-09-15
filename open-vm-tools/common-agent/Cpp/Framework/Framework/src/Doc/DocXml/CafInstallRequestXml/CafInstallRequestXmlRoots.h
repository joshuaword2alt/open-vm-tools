/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CafInstallRequestXmlRoots_h_
#define CafInstallRequestXmlRoots_h_

namespace Caf {

	namespace XmlRoots {

		/// Saves the InstallRequestDoc to a string.
		std::string CAFINSTALLREQUESTXML_LINKAGE saveInstallRequestToString(
			const SmartPtrCInstallRequestDoc installRequestDoc);

		/// Parses the InstallPackageSpecDoc from the string.
		SmartPtrCInstallRequestDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallRequestFromString(
			const std::string xml);

		/// Saves the InstallRequestDoc to a file.
		void CAFINSTALLREQUESTXML_LINKAGE saveInstallRequestToFile(
			const SmartPtrCInstallRequestDoc installRequestDoc,
			const std::string filePath);

		/// Parses the InstallPackageSpecDoc from the file.
		SmartPtrCInstallRequestDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallRequestFromFile(
			const std::string filePath);

		/// Saves the InstallProviderSpecDoc to a string.
		std::string CAFINSTALLREQUESTXML_LINKAGE saveInstallProviderSpecToString(
			const SmartPtrCInstallProviderSpecDoc installProviderSpecDoc);

		/// Parses the InstallPackageSpecDoc from the string.
		SmartPtrCInstallProviderSpecDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallProviderSpecFromString(
			const std::string xml);

		/// Saves the InstallProviderSpecDoc to a file.
		void CAFINSTALLREQUESTXML_LINKAGE saveInstallProviderSpecToFile(
			const SmartPtrCInstallProviderSpecDoc installProviderSpecDoc,
			const std::string filePath);

		/// Parses the InstallPackageSpecDoc from the file.
		SmartPtrCInstallProviderSpecDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallProviderSpecFromFile(
			const std::string filePath);

		/// Saves the InstallPackageSpecDoc to a string.
		std::string CAFINSTALLREQUESTXML_LINKAGE saveInstallPackageSpecToString(
			const SmartPtrCInstallPackageSpecDoc installPackageSpecDoc);

		/// Parses the InstallPackageSpecDoc from the string.
		SmartPtrCInstallPackageSpecDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallPackageSpecFromString(
			const std::string xml);

		/// Saves the InstallPackageSpecDoc to a file.
		void CAFINSTALLREQUESTXML_LINKAGE saveInstallPackageSpecToFile(
			const SmartPtrCInstallPackageSpecDoc installPackageSpecDoc,
			const std::string filePath);

		/// Parses the InstallPackageSpecDoc from the file.
		SmartPtrCInstallPackageSpecDoc CAFINSTALLREQUESTXML_LINKAGE parseInstallPackageSpecFromFile(
			const std::string filePath);
	}
}

#endif /* CafInstallRequestXmlRoots_h_ */