/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001253f0; name: FUN_.text__001253f0
 */


undefined8 FUN__text__001253f0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  iVar1 = (int)param_1[0xb8];
  if (iVar1 == 7) {
    if (param_1[0x12] != 0) {
      uVar3 = FUN__text__0012fe0c();
      if ((uVar3 & 1) == 0) {
        if (param_1[0x12] != 0) {
          return 0;
        }
      }
      else {
        param_1[0x12] = 0;
      }
    }
    uVar2 = 0;
    uVar5 = 1;
  }
  else if (iVar1 == 6) {
    if ((param_1[0xb9] != 0) && (uVar3 = FUN__text__00127db0(), (uVar3 & 1) == 0)) {
      return 0;
    }
    lVar4 = param_1[0x69];
    param_1[0x69] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar4 = param_1[0xb9];
    param_1[0xb9] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar4 = param_1[0x13];
    param_1[0x13] = 0;
    if (lVar4 != 0) {
      FUN__text__00125bd0(param_1 + 0x14);
    }
    puVar6 = (undefined8 *)param_1[0x17];
    param_1[0x17] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*(long *)param_1[0x18] + 0x18))
                ((long *)param_1[0x18],puVar6,param_1[0x19],param_1[0x1a]);
    }
    lVar4 = param_1[0x67];
    param_1[0x67] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    uVar5 = 0;
    uVar2 = 7;
  }
  else {
    if (iVar1 != 5) {
      return 0;
    }
    uVar3 = (**(code **)(*param_1 + 200))(param_1);
    uVar5 = 0;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  return uVar5;
}


