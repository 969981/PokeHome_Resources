/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004786dc; name: FUN_.text__004786dc
 */


void FUN__text__004786dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = DAT_00ae9a68;
  lVar3 = *(long *)(param_1 + 0x150);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1d0));
  FUN__text__0047c20c(uVar1,lVar3,uVar2);
  return;
}


