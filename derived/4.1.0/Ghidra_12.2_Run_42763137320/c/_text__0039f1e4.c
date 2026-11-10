/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039f1e4; name: FUN_.text__0039f1e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__0039f1e4(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar4 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  lVar2 = FUN__text__0039b7d0(uVar4,auStack_40);
  uVar1 = FUN__text__00388270(lVar2,0x73a680);
  if (((uVar1 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x73a680);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1 >> 8 & 0xff;
}


