/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320e30; name: FUN_.text__00320e30
 */


ulong FUN__text__00320e30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  sVar2 = FUN__text__00306600(*param_3);
  iVar3 = FUN__text__003065f8(*param_3);
  if (DAT_008ef050 - 1U < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00320e88 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__00320e94 +
                      (ulong)*(byte *)((ulong)(DAT_008ef050 - 1U) + 0x734bec) * 4))();
    return uVar4;
  }
  uVar4 = 0;
  uVar1 = sVar2 - 1;
  if ((((uVar1 < 2) && (iVar3 == 0x286)) || ((uVar1 < 3 && (iVar3 == 800)))) ||
     ((uVar1 < 2 && (iVar3 == 0x382)))) {
    uVar4 = 8;
  }
  else if (((sVar2 == 8) && (iVar3 == 0x19)) || ((sVar2 == 1 && (iVar3 == 0x85)))) {
    uVar4 = 0x40;
  }
  if (*(char *)(*param_3 + 0x9c) != '\0') {
    uVar4 = uVar4 | 0x80;
  }
  uVar5 = FUN__text__00307e54();
  uVar6 = uVar4;
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN__text__00306734(*param_3);
    uVar6 = uVar4 | 0x200;
    if (iVar3 != 0x1b) {
      uVar6 = uVar4;
    }
  }
  return uVar6;
}


