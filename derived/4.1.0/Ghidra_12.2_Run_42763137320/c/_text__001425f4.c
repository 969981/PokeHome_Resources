/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001425f4; name: FUN_.text__001425f4
 */


undefined8 FUN__text__001425f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  lVar4 = *param_1;
  lVar1 = lVar4 + 0x110;
  FUN__text__0012c300(lVar1,0x70ac84);
  plVar2 = (long *)FUN__text__0012cbe0(lVar1,0x71c1ba);
  (**(code **)(*plVar2 + 0x50))();
  FUN__text__00128ec0(lVar4,0);
  FUN__text__00128ca0(lVar4,1,1);
  local_28 = 0x431e769ffc1ad350;
  uVar3 = FUN__text__0012ce7c(lVar1,&local_28);
  FUN__text__003a14e8(uVar3,1);
  return 1;
}


