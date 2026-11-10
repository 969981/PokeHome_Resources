/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002270b4; name: FUN_.text__002270b4
 */


void FUN__text__002270b4(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  lVar1 = param_1 + 0x110;
  *(undefined2 *)(param_1 + 0x718) = 0;
  plVar3 = (long *)FUN__text__0012cbe0(lVar1,0x71e3b1);
  FUN__text__003a1630();
  (**(code **)(*plVar3 + 0x50))(plVar3);
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  FUN__text__0012cbe0(lVar1,0x71e3b1);
  iVar2 = FUN__text__003a85a0();
  local_38 = 0x431e769ffc1ad350;
  uVar4 = FUN__text__0012ce7c(lVar1,&local_38);
  FUN__text__003a14e8(uVar4,iVar2 == 6);
  return;
}


