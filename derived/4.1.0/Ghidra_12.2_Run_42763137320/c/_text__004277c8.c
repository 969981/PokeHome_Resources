/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004277c8; name: FUN_.text__004277c8
 */


undefined8 FUN__text__004277c8(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int local_3c [2];
  int local_34;
  
  if (*(uint *)(param_1 + 0x2c) <= (uint)param_2) {
    return 2;
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))
                    (*(long **)(param_1 + 0xb8),param_2,local_3c);
  if (iVar3 != 1) {
    return 2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  uVar4 = FUN__text__00426c90(puVar1,local_34 + *(int *)(param_1 + 0xd0),param_3);
  if ((int)uVar4 != 3) {
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
    }
    else {
      (**(code **)(*(long *)*puVar1 + 0x90))();
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar2 = (uint *)(*(long *)(param_1 + 0x18) + 0x313);
  *(byte *)(param_1 + 0x20) = (byte)(*puVar2 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  *(uint *)(*(long *)(param_1 + 0x18) + 0x30c) = (uint)param_2 - local_3c[0];
  *puVar2 = *puVar2 & 0xfe3fffff;
  *(int *)(param_1 + 0x28) = local_3c[0];
  *(short *)(param_1 + 0x38) = (short)param_3;
  uVar5 = (uint)*(byte *)(param_1 + 0xdc);
  if ((*(byte *)(param_1 + 0xdc) >> 4 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((param_3 & 0xffff) != 1) {
      iVar3 = *(int *)(param_1 + 0x34) + 1;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x58))
                      (*(long **)(param_1 + 0xb8),puVar1,local_3c,iVar3 - local_3c[0],param_3);
    if (iVar3 != 1) {
      return 2;
    }
    uVar5 = (uint)*(byte *)(param_1 + 0xdc);
    if ((*(ushort *)(param_1 + 0xd4) & 0x11) == 1) {
      uVar5 = uVar5 | 0x80;
      *(char *)(param_1 + 0xdc) = (char)uVar5;
    }
  }
  if ((uVar5 >> 5 & 1) != 0) {
    FUN__text__004de4c0(param_1 + 0x90,param_1 + 0x24,
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2b0));
  }
  return 1;
}


