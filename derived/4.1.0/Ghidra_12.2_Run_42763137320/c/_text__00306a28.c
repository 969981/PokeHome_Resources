/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306a28; name: FUN_.text__00306a28
 */


void FUN__text__00306a28(long param_1,int *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  *param_2 = iVar3;
  uVar2 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
  *(undefined2 *)(param_2 + 1) = uVar2;
  iVar3 = FUN__text__0063378c(*(undefined8 *)(param_1 + 0x58));
  param_2[2] = iVar3;
  bVar1 = FUN__text__00634538(*(undefined8 *)(param_1 + 0x58));
  *(byte *)(param_2 + 3) = bVar1 & 1;
  bVar1 = FUN__text__00633b34(*(undefined8 *)(param_1 + 0x58),2);
  *(byte *)((long)param_2 + 0xd) = bVar1 & 1;
  iVar3 = FUN__text__00634578(*(undefined8 *)(param_1 + 0x58));
  param_2[4] = iVar3;
  uVar4 = FUN__text__006319d4(*(undefined8 *)(param_1 + 0x58));
  param_2[5] = uVar4 & 0xff;
  param_2[6] = -1;
  iVar3 = *param_2;
  if (iVar3 == 0x365) {
    uVar4 = FUN__text__00631324(*(undefined8 *)(param_1 + 0x58));
    param_2[6] = uVar4 & 0xff;
    iVar3 = *param_2;
  }
  if ((iVar3 == 0x37a) && ((short)param_2[1] == 1)) {
    *(undefined2 *)(param_2 + 1) = 0;
    param_2[5] = 2;
  }
  return;
}


