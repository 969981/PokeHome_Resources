/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00631268; name: FUN_.text__00631268
 */


void FUN__text__00631268(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 < 6) && (param_3 < 3)) {
    uVar2 = FUN__text__00610ba0(*(undefined8 *)(param_1 + 0x2f0));
    uVar1 = FUN__text__0063784c(uVar2,param_2,param_3);
    FUN__text__0061d4a0(*(undefined8 *)(param_1 + 0x2f0),uVar1);
    return;
  }
  return;
}


