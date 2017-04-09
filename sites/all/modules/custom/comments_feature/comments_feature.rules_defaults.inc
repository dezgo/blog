<?php
/**
 * @file
 * comments_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function comments_feature_default_rules_configuration() {
  $items = array();
  $items['rules_email_notification_on_new_comment'] = entity_import('rules_config', '{ "rules_email_notification_on_new_comment" : {
      "LABEL" : "Email notification on new comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "New comment posted to [site:name]",
            "message" : "Hey [site:name] administrator, \\r\\n\\r\\nSomeone\\u0027s left a comment. You should really review it.\\r\\n\\r\\nIt was from [comment:name] \\u003C[comment:mail]\\u003E on IP [comment:hostname] who said:\\r\\n[comment:body]\\r\\n\\r\\nHere\\u0027s the comment URL: [comment:url]\\r\\n\\r\\nCheers,\\r\\n[site:url]"
          }
        },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Someone\\u0027s left a comment on [site:name]",
            "message" : "Dude,\\r\\n\\r\\nSomeone\\u0027s left a comment. You should really review it.\\r\\n\\r\\nIt was from [comment:name] \\u003C[comment:mail]\\u003E on IP [comment:hostname] who said:\\r\\n[comment:body]\\r\\n\\r\\nHere\\u0027s the comment URL: [comment:url]\\r\\n\\r\\nCheers,\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
