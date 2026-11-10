/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf564; name: FUN_.text__006bf564
 */


void FUN__text__006bf564(long param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_2 + 5) = 0;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN__text__0068a8b8(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),param_2);
    param_2[0x11] = *(undefined4 *)(param_1 + 0x100);
    param_2[0x10] = *(undefined4 *)(param_1 + 0x104);
    uVar4 = 0x7f7fffff;
    if ((*(ushort *)(param_1 + 0x114) & 0x40) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x50);
    }
    param_2[0xf] = uVar4;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(long *)(param_2 + 0x16) = *(long *)(param_1 + 0x108);
  }
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x114);
    uVar3 = (uVar2 & 3) - 1;
    if (2 < uVar3) {
      uVar3 = *(byte *)(param_1 + 0x116) & 3;
      if (uVar3 != 2) {
        uVar3 = (uint)((*(byte *)(param_1 + 0x116) & 3) == 0);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x116);
    if ((bVar1 & 3) == 2) {
      uVar3 = uVar3 | 0x20;
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    else {
      if ((bVar1 & 3) == 0) {
        uVar3 = uVar3 | 0x10;
      }
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    if (bVar1 == 2) {
      uVar3 = uVar3 | 0x200;
    }
    else if (bVar1 == 0) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0;
  }
  param_2[0x14] = uVar3;
  *param_2 = *(undefined4 *)(param_1 + 0xe8);
  param_2[1] = *(undefined4 *)(param_1 + 0xec);
  param_2[9] = *(undefined4 *)(param_1 + 0x118);
  *(byte *)((long)param_2 + 0x62) = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 0xe) & 1;
  return;
}


