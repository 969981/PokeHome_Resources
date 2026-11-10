/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ec480; name: FUN_.text__005ec480
 */


void FUN__text__005ec480(long param_1,undefined8 param_2,uint param_3,uint param_4,byte param_5,
                        byte param_6,byte param_7)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 4;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 8;
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
  }
  FUN__text__006ecef4(param_2,param_1 + ((uVar2 | uVar1) + (ulong)param_5 + (ulong)param_6 * 0x10 +
                                        (ulong)param_7 * 2) * 0x1c + 0x798);
  return;
}


