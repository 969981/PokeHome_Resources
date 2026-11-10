/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00608c28; name: FUN_.text__00608c28
 */


void FUN__text__00608c28(long param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_5c [3];
  
  bVar2 = *(byte *)(param_2 + 0x47);
  uVar4 = *(undefined2 *)(param_3 + 0xd);
  uVar3 = *(undefined2 *)(param_3 + 0x22);
  uVar1 = 1;
  if ((bVar2 & 2) == 0) {
    uVar1 = bVar2 >> 1 & 2;
  }
  uVar8 = 0;
  if ((bVar2 & 1) == 0) {
    uVar8 = uVar1;
  }
  uVar6 = FUN__text__005ff43c(uVar4,uVar3,7);
  uVar7 = FUN__text__005ff554(uVar4,uVar3,7);
  local_5c[2] = FUN__text__005ff66c(uVar4,uVar3,7);
  local_5c[0] = uVar6;
  local_5c[1] = uVar7;
  if (*(char *)(param_3 + 0xc) == '\0') {
    uVar6 = local_5c[uVar8];
  }
  else {
    uVar8 = 0;
  }
  *(short *)(param_1 + 0x3d) = (short)uVar6;
  bVar5 = *(byte *)(param_1 + 0x3f) & 0xf8 | uVar8 == 0;
  bVar2 = bVar5 | 2;
  if (uVar8 != 1) {
    bVar2 = bVar5;
  }
  *(byte *)(param_1 + 0x3f) = bVar2 | (uVar8 == 2) << 2;
  return;
}


