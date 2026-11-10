/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00558190; name: FUN_.text__00558190
 */


undefined8 FUN__text__00558190(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x6;
  byte in_w7;
  ulong uVar4;
  ulong uVar5;
  
  *(int *)(param_1 + 0x20) = param_3;
  in_w7 = param_3 == 2 & in_w7;
  *(byte *)(param_1 + 0x5c) = in_w7;
  if (in_w7 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  uVar2 = FUN__text__005567b0(param_1,param_2);
  if ((int)uVar2 == 1) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar3 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)*(uint *)(param_1 + 0x20) * 0xb0,0x70f033,0x3a);
      *(long *)(param_1 + 0x50) = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x20);
      if (*(uint *)(param_1 + 0x20) != 0) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          if (*(long *)(param_1 + 0x50) != 0) {
            puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar3);
            puVar1[0x14] = 0;
            puVar1[0x15] = 0;
            puVar1[0x12] = 0;
            puVar1[0x13] = 0;
            puVar1[0x10] = 0;
            puVar1[0x11] = 0;
            puVar1[0xe] = 0;
            puVar1[0xf] = 0;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[10] = 0;
            puVar1[0xb] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar5 = (ulong)*(uint *)(param_1 + 0x20);
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0xb0;
        } while (uVar4 < uVar5);
        if (uVar5 != 0) {
          lVar3 = 0;
          uVar5 = 0;
          do {
            uVar2 = FUN__text__00558334(*(long *)(param_1 + 0x50) + lVar3,param_2,
                                        *(undefined4 *)(param_1 + 0x28),in_x6);
            if ((int)uVar2 != 1) {
              return uVar2;
            }
            uVar5 = uVar5 + 1;
            lVar3 = lVar3 + 0xb0;
          } while (uVar5 < *(uint *)(param_1 + 0x20));
        }
      }
    }
    uVar2 = FUN__text__00554cd0(param_1,param_2,*(undefined4 *)(param_1 + 0x28),3,0,0);
    if (((int)uVar2 == 1) &&
       (uVar2 = FUN__text__00559e50(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28)),
       (int)uVar2 == 1)) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x28) >> 2;
      return uVar2;
    }
  }
  return uVar2;
}


