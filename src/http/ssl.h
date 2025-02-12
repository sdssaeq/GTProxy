#pragma once
#include <string_view>

namespace server::ssl {
inline std::string_view cert{
    R"(-----BEGIN CERTIFICATE-----
MIIDfjCCAmagAwIBAgIUBqlXQAFmeysUkXQTTetpNqTVUu4wDQYJKoZIhvcNAQEL
BQAwFTETMBEGA1UEAwwKenR6cHJvZGVrajAeFw0yMjA2MTYxNjAwNTRaFw0yMzA2
MTYxNjAwNTRaMBUxEzARBgNVBAMMCnp0enByb2Rla2owggEiMA0GCSqGSIb3DQEB
AQUAA4IBDwAwggEKAoIBAQDAj6WWsIYJ1iK4G5m06JU4Ut3CpkZXYrH/VsiigfK5
Aqe9zmxLk4vXq1E4qOM5H36bKLYsSEPFP9GOg2Buq36SBj77/HCwpUYzN2VK4IRO
XhE/6XwEWGH83Ci6pWWXo4UAlXY+I5Ze6XUds1qj3UW3kc7J60saG+OZZ1Gn2mPA
DmqI8twcEI1mDVlU5SbbM7TAnWdbhQpX4vlMrzEDQOskBqkfpYzl3g6GzVJn7opF
FDCn/G/OOJ2GshRiFR7b4WsOABKC40ozi96PW6iDxrKRPQLxgx8UtDhxUQyYFOaB
tRT2NZiUu18SlZEH7skMw+mv7cXfj+GXubCpoCMtaNZPAgMBAAGjgcUwgcIwHQYD
VR0OBBYEFHADvOTQ1tQiXvE6ebKOEOF8x6AzMB8GA1UdIwQYMBaAFHADvOTQ1tQi
XvE6ebKOEOF8x6AzMA8GA1UdEwEB/wQFMAMBAf8wTQYDVR0RBEYwRIIOZ3Jvd3Rv
cGlhMS5jb22CDmdyb3d0b3BpYTIuY29tghAqLmdyb3d0b3BpYTEuY29tghAqLmdy
b3d0b3BpYTIuY29tMAsGA1UdDwQEAwIHgDATBgNVHSUEDDAKBggrBgEFBQcDATAN
BgkqhkiG9w0BAQsFAAOCAQEABG7Bh85eTfl0bIiUwOXdzI4U3gbNDS6KNuhg98OM
Fr5wlGnur1x5w5zqpsxhC8C8bCiUqBuddg1APviMpX9GNpxCarig/YGGElw1Lmag
gY0x7YYWw0Vm1ea+R93gAVbFFHI3s0x/xx10y2SvR0DD9IzHeZ5ycBo9M8+9a2cz
wHeJ+zfzbPnFRc94KSPf07v7zLcoePli3TUj0qLXr/4P2K5G4Q9Vtj6wMZf0KYHG
aa/RWZOKYEw3SDOiPeRSMXlx38uGIslXavJfhdlqUOG6gSZ3wv6ywIGA691tbqLR
Run3U7NQ0tAgyUSmv98a5g/7Tjch+gyOKTLtiDwCvfmEyQ==
-----END CERTIFICATE-----)"
};

inline std::string_view key{
    R"(-----BEGIN PRIVATE KEY-----
MIIEvgIBADANBgkqhkiG9w0BAQEFAASCBKgwggSkAgEAAoIBAQDAj6WWsIYJ1iK4
G5m06JU4Ut3CpkZXYrH/VsiigfK5Aqe9zmxLk4vXq1E4qOM5H36bKLYsSEPFP9GO
g2Buq36SBj77/HCwpUYzN2VK4IROXhE/6XwEWGH83Ci6pWWXo4UAlXY+I5Ze6XUd
s1qj3UW3kc7J60saG+OZZ1Gn2mPADmqI8twcEI1mDVlU5SbbM7TAnWdbhQpX4vlM
rzEDQOskBqkfpYzl3g6GzVJn7opFFDCn/G/OOJ2GshRiFR7b4WsOABKC40ozi96P
W6iDxrKRPQLxgx8UtDhxUQyYFOaBtRT2NZiUu18SlZEH7skMw+mv7cXfj+GXubCp
oCMtaNZPAgMBAAECggEACoQNu/P57fGWxc0kEMAe3guQdr/T2ZPXOqWHoXBNTBM8
C96JBXuSSH3fmqOGfSkeJeUMRdDQeqYokIrWKlUNPXY/3E0F7m+oLMXar0MhlpIG
iSH8FtSozUFMrBy6NpTEf6qp4WzaGmbPcYbI7Wf5FbRNwbMqz8s0G72LtQn1JpjK
km1whmFEN9OTDikLLBzp/AAxXkIC+8HytH5x0DMtUnHJbNLry2p/oOyzWO/JgB0C
7+3FDd6ddJnzTn2J3bPP+Nnb8B0MRaThvP6gNfFP94hoSTe/onfEMdnSd16IX4Ga
nyNv8oI08EH4+OVpAeyUz+BDqqZNjgFGLA/C8dqWKQKBgQD1yviPqbnlWMrjJecW
M3N39FccR6KtNtTDi6AVBQLPzo7w92EwJSCaogf2j7//bgOIABlJYIecKMIF6YD7
FpuzN296PHeXml3Ax90uFVt+ekDTmCeTR08Z4PVDvuhajmrbDbm6m+1z6STRAJGm
AyC9Bn3GuAVLtHYw9RPhHe4TiwKBgQDIjsSn328l3RB4xw39+aUMvKsxgoLtfWdN
HL9nn8EcATMPvGCkr7IBRmIzdPZcfzEOuyY+s9AY0BFlNBDJxUubUokZdQ7l1a6g
HN90vWuRTWQzPQenZZQjPZlZCStrsDKvKVsZ2FHI8CcPOFVY3+TtiogibJGCVqay
LiadpO+QzQKBgQCynl/ntwX6334BeGfowFcnUw+C46QakIAp4uvgmpWigo9qGbwt
Cq4Y8asryOdULpSuXrQBmP6zwwLM3RX4YkOgB6chg5O9PlbnY9ceSDMHRLybiDUq
WGXpfot+QdwFAv4wVlckf3AeDc3NfMZbiGZgN7lrkgt3KpvBlDhwHhoHZQKBgQCP
noU/PeanM6Y/BzSC4koKU/U38CD4Fqxp8SMz/pfYCRfatehzJooPFaru9FwTotWr
meNqVXO4wQ8j7OP0yX86DCG3hDcV6S4y5Fo0jAzCsawGcTbQ7hHmJo9wzfs1E6lH
/BKL8HeosCkYYhvkF/klDeYs2JhewNSAlkH69AjGJQKBgHHlj5i3zs/knX1CRah8
1IzQ4NjqdJjzbQ7VPO8AjEt4RRNKEVBZDXD8t22oRAD3/YlOfgPNA8CUtaoMZXYt
9bvQHpmlzzNaUpTyOXGqgI4RR+2o7aIlSBpKzvTgHhp2Cuzv1zWL7TshB06JSQuZ
73whfRg+s50OK40A4ruOVniX
-----END PRIVATE KEY-----)"
};
}
