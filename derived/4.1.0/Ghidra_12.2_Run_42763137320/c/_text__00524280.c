/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00524280; name: FUN_.text__00524280
 */


undefined8
FUN__text__00524280(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                   undefined4 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  long local_58;
  
  *param_3 = param_1;
  *param_4 = 0;
  *param_5 = 0x3f800000;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x58);
    fVar5 = 3.4028235e+38;
    uVar2 = 0xffffffffffffffff;
    do {
      lVar3 = *plVar4;
      local_68 = 0;
      if (((*(char *)(lVar3 + 0x568) != '\0') &&
          (local_58 = param_1,
          uVar1 = FUN__text__00521678(lVar3,param_2,&local_58,&local_68,&local_6c,&local_70),
          (uVar1 & 1) != 0)) && (local_70 < fVar5)) {
        *param_3 = local_58;
        *param_4 = local_68;
        *param_5 = local_6c;
        uVar2 = *(undefined8 *)(lVar3 + 0x70);
        fVar5 = local_70;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
  }
  return uVar2;
}


