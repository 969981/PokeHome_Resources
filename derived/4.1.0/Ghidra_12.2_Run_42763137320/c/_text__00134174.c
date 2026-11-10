/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00134174; name: FUN_.text__00134174
 */


undefined8 FUN__text__00134174(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN__text__00134070(param_2,param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar2 = FUN__text__0012cb14(lVar1 + 0x110,(long)param_3 * 8 + 0x721848);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return uVar2;
}


