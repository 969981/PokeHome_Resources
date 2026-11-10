/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638e70; name: FUN_.text__00638e70
 */


undefined8 FUN__text__00638e70(int param_1,int param_2,ushort *param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  *param_3 = 0;
  if (param_1 < 0x289) {
    if (param_1 == 0x1e7) {
      uVar2 = (ushort)(param_2 == 0x70);
      goto LAB__text__00638fac;
    }
    if (param_1 != 0x1ed) {
      return 0;
    }
    if (param_2 - 0x12aU < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x00638eac */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__00638ebc +
                        (ulong)*(byte *)((ulong)(param_2 - 0x12aU) + 0x75ac64) * 4))(0,0);
      return uVar1;
    }
    if (param_2 != 0x284) {
LAB__text__00638f28:
      uVar2 = 0;
      goto LAB__text__00638fac;
    }
    lVar3 = 0x10;
    lVar4 = 0x75adc8;
  }
  else {
    if (param_1 == 0x289) {
      if (3 < param_2 - 0x74U) {
        return 1;
      }
      uVar2 = (short)param_2 - 0x73;
      goto LAB__text__00638fac;
    }
    if (param_1 != 0x305) {
      return 0;
    }
    if (0x10 < param_2 - 0x388U) goto LAB__text__00638f28;
    lVar3 = *(long *)((long)(int)(param_2 - 0x388U) * 8 + 0x75ae50);
    lVar4 = 0x75ae0c;
  }
  uVar2 = (ushort)*(byte *)(lVar4 + lVar3 * 4 + 2);
LAB__text__00638fac:
  *param_3 = uVar2;
  return 1;
}


