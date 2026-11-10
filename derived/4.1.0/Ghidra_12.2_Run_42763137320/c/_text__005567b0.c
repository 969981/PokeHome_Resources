/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005567b0; name: FUN_.text__005567b0
 */


undefined8 FUN__text__005567b0(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = FUN__text__0054f878();
  if ((int)uVar2 == 1) {
    if (param_3 != 0) {
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 << 5,0x720431,0x21);
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
    }
    uVar4 = (ulong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x20) == 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      lVar5 = 0;
      uVar6 = 1;
      while( true ) {
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + lVar5);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar4 = (ulong)*(uint *)(param_1 + 0x20);
        }
        if (uVar4 <= uVar6) break;
        lVar3 = *(long *)(param_1 + 0x38);
        lVar5 = lVar5 + 0x20;
        uVar6 = uVar6 + 1;
      }
      if (uVar4 == 0) {
        return 1;
      }
    }
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = FUN__text__005555f4(*(long *)(param_1 + 0x38) + lVar3,param_2,
                                  *(uint *)(param_1 + 0x28) + (*(uint *)(param_1 + 0x28) >> 2));
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
    uVar2 = 1;
  }
  return uVar2;
}


