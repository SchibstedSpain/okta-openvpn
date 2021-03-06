[OktaAPI]
## The URL for your Okta instance
## (Example below)
# Url: https://example.okta.com
Url: 
## The API Token for your Okta instace
## (Example below)
# Token: 01Abcd2efGHIjKl3m4NoPQrstu5vwxYZ_AbcdefGHi
Token: 
## An OPTIONAL suffix to be appended to the end of user names
## before the attempting authentication against Okta.
##   For example: If this was set to 'example.com', a user with a
##   certificate identifiying them as 'first.last' would be authenticated
##   against Okta as 'first.last@example.com'.
## (Example below)
# UsernameSuffix: example.com
## Do not require usernames to come from client-side SSL certificates.
## NOT RECCOMMENDED FOR PRODUCTION ENVIRONMENTS
## (Example below)
# AllowUntrustedUsers: True
## Configure how often poll Okta for results of an Okta Verify Push
## Values below are what are set by default:
# MFAPushMaxRetries: 20
# MFAPushDelaySeconds: 3
## Configure Okta's groups to access VPN (Must be use the groupID value).
## We can set up one group or n groups in a list separated by comma, for example:
# VpnGroup: 00g1esh0tyj5R0xmH0h8
# VpnGroup: 00g1esh0tyj5R0xmH0h8,00g1evks7klL4WRqn1x7
