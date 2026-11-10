/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cd30; name: FUN_.text__0055cd30
 */


void FUN__text__0055cd30(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    FUN__text__0055d6c4(param_2[2],param_2[1],param_2[3],lVar1,0,*(undefined4 *)(param_1 + 0x108),
                        *param_2);
    FUN__text__0055d6ec(lVar1,0,*(undefined1 *)(param_2 + 4));
  }
  if (*(char *)((long)param_2 + 0x25) != '\0') {
    FUN__text__0055d6c4(param_2[7],param_2[6],param_2[8],lVar1,1,*(undefined4 *)(param_1 + 0x108),
                        param_2[5]);
    FUN__text__0055d6ec(lVar1,1,*(undefined1 *)(param_2 + 9));
  }
  if (*(char *)((long)param_2 + 0x39) != '\0') {
    FUN__text__0055d6c4(param_2[0xc],param_2[0xb],param_2[0xd],lVar1,2,
                        *(undefined4 *)(param_1 + 0x108),param_2[10]);
    FUN__text__0055d6ec(lVar1,2,*(undefined1 *)(param_2 + 0xe));
  }
  lVar1 = param_1 + 0x30;
  if (*(char *)((long)param_2 + 0x4d) != '\0') {
    FUN__text__0055d6c4(param_2[0x11],param_2[0x10],param_2[0x12],lVar1,0,
                        *(undefined4 *)(param_1 + 0x108),param_2[0xf]);
    FUN__text__0055d6ec(lVar1,0,*(undefined1 *)(param_2 + 0x13));
  }
  if (*(char *)((long)param_2 + 0x61) != '\0') {
    FUN__text__0055d6c4(param_2[0x16],param_2[0x15],param_2[0x17],lVar1,1,
                        *(undefined4 *)(param_1 + 0x108),param_2[0x14]);
    FUN__text__0055d6ec(lVar1,1,*(undefined1 *)(param_2 + 0x18));
  }
  if (*(char *)((long)param_2 + 0x75) == '\0') {
    return;
  }
  FUN__text__0055d6c4(param_2[0x1b],param_2[0x1a],param_2[0x1c],lVar1,2,
                      *(undefined4 *)(param_1 + 0x108),param_2[0x19]);
  FUN__text__0055d6ec(lVar1,2,*(undefined1 *)(param_2 + 0x1d));
  return;
}


