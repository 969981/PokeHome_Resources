/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407da0; name: FUN_.text__00407da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00407da0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = _DAT_008a4b70;
  *(short *)(param_1 + 0x4e0) = (short)*_DAT_008a4b70;
  *(undefined4 *)(param_1 + 0x4d8) = *param_2;
  uVar2 = FUN__text__0041ec00(param_1 + 0x4d0);
  if ((int)uVar2 == 1) {
    if (*(char *)(param_2 + 3) != '\0') {
      *(short *)(param_1 + 0x510) = (short)*puVar1;
      *(undefined4 *)(param_1 + 0x508) = 0x3102;
      uVar2 = FUN__text__0041ec00(param_1 + 0x500);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
    }
    if (param_2[1] == 0) {
      uVar2 = FUN__text__004df2dc(param_1 + 0xa0,0);
      return uVar2;
    }
    lVar3 = FUN__text__00400f80(5,(ulong)(uint)param_2[1] << 3);
    *(long *)(param_1 + 0x538) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN__text__00400f80(5,(ulong)(uint)param_2[1] << 3);
      *(long *)(param_1 + 0x540) = lVar3;
      if (lVar3 != 0) {
        uVar2 = FUN__text__004df2dc(param_1 + 0xa0,param_2[1]);
        return uVar2;
      }
    }
    uVar2 = 0x34;
  }
  return uVar2;
}


