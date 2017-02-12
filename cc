[33mcommit 9a15e36b0e0268f9b6d0996796361cc4c9da68b6[m
Author: Camilo Giraldo <camilogiraldo91@gmail.com>
Date:   Thu Feb 9 22:02:49 2017 -0500

    add heroes list & kindof master/detail view

[33mcommit 743f27e95db133fabfba8c5fb224aca0b5a81674[m
Author: Camilo Giraldo <camilogiraldo91@gmail.com>
Date:   Wed Feb 8 21:42:20 2017 -0500

    add two way data binding for input

[33mcommit df33a5b061df4c29ff5a4391bf7a3a80315c66eb[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Feb 6 13:46:22 2017 -0800

    chore: add bs-config.e2e.json to non-essential files

[33mcommit 816b8bd87736de0b2874502dbd38f531a281d472[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Jan 10 23:39:26 2017 -0800

    chore: fix OSX instructions to remove non-essential files

[33mcommit d0e75940f0f4a7a621a4f2da9361fdf4cebac97a[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Feb 2 18:38:49 2017 +0000

    chore: add src folder (#362)
    
    * chore: add src folder
    
    * incorporate Jesus's feedback
    
    * move tsconfig.json into src/e2e
    
    * add base href
    
    * ignore debug.log
    
    * remove unused npm script
    
    * some protractor changes
    
    * remove appSrcBase
    
    * explicitely list config for npm run serve
    
    * add update instructions
    
    * Add third party deps note to update section

[33mcommit 182d81a34b228cbdfd70c8c823ac045e7efd193f[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Jan 10 23:47:40 2017 -0800

    chore: add slash to appAssets in karma.conf (#329) (#351)
    
    Add leading slash to appAssets variable
    closes #329

[33mcommit eda3873cce79646296170ffa66c1fbb4e97023d3[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Jan 5 18:36:36 2017 -0800

    chore: add non-essential-files.txt and instrucs

[33mcommit 588fd3c2a0ce8f8412d7ee6f0af5801b0eeda463[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Jan 2 14:43:46 2017 -0800

    chore(readme): npm start doesn't work in Bash for Windows

[33mcommit b98f50fd88a5b177b93e81458cd1beebedcedfb2[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Mon Jan 2 21:15:36 2017 +0000

    chore(deps): remove reflect-metadata (#343)
    
    Blocked on https://github.com/angular/in-memory-web-api/pull/86
    
    As per https://github.com/zloirock/core-js/issues/152, `core-js` already includes `reflect-metadata`.

[33mcommit 3150b604822768c463b4e304f840a75c1237859d[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Dec 21 17:41:31 2016 -0800

    chore: bump to latest in-memory-web-api version

[33mcommit bb064832aaa14063d84aca4e2e98711dcccdb42e[m
Author: Craig <cnishina@users.noreply.github.com>
Date:   Wed Dec 21 01:53:40 2016 -0800

    fix(deps): remove selenium-webdriver typings and update protractor version (#332)

[33mcommit b55d76119253df57e9dcf3557f494588f4a6dd4a[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Wed Dec 21 01:51:04 2016 +0100

    chore: bump to 2.4.0 (#331)

[33mcommit d8c3cba7baa9fa2eaf3cc3f60332abfb2fbfb7f0[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Tue Dec 20 17:56:13 2016 +0000

    fix(deps): pin webdriver and zone.js (#330)
    
    When https://github.com/angular/protractor/pull/3848 is ready it should fix the webdriver types issues, and the pinning can be reverted.
    
    The zone.js problem is being tracked on https://github.com/angular/zone.js/issues/554.
    
    Fix https://github.com/angular/quickstart/issues/325

[33mcommit d765934b532e84c0f06ea34282f1eea58c538371[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Dec 14 19:08:23 2016 -0800

    chore: update changelog

[33mcommit ad20b8d7b39d82f8695df54fe36d3fe65423db0f[m
Merge: e87fbef e2dc603
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Dec 14 19:03:45 2016 -0800

    Merge branch 'master' of https://github.com/angular/quickstart

[33mcommit e87fbef98e7fcc57a1c17d5c876fa6d7043d7854[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Dec 14 19:03:39 2016 -0800

    chore: update in-mem to v.0.2.1

[33mcommit e2dc603363d588bc529acaeb7769235b12c834c9[m
Author: Adriano dos Santos Fernandes <asfernandes@users.noreply.github.com>
Date:   Tue Dec 13 06:08:21 2016 -0200

    Correction for when we change tsconfig.json/outDir and karma.conf/appBase. (#314)

[33mcommit 1249afd56492812f8cb5ef0e054731961f3470f2[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Dec 12 20:43:33 2016 -0800

     chore: update example package.json to use in-mem-web-api 0.2.0
     This update ensures examples get "cold" observables from `Http` when using in-mem-web-api

[33mcommit 730682fb22f4722515d5c9f1f656525bc87b0d0b[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Mon Dec 12 13:34:55 2016 +0000

    ci: update protractor (#318)

[33mcommit 9acb6303a749ff7ae449b6c0f5364b408dc82e78[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Dec 7 23:53:45 2016 +0000

    chore: update to 2.3.0 (#308)
    
    chore: update to 2.3.0

[33mcommit 2867bc166145459a7ea7e25345a19311595fc93e[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Nov 30 15:33:48 2016 -0800

    chore: karma.conf cosmetic changes

[33mcommit 867d54c22d2b07e51070a5319022dc257a442c11[m
Merge: d68eb81 3adfdf7
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Nov 30 14:31:05 2016 -0800

    chore(config): remove upgrade package mappings
    closes #301

[33mcommit 3adfdf768d94355540ee78f589d9e53bcf40a368[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Nov 30 12:33:46 2016 -0800

    chore: test framework improvements, remove tsconfig `exclude` clause
    * remove `exclude` clause from `tsconfig.json`; it was just confusing people
    * karma.config + karma-test-shim can handle multiple spec source paths (issue #294)
    * cosmetic `app.component.spec.ts` changes
    * cosmetic `karma.config.js` changes

[33mcommit ce8fcdcd4f0988cbadbcf4fc41bd530e3c607222[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Nov 23 00:06:13 2016 +0000

    Update CHANGELOG.md (#299)

[33mcommit d68eb81fcda8119486d25ca5433c28968d937ee2[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Nov 24 16:13:56 2016 +0000

    chore(config): remove upgrade package mappings
    
    The package is not listed in `package.json` and https://github.com/angular/angular.io/pull/2803 will contain instructions to add it manually.

[33mcommit 6caf4ccff1f437f357f8c80fe5440dcdaf74545e[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Nov 23 00:06:13 2016 +0000

    Update CHANGELOG.md (#299)

[33mcommit 9f2e627cc3a4b263d1c6f750d48663bfb0269d31[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Nov 22 16:00:41 2016 -0800

    chore: revise to conform to QS reboot in angular.io PR #2762 (#287)

[33mcommit 755614827ae6381a6c343b861efe52d66c0aba4e[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Fri Nov 18 08:53:06 2016 +0000

    chore: simplify gitignore (#68)

[33mcommit 801aa94c670de6d82c461882536af19d01784aa2[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Fri Nov 18 02:46:22 2016 +0000

    chore(config): add 2.2.0 router/upgrade entry point (#285)

[33mcommit 1f9ff3ee0a832124383f39c185177af43ad738e4[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Tue Nov 15 09:38:00 2016 +0000

    Add @angular/upgrade/static to systemjs.config.js (#281)
    
    Blocked by https://github.com/angular/angular.io/pull/2781 and Angular 2.2.0.

[33mcommit c36ac4d361cf322589fdf72a65c7742feb4b80b1[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Mon Nov 14 23:11:51 2016 +0000

    chore: update to angular 2.2.0 (#283)

[33mcommit 9de879d93f5e5c4040c6ecc2a28e260f40cd9116[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Nov 7 18:23:21 2016 -0800

    chore: drop '!' from  "Hello Angular!"

[33mcommit bfd1896fd65069872dbe40f891148dde8c1df7f1[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Fri Nov 4 11:58:32 2016 -0700

    chore: change message to "Hello Angular!"

[33mcommit f6075a1fe7dae8012040f2cfa529a91f945baa17[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat Oct 29 23:50:18 2016 -0700

    chore(testing): revert to jasmine v.2.4.1 (#272)
    
    Bug in Jasmine v.2.5.x, reported in https://github.com/jasmine/jasmine/issues/1231
    
    Stick with v.2.4.1 (as karma-jasmine does) until the issue is resolved
    Unfortunately, there is no @types/jasmine for v.2.4 but only for v.2.5.

[33mcommit cd7b566fca6ad4074c674748451181f4bcc2ddc7[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat Oct 29 18:09:57 2016 -0700

    fix: karma shim values; update app.component.spec more like cli

[33mcommit e2d55c59402f935558f0ac9a8769732cb1c6cd18[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Sat Oct 29 22:31:46 2016 +0100

    fix(e2e): restore e2e fix (#271)
    
    See #266

[33mcommit a654977e1d12930044bf495f392a0ec7af42a313[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat Oct 29 10:38:18 2016 -0700

    chore: update to 2.1.2; remove bootstrap.css (#270)

[33mcommit 3ed4ad4b5304f5272c3b3f327b3b0d7bac9e6d69[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Oct 27 14:21:50 2016 +0100

    fix(e2e): fix travis webdriver issue (#266)

[33mcommit c002d0ec8da9e52a746a8e1ad8a0054514c806f0[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Oct 27 13:59:07 2016 +0100

    chore(editorconfig): remove end_of_line setting (#267)
    
    Using `end_of_line` causes issues on windows machines.

[33mcommit ccb97afdfeacc317176f4defec1f3fa8bb796829[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sun Oct 23 00:30:33 2016 -0700

    chore(tsconfig): add compileOnSave and exclude -aot.ts files

[33mcommit 80684c1d0d03d6ccb85757ba46f4a7c962aedb43[m
Author: Natasha Kaweski <naweskil@gmail.com>
Date:   Sun Oct 23 05:13:15 2016 -0200

    Updating README.md (#258)

[33mcommit 541bdc5f634e1142860c56cace247234edfaf74b[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sun Oct 23 00:11:56 2016 -0700

    chore: update systemjs.config for in-mem-web-api

[33mcommit 2891223d450836d92c0d09bf884f3763b63fb16b[m
Author: Emerson Thompson <thompson.emerson@gmail.com>
Date:   Fri Oct 21 01:44:31 2016 -0300

    chore: standardizing of spaces in karma.conf.js (#244)

[33mcommit e33ed9a3adb1e1b9639bd16bcf27e621aba6e092[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Oct 20 21:29:53 2016 -0700

    chore: v.2.1.1 + move to @types (0.2.13)

[33mcommit 068ed638ce6a0aeca5aa43644975798532e91b37[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Oct 20 18:23:25 2016 -0700

    chore: update in-mem-web-api pkg to v.0.1.13

[33mcommit 544a2faa30a5be0e72d04dca5eb49d55357b3f2b[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Fri Oct 21 01:10:43 2016 +0100

    chore: update to @types and protractor4 (#157)

[33mcommit 341eb5446625553eb8cc60b65ec4e21ef86f2993[m
Author: Robin Janssens <robinj@users.noreply.github.com>
Date:   Sun Oct 16 17:43:29 2016 +0100

    chore: Update README.md (#253)
    
    removed advice about requiring admin access for npm install, start - this is incorrect and bad practise.

[33mcommit 639593e6b4369760c6a205538dbe5b0f6df59eb1[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Thu Oct 13 15:28:50 2016 +0200

    chore: release 2.1.0 (#249)

[33mcommit caa4817b607f3e8d37fba5fa467ab36483eaed29[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Oct 6 16:50:44 2016 -0700

    chore: v.2.0.2 + changelog

[33mcommit 163cfcde74fed1c0d7eea7e52d7021b620a38759[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Oct 6 16:37:12 2016 -0700

    chore: update to v.2.0.2

[33mcommit 65ca680c8333d694fa025031e4139eec6aadd11c[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Oct 3 13:30:38 2016 -0700

    chore: remove reference to `HTML-Reporter` in README (no longer supported)

[33mcommit 6473275d70de014e66c7b76d8d41433b370aaf71[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Oct 3 13:10:08 2016 -0700

    chore: add systemjs.config.extras.js to source control

[33mcommit c32774ae8c97a3594bc5394e5659a54fa4d425ae[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Sep 27 10:45:34 2016 -0700

    chore: update package.json files to latest pkg versions. Use ~ for Ng. (#231)

[33mcommit 482e10343f7a615ff1bf9995e3f330b90a17191f[m
Author: Emerson Thompson <thompson.emerson@gmail.com>
Date:   Tue Sep 27 14:44:11 2016 -0300

    alignment imports s2 (#230)

[33mcommit a742988f7629a5eb7966621c7a15ec6a8c509306[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sun Sep 25 21:22:15 2016 -0700

    chore: remove 3 unused packages from package.json
    In response to https://github.com/angular/quickstart/commit/ea70d3a88dae6d3c104bb60fe343caf037e1bb76#commitcomment-19166659

[33mcommit ea70d3a88dae6d3c104bb60fe343caf037e1bb76[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sun Sep 25 15:51:21 2016 -0700

    chore: update for "angular-in-memory-web-api" & latest testing setup

[33mcommit 607adf63399e7cf8f1a26f28853a745cefab44d2[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Sep 19 21:14:13 2016 -0700

    chore: replace "angular 2" with "angular"

[33mcommit f95cf4179c9ac541a94bda03719d00615ef26251[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Sep 15 03:51:54 2016 +0100

    chore: update to Angular 2.0.0 (#221)

[33mcommit d3a977e900f0ab25ec57e54f5be9e6184f5e44d5[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Sep 14 18:16:59 2016 +0100

    chore: update to TS2.0 (#216)
    
    This PR updates TypeScript from 1.8.10 to 2.0.2. It does not replace `typings` with `@types`, that will happen in https://github.com/angular/quickstart/pull/157.

[33mcommit bb9a0a2b50a2a6465b650f38863110f0d605fb73[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Sep 14 11:10:56 2016 +0100

    fix(e2e): create output dir if it doesn't exist (#217)
    
    Fix #196
    Fix #201

[33mcommit def6b934bae39bed74b0247788da91ada6a3a2f4[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Tue Sep 13 12:57:44 2016 +0200

    chore: bump to rc7 (#214)

[33mcommit 3802aeb62380c90ecbb46a018da45fa9106ef654[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Thu Sep 8 13:51:26 2016 +0200

    chore: add doctype (#183)

[33mcommit 73f4a820f271e9463103dfb52f92989abfa9c284[m
Author: Deborah Kurata <DeborahK@users.noreply.github.com>
Date:   Fri Sep 2 01:08:21 2016 -0700

    Update typings for RC 6 to match quickstart docs (#205)

[33mcommit c3dd14ca45ff7d4f3e1efb95390df553c3352f51[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Sep 1 17:48:26 2016 -0700

    chore: remove angular testing libs from systemjs and update testing shims

[33mcommit 89cc3a879ab0c6f1d7dac8bf73e633a5ceff80a7[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Sep 1 06:32:53 2016 +0100

    chore: make systemjs config more consistent

[33mcommit fa6baacc8ab8b095735f8b8f5eb9d17b1d8790b8[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Sep 1 06:32:10 2016 +0100

    fix(systemjs): add missing main

[33mcommit 3b7452cc444c49c139ea39523ced0468c2362c16[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Sep 1 05:43:41 2016 +0100

    chore: update to rc6 (#202)
    
    chore: update to rc6

[33mcommit 1c78664d2fb3e9545b66c3b2a7e4b9c8d822bea9[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Mon Aug 22 15:27:12 2016 +0200

    chore: update karma to new zone.js (#195)

[33mcommit d8b3ba7ece489a8812f220fe0272260d6258640f[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Fri Aug 19 12:26:17 2016 +0200

    chore: update specs to TestBed (#184)

[33mcommit 6ce71a08f6356b7a68325df25944de7610090207[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Wed Aug 17 13:43:54 2016 +0200

    chore: update node and npm recommendations (#151)

[33mcommit 5c41da2d3da78a3e87dda54f9986c550d7f3bd44[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Aug 17 12:42:13 2016 +0100

    chore(docs): use correct comment syntax (#177)
    
    Fixes https://github.com/angular/quickstart/issues/176

[33mcommit c4cd6345247e12108f99312f42448ca1c74b7f01[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Tue Aug 9 19:15:37 2016 +0100

    chore: update changelog

[33mcommit ff4c85d6b0db4bb2e179df11aff5731faf6a0a39[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Tue Aug 9 20:13:43 2016 +0200

    chore: update to Angular 2 RC5 (#175)

[33mcommit 27ef388a32c1610d5dc0e1e83fb3a6b25b4d15b1[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Jul 28 17:04:56 2016 +0100

    chore(travis): add badge to readme (#166)

[33mcommit 20aeb08eebf0bcee06ef03136c9b341ccdb26e45[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Tue Jul 12 19:29:52 2016 +0100

    chore(tests): add single run mode

[33mcommit 647c3d96769f2427638b1edaac809728e52b150d[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Fri Jul 1 12:05:16 2016 +0200

    chore: update to RC4 (#149)

[33mcommit 682dc1523494007ad514c70503625183bd84e5e8[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Thu Jun 30 00:50:31 2016 +0100

    chore(deps): update in-memory-web-api (#148)

[33mcommit 2d5c4ccfca9255c1b0df00b731213b6201063c51[m
Author: Davor Lozic <warriorkitty@warriorkitty.com>
Date:   Sat Jun 25 12:36:30 2016 +0200

    Change var to let in e2e (#147)
    
    Fixes lint.

[33mcommit 2d5c667766c8ce2a4419d8c09b114849409249b7[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Jun 22 02:19:52 2016 +0100

    chore: update to RC3 (#141)

[33mcommit 8e63b3d3b4fae9785c52af7e12891ff6f5b1aa13[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Mon Jun 20 14:18:50 2016 +0100

    chore: update packages (#138)
    
    Fix #137

[33mcommit 49189f8516c42fd11ba697c1cc28b582a68b8aa2[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Mon Jun 20 14:18:43 2016 +0100

    feat(e2e): add typescript support (#69)

[33mcommit 936ea6791ccf4cc6dd488a24b0766771dad10385[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Fri Jun 17 13:21:04 2016 +0100

    chore: update in-mem-api version (#136)
    
    Fix #135

[33mcommit 6e430b276099340766b98def91c1a2b628f93465[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Wed Jun 15 20:20:03 2016 +0100

    chore: update to rc.2 (#133)

[33mcommit bf7987248b67323343b55224b7fe926eab35c040[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Wed Jun 15 16:43:17 2016 +0200

    chore: add typings warning (#132)

[33mcommit afb9c9e308edc3e42fcf584fc77c8956f61f30d2[m
Author: Matteo Spreafico <matsprea@users.noreply.github.com>
Date:   Thu Jun 9 11:57:49 2016 +0200

    chore: fix semicolons
    
    fix semicolons

[33mcommit a53d48f28e060f542f6efeaf703c486bed94f4c6[m
Author: Foxandxss <foxandxss@gmail.com>
Date:   Sat May 28 22:44:48 2016 +0200

    chore: allow node 6 to be used
    closes #118

[33mcommit 7aa2f845cc9e11df233ca68c94d9069532bbcffd[m
Author: Jesús Rodríguez <Foxandxss@gmail.com>
Date:   Sun May 29 19:40:44 2016 +0200

    chore: remove test (#121)

[33mcommit 98cb4192949c48788a511f44e6f0d9139209af1e[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon May 23 11:08:22 2016 -0700

    chore: include windows command for deleting the .git folder

[33mcommit 90edcf663d9ab60601b432e655e08c48b211d236[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat May 21 16:58:37 2016 -0700

    chore(typings): from globalDevDependencies to globalDependencies

[33mcommit a351da8092d49b2d01592be3e8bf2441fb986cf3[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat May 21 15:53:55 2016 -0700

    chore(readme): stronger, clearer on node/npm versions

[33mcommit 104e077418a19b875ab42e3672c8a89aa1908431[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat May 21 14:42:06 2016 -0700

    chore: update testing setup to use systemjs.config.js

[33mcommit 52cc512debbdd1b1e9d9f72bcd03692adbc667a4[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sat May 21 14:24:06 2016 -0700

    chore: package.json and typings updates

[33mcommit 8e4b387dcc1791fb3e1772811c706fcd285c5de5[m
Author: Foxandxss <foxandxss@gmail.com>
Date:   Sat May 21 15:37:25 2016 +0200

    chore: add required node and npm versions
    closes #112

[33mcommit 335b5fde154c18f621622ee52379d5f494110ab7[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Fri May 20 00:37:48 2016 -0700

    chore: update test configuration

[33mcommit 74e205794d578fafa9e03da33eab5e1d1e16d1bf[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu May 19 22:52:12 2016 -0700

    chore: update to in-mem-web-api 0.0.9

[33mcommit 1b1e152c83f50b74a3fff6ffa46703ff310a620a[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu May 19 21:44:39 2016 -0700

    chore: update to commonjs v.8 of in-mem-web-api

[33mcommit e8189ea5d439d3d2e869830e1675f6ae1c4382d1[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu May 19 19:39:27 2016 -0700

    chore: update system.js for umd bundles

[33mcommit 10fe34feaf9646a4014c2684c6eecbbf7438b1b6[m
Author: Foxandxss <foxandxss@gmail.com>
Date:   Fri May 20 02:41:36 2016 +0200

    chore: migrate to core-js

[33mcommit fdf619609f2a85940fe1b9a021648b68f8aea822[m
Author: Arne Maier <Arne_Maier@gmx.de>
Date:   Sat May 7 17:51:42 2016 +0200

    Added semicolon after variable declaration.
    closes #94

[33mcommit 6c060f10df0d824d629d80ef9a1d5547b16b11fb[m
Author: Foxandxss <foxandxss@gmail.com>
Date:   Wed May 4 10:52:22 2016 +0200

    chore: enable testing for rc1
    closes issue #86

[33mcommit a93c713afafb8838ac5f9f87211a00effe2b2d99[m
Author: Carlos Morales <carlos.morales@mimacom.com>
Date:   Mon May 2 07:55:11 2016 -0400

    fix(readme) fix missing parameter in npm command
    closes #80

[33mcommit 10aed7c5f3b23513ea81315eb0670e5aa2c6097e[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue May 3 20:06:24 2016 -0600

    chore: update to rc1

[33mcommit a7cc38b7e8f46f6917b5f4676c2d5d9094970166[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue May 3 09:08:19 2016 -0600

    chore: update package/tsconfig json to match QS

[33mcommit 27ee0d7135df3a62b60c1c079626a52df2ed40db[m
Author: Foxandxss <foxandxss@gmail.com>
Date:   Tue May 3 09:59:26 2016 +0200

    chore: add systemjs.config.js

[33mcommit c15f1a74192dad9b64bba7a4a5ad5014cd87f3c1[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue May 3 01:24:32 2016 -0600

    chore: update to RC0; no unit testing yet

[33mcommit 53a8221341fa2819efe61f13e27c99106798ed51[m
Author: Filipe Silva <filipematossilva@gmail.com>
Date:   Fri Apr 29 03:04:18 2016 +0100

    chore: update to beta.17 (#78)

[33mcommit 3251fc53b3ee71db8d38dda27efc490ba73de6e3[m
Author: Deborah Kurata <DeborahK@users.noreply.github.com>
Date:   Thu Apr 28 19:03:08 2016 -0700

    docs(quickstart): add lint script and dependency. (#77)
    
    We include tslint.json in the quick start files, so adding the script makes sense.

[33mcommit ea2c0dbcaa99bc8f876fdaedcde090fd5ecdb862[m
Author: VDMT <viranthat@gmail.com>
Date:   Fri Apr 29 14:01:58 2016 +1200

    chore: update README.md (#75)
    
    correction to command for unit test

[33mcommit a807d0187d5f4a1f3fad1f65a4b405a7182adc74[m
Author: Wojciech Surmacz <wojciech.surmacz@gmail.com>
Date:   Fri Apr 29 04:01:05 2016 +0200

    chore: update README.md (#64)
    
    Fixed webdriver update command.

[33mcommit 7a268b5aa692c5a37fa9f8309dc880c2ad229121[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Apr 26 21:55:32 2016 -0700

    chore: update tests and test support for beta.16

[33mcommit 74af5aab874a0d33eb012f13bb15af4444ef0ab3[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Apr 26 09:39:12 2016 -0700

    chore: update to beta.16

[33mcommit a44287fd435a7fc81ebe53f0e29b86a29bdd6013[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 21 18:40:05 2016 -0700

    chore: remove system-polyfills.js

[33mcommit 7bb69c052f95f4710854614e61b7328bbd957314[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 20 15:06:25 2016 -0400

    chore: add lodash to devdependencies

[33mcommit 97171be180ccae6055e31d7a3e9a4f4eda704cb6[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 20 08:17:09 2016 -0400

    chore: testing config tweaks & remove systemjs-polyfill (no longer needed)

[33mcommit 5213e619c066b18c558c1b61d0431f2928475883[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Apr 18 18:13:25 2016 -0400

    chore: slightly improve app.component.spec.ts

[33mcommit 856a3127cb115a011c2b0aa9832ae1a0f0f4a589[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Sun Apr 17 22:17:46 2016 -0400

    chore: slight tweaks to karma/wallaby config

[33mcommit b7e4b1c199f025620be01a64f777502aaeea8535[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Fri Apr 15 01:43:17 2016 -0700

    chore: more testing config refactors

[33mcommit 4ee4cf57e11297619deba9b1b81bd4ca3f307b89[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 14 22:33:47 2016 -0700

    chore: test configuration refactoring for readability

[33mcommit 11943f67fb2e59876f6e607bbcda9f443225056c[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 14 20:19:11 2016 -0700

    chore: add wallaby.js support, refactor example spec

[33mcommit b614774113644168cfc551f8635933492f7bbe05[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 14 14:33:39 2016 -0700

    chore: commit protractor.config.js & update .gitignore accordingly

[33mcommit 168495d7c8381838b86b4277c8eda02c82b4c79c[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 14 11:14:13 2016 -0700

    chore: smooth the protractor process; shuffle scripts in package.json

[33mcommit 62f891595fae504a93a440a0e61458a17e8ba18c[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 13 18:21:01 2016 -0700

    chore: update to beta.15

[33mcommit 1ba19a73c6656a76dc2b2fa34380a1af6d4091c8[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 13 16:22:56 2016 -0700

    chore: add sample unit and e2e tests and explain them.

[33mcommit d31fc47b895f4a299a2a12972c72efdea97d68d1[m
Merge: c18870f 08a8c8a
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 13 15:57:23 2016 -0700

    Merge branch 'master' of https://github.com/angular/quickstart

[33mcommit c18870fb02801c395bdba53e9d18cc7877c14fed[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Apr 13 15:56:48 2016 -0700

    chore: extend with testing support (preliminary)

[33mcommit 08a8c8ad136163bd8141cf6b135d1f02a63bc412[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 7 19:07:55 2016 -0700

    rid of silly $ prompt so people can copy/paste

[33mcommit c17b1fba5b58f3f1875af4e4d0f94e71957ec26a[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 7 14:19:24 2016 -0700

    chore: official beta.14

[33mcommit 727ae454f714bdb99e8b6665cd75f77d727567e5[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Apr 7 14:03:58 2016 -0700

    chore: update beta.14
    also revert accidental merge of 78ca595234ea74ae4

[33mcommit bf69b163960f0fd0a40ec04d55051198ae6ed1b3[m
Author: Kahlil Lechelt <hello@kahlil.info>
Date:   Thu Apr 7 16:20:41 2016 +0200

    use consisten naming convention for npm tasks and use npm-run-all for docker task

[33mcommit ae1f3648bbb040911bc377b05d3f04876e8fd8fd[m
Author: Kahlil Lechelt <hello@kahlil.info>
Date:   Thu Apr 7 16:20:41 2016 +0200

    use consisten naming convention for npm tasks and use npm-run-all for docker task

[33mcommit a1eebf7bd8d1831a408a49dea66e4ca95338f312[m
Author: Kahlil Lechelt <hello@kahlil.info>
Date:   Thu Apr 7 16:18:25 2016 +0200

    use npm-run-all instead of concurrently for nicer syntax in scripts

[33mcommit b63489a787b086bb2009ba0009c31915219e087c[m
Author: Christopher Martin <cgmartin@gmail.com>
Date:   Sat Mar 19 15:12:59 2016 -0400

    dockerfile speed optimizations
    closes #36

[33mcommit 34cd392051b8b3ea039d900769bd0de632bf9cf0[m
Author: Christopher Martin <cgmartin@gmail.com>
Date:   Sat Mar 19 14:51:50 2016 -0400

    add dockerfile

[33mcommit efa99af690b73de64b6332767df9472e8dab72a8[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Thu Mar 31 13:27:27 2016 -0700

    chore: update to beta.13

[33mcommit efe12ab0ac4e245d3b7080e2dc2aff3fd0232ee8[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Fri Mar 25 01:40:47 2016 -0700

    chore: correct license

[33mcommit 995a149e92d6583a139b7ad317156d24ec4a6263[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Wed Mar 23 21:23:35 2016 -0700

    chore: update to beta.12

[33mcommit 0fb8db4de578b41300dfde84f7fbb06a3f563b11[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Fri Mar 18 19:16:48 2016 -0700

    chore: upgrade to beta.11

[33mcommit cd290d9558a4e4932a5c3f0521650eb2df2f9354[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Tue Mar 15 11:30:38 2016 -0700

    chore: update es6-shim to v.0.35.0 per A2 issue #7618

[33mcommit 82e0d50d2b32786dfa0f42e19e6e38e30295078b[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Mar 14 16:10:13 2016 -0700

    chore: fix lite-server links in README

[33mcommit 900eeb8b3cf730ec6a6c4f5b48923c18504579ee[m
Author: Ward Bell <wardbell@hotmail.com>
Date:   Mon Mar 14 14:34:55 2016 -0700

    chore: quickstart rebooted - now the source code for the QS in docs

[33mcommit f1ef6a8b903aad00a2efb607c09ec716ef07b27f[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:47:39 2015 -0700

    chore(rtts_assert): Update README version for rtts

[33mcommit 935f0f5e9b30bc5cb5f24c43e63fecb7eed8936a[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:46:59 2015 -0700

    chore(rtts_assert): Update rtfs to alpha 7

[33mcommit 5f6c563fac9310176580ab07b96889557e95d5ff[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:43:58 2015 -0700

    fix(name): Fix version name

[33mcommit a63ae0619283b87c928f893169b4878174e3a7db[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:40:09 2015 -0700

    fix(readme): Update README versions

[33mcommit 709794afce3ca74d460268204261729e60775234[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:35:53 2015 -0700

    chore(update): Update package.json version to reflect Angular release version

[33mcommit e2b5f5634ef3f3a75d5c8f340410b411a5e320cd[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:35:21 2015 -0700

    chore(update): Update package.json version

[33mcommit efe6314ac4986a750a26d708977106221385f616[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:31:38 2015 -0700

    chore(update): Update package.json repo fields

[33mcommit 25265df9b5a41d4350339cdcd5986fbad47b210b[m
Author: David East <david@firebase.com>
Date:   Tue Mar 24 06:30:19 2015 -0700

    chore(update): Update to Alpha 14 release

[33mcommit a5f4882ece790b420876e3daae2687405145d8f4[m
Author: David East <david@firebase.com>
Date:   Wed Mar 11 05:33:30 2015 -0700

    Add Apache 2.0 license

[33mcommit cd35dfda51e0e323687d1a2eb0af380a446dee37[m
Author: David East <david@firebase.com>
Date:   Wed Mar 11 05:32:13 2015 -0700

    Update to Apache 2.0 License.

[33mcommit 3dc205e87c64abf81bb865707a8d2e6c3a0ab43a[m
Author: David East <david@firebase.com>
Date:   Mon Mar 9 06:30:20 2015 -0700

    Update README.md

[33mcommit d7c5874f574b3c1cecc1434e67a43505c3f06523[m
Merge: da1ad44 737cd40
Author: David East <david@firebase.com>
Date:   Thu Mar 5 00:29:11 2015 -0800

    Merge pull request #1 from angular/update
    
    rebuild based on most current angular 2 on npm

[33mcommit 737cd408c43438986a0f4e3fec8965a6481f00f5[m
Author: Rado Kirov <radokirov@google.com>
Date:   Thu Mar 5 00:24:42 2015 -0800

    rebuild based on most current angular 2 on npm
    
    add sourcemap stripping.

[33mcommit da1ad445ea2b8d94649f132e9f51bb73ce163264[m
Author: David East <david@firebase.com>
Date:   Thu Mar 5 00:05:13 2015 -0800

    Make it so.
