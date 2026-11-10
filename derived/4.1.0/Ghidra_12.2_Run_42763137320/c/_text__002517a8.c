/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002517a8; name: FUN_.text__002517a8
 */


undefined8 FUN__text__002517a8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_28;
  
  lVar4 = *param_1;
  lVar1 = lVar4 + 0x110;
  FUN__text__0012c300(lVar1,0x70ac84);
  local_28 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_28);
  if (*(int *)(lVar4 + 0x67c) != 0) {
    FUN__text__003a14e8(uVar2,1);
  }
  local_28 = 0x918e9ae3c487032f;
  plVar3 = (long *)FUN__text__0012cdb0(lVar1,&local_28);
  (**(code **)(*plVar3 + 0x50))();
  FUN__text__00128ec0(lVar4,0);
  FUN__text__00128ca0(lVar4,1,1);
  return 1;
}


