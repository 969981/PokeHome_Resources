/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6d90; name: FUN_.text__005f6d90
 */


void FUN__text__005f6d90(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN__text__005f64c4(param_1 + 0x28);
  do {
    FUN__text__005f599c(lVar3);
    FUN__text__005f598c(lVar3);
    FUN__text__005f5bfc(lVar3);
    FUN__text__005f597c(lVar3);
    plVar4 = (long *)FUN__text__005f53a0();
    uVar2 = FUN__text__005f5c9c(lVar3);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    lVar5 = FUN__text__005f5a34(lVar3);
    bVar1 = lVar5 != lVar3;
    lVar3 = lVar5;
  } while (bVar1);
  return;
}


