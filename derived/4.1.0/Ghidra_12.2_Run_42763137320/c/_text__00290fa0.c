/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00290fa0; name: FUN_.text__00290fa0
 */


void FUN__text__00290fa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_18;
  
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731718);
  local_18 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_18);
  FUN__text__003a14e8(uVar2,(*(byte *)(lVar1 + 0x58) & 1) == 0);
  local_18 = 0xc35056d0249a792;
  plVar3 = (long *)FUN__text__0012cdb0(param_1 + 0x110,&local_18);
  (**(code **)(*plVar3 + 0x50))();
  FUN__text__00128ec0(param_1,0);
  if (*(long *)(param_1 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


