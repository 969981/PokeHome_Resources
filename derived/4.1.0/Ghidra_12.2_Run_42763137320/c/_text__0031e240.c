/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031e240; name: FUN_.text__0031e240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0031e240(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  byte *local_148;
  undefined1 auStack_140 [256];
  undefined8 local_40;
  ulong local_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    return 0x16;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN__text__0031e400(param_1,param_2,param_3,&local_148);
  if (iVar1 != 0) {
    return iVar1;
  }
  lVar2 = *(long *)(local_148 + 1);
  if ((*local_148 & 0x7f) == 8) {
    local_30 = auStack_140;
    uStack_28 = local_40;
    auVar3 = FUN__text__0031e7e0(lVar2,0,lVar2,*(undefined4 *)(lVar2 + 4),&local_30);
    if (auVar3._8_8_ != (ulong)*(uint *)(lVar2 + 4)) {
      return 0;
    }
  }
  else if (local_38 < *(uint *)(lVar2 + 4)) {
    return 0;
  }
  return 2;
}


