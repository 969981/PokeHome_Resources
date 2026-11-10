/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476dd0; name: FUN_.text__00476dd0
 */


undefined8 FUN__text__00476dd0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_30;
  int local_28;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x2a8) != 0) {
    uVar2 = FUN__text__00451690(*(long *)(param_1 + 0x2a8),param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_28 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN__text__004c5aa0(*(undefined8 *)(param_1 + 0x2a0),&local_38);
    if (((local_30 == 0) || (local_28 != *(int *)(param_1 + 0x348))) ||
       (iVar1 = FUN__text__0045171c(*(undefined8 *)(param_1 + 0x2a8),param_1,local_30,
                                    *(undefined8 *)(param_1 + 0x340)), iVar1 != 1)) {
      FUN__text__004c5adc(*(undefined8 *)(param_1 + 0x2a0),&local_38);
      return 0;
    }
    FUN__text__004c5adc(*(undefined8 *)(param_1 + 0x2a0),(undefined8 *)(param_1 + 0x338));
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x338) = local_38;
    *(long *)(param_1 + 0x340) = local_30;
    *(int *)(param_1 + 0x348) = local_28;
  }
  return uVar3;
}


