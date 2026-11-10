/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd28c; name: FUN_.text__004fd28c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fd28c(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  uint local_40;
  undefined1 local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  long *local_28;
  
  local_38 = (undefined1 *)&local_40;
  local_3c = 0;
  auVar1 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*param_2)) * SEXT816(0x20c49ba5e353f7cf);
  local_40 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  local_40 = local_40 & ((int)local_40 >> 0x1f ^ 0xffffffffU);
  uVar3 = 2;
  if (((*(byte *)(param_1 + 0x5a) & 0xe) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
    local_30 = 0;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
    uVar2 = FUN__text__004fb000(param_1);
    local_28 = (long *)FUN__text__004fb0ac(param_1,uVar2);
    if (local_28 != (long *)0x0) {
      FUN__text__004fb1a0(param_1,uVar2,&local_38,&local_28);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x80))();
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


