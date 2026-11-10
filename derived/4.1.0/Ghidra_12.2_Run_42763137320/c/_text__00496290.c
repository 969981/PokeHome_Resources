/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496290; name: FUN_.text__00496290
 */


ulong FUN__text__00496290(long param_1,long param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  if (((param_3 & 1) == 0) ||
     (uVar2 = FUN__text__0046a1b0(param_1,*(ushort *)(param_2 + 0x24) & 1,
                                  *(undefined8 *)(param_2 + 0x10)), uVar2 == 1)) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x70) + 200) & 1) != 0)) {
        if ((param_4 & 1) == 0) {
          uVar5 = FUN__text__00469970(param_1,param_2,param_3 & 1);
          goto LAB__text__0049634c;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = FUN__text__00469b80(param_1,param_2,param_3 & 1);
LAB__text__0049634c:
        uVar5 = uVar5 & 0xffffffff;
      }
      bVar6 = (byte)((uint)*(undefined4 *)(param_1 + 0xd2) >> 0x1c) & 1;
      *(byte *)(param_2 + 0x28) = bVar6;
      uVar1 = *(ushort *)(param_2 + 0x24);
      *(long *)(param_2 + 0x10) = param_1;
    }
    else {
      bVar6 = 1;
      uVar5 = 1;
      uVar1 = *(ushort *)(param_2 + 0x24);
      *(long *)(param_2 + 0x10) = param_1;
    }
  }
  else {
    bVar6 = *(byte *)(param_2 + 0x28);
    uVar5 = (ulong)uVar2;
    uVar1 = *(ushort *)(param_2 + 0x24);
    *(long *)(param_2 + 0x10) = param_1;
  }
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    *(undefined1 *)(param_2 + 0x28) = 0;
    *(ushort *)(param_2 + 0x24) = uVar1 & 0xfffe;
    uVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x118))
                      (*(long **)(param_1 + 0x80),param_2,param_3 & 1,param_4 & 1);
    if (uVar2 != 1) {
      if (uVar2 != 0x50) {
        uVar5 = (ulong)uVar2;
        lVar4 = *(long *)(param_1 + 0x78);
        goto joined_r0x004963b8;
      }
      uVar2 = 0x50;
      if ((uint)uVar5 != 1) {
        uVar2 = (uint)uVar5;
      }
      uVar5 = (ulong)uVar2;
    }
  }
  lVar4 = *(long *)(param_1 + 0x78);
joined_r0x004963b8:
  if (lVar4 != 0) {
    *(byte *)(param_2 + 0x28) = bVar6;
    uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x118))
                      (*(long **)(param_1 + 0x78),param_2,param_3 & 1,param_4 & 1);
    if ((int)uVar3 != 1) {
      if ((int)uVar3 != 0x50) {
        return uVar3;
      }
      uVar2 = 0x50;
      if ((uint)uVar5 != 1) {
        uVar2 = (uint)uVar5;
      }
      uVar5 = (ulong)uVar2;
    }
  }
  return uVar5;
}


