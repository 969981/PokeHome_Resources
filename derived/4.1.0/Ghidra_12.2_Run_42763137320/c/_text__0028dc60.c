/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028dc60; name: FUN_.text__0028dc60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028dc60(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(lVar4 + 0x87c) = uVar1;
  iVar2 = FUN__text__0015ab30();
  *(undefined4 *)(lVar4 + 0x880) =
       *(undefined4 *)(_DAT_008a1760 + (long)iVar2 * 0x2c + (ulong)uVar1 * 4);
  FUN__text__00286ad0(lVar4);
  FUN__text__00285880(lVar4);
  local_28 = 0x431e769ffc1ad350;
  uVar3 = FUN__text__0012ce7c(lVar4 + 0x110,&local_28);
  FUN__text__003a14e8(uVar3,1);
  FUN__text__00128ec0(lVar4,0);
  if (*(long *)(lVar4 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


