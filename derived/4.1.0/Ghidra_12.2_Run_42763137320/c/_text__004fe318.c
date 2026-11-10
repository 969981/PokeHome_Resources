/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe318; name: FUN_.text__004fe318
 */


undefined8 FUN__text__004fe318(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x310);
  plVar3 = (long *)FUN__text__00400f80(0,0xf8);
  if (plVar3 != (long *)0x0) {
    FUN__text__00501ee0(plVar3,param_1,0);
    *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
    iVar2 = FUN__text__00502104(plVar3,uVar4,param_2 + 0x20,bVar1 >> 2 & 1);
    if (iVar2 == 1) {
      FUN__text__004eb980(plVar3);
      (**(code **)(*plVar3 + 0x80))(plVar3);
      local_4c = **(undefined4 **)(param_2 + 0x18);
      uStack_48 = (*(undefined4 **)(param_2 + 0x18))[1];
      local_44 = FUN__text__004f5ed0(plVar3);
      FUN__text__004ebee4(plVar3,&local_4c);
      return 1;
    }
    FUN__text__004ec13c(plVar3);
    FUN__text__004eb980(plVar3);
  }
  return 2;
}


