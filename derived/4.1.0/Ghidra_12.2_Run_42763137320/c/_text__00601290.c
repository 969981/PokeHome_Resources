/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601290; name: FUN_.text__00601290
 */


undefined4 FUN__text__00601290(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (((int)param_2 < 0x404) && (0xfffffff4 < param_3 - 0xc)) {
    uVar1 = 0;
    if ((param_2 & 0xfffffffe) != 0x402 && (int)param_2 < 0x402) {
      uVar1 = param_2;
    }
    uVar2 = FUN__text__005f29c0((&DAT_00c15d20)[param_3],uVar1,DAT_00c15cd8);
  }
  uVar3 = FUN__text__005f3244(DAT_00c15cd8);
  FUN__text__005f3460(param_1,uVar3,0xd);
  return uVar2;
}


