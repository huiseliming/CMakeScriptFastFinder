#ifndef GITMETADATA_H
#define GITMETADATA_H
#include <string>

namespace git_version {

  // Is the metadata populated? We may not have metadata if
  // there wasn't a .git directory (e.g. downloaded source
  // code without revision history).
  bool IsMetadataPopulated();

  // Were there any uncommitted changes that won't be reflected
  // in the CommitID?
  bool HasAnyUncommittedChanges();

  // The commit author's name.
  std::string AuthorName();
  // The commit author's email.
  std::string AuthorEmail();
  // The commit SHA1.
  std::string CommitSHA1();
  // The ISO8601 commit date.
  std::string CommitDate();
  // The commit subject.
  std::string CommitSubject();
  // The commit body.
  std::string CommitBody();
  // The commit describe.
  std::string Describe();

  std::string Tag();
  std::string Version();
  std::string VersionMajor();
  std::string VersionMinor();
  std::string VersionPatch();
};
#endif // GITMETADATA_H
