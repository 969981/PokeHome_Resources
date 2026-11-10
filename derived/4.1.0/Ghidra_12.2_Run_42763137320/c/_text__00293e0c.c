/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293e0c; name: FUN_.text__00293e0c
 */


void FUN__text__00293e0c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *param_1;
  local_28 = 0x431e779ffc1ad503;
  uVar1 = FUN__text__0012ce7c(lVar2 + 0x110,&local_28);
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(lVar2 + 0x2d0),0x731718);
  FUN__text__003a14e8(uVar1,(*(byte *)(lVar2 + 0x58) & 1) == 0);
  return;
}


