/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002449bc; name: FUN_.text__002449bc
 */


void FUN__text__002449bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong local_18;
  
  *(undefined2 *)(param_1 + 0x704) = 0;
  *(undefined1 *)(param_1 + 0x706) = 0;
  FUN__text__00128ca0(param_1,1,1);
  lVar1 = param_1 + 0x110;
  if (*(int *)(param_1 + 0x708) == 0) {
    local_18 = 0xae55050415d68330;
    plVar3 = (long *)FUN__text__0012cdb0(lVar1,&local_18);
    FUN__text__003a1630();
    (**(code **)(*plVar3 + 0x50))(plVar3);
    FUN__text__003af6c0(plVar3);
  }
  else {
    uVar2 = FUN__text__0012cbe0(lVar1,0x70ee35);
    FUN__text__003a1630();
    local_18 = 0;
    FUN__text__003a8304(uVar2,&local_18,1,1);
  }
  FUN__text__0012bca0(lVar1,1);
  FUN__text__00128ec0(param_1,0);
  if (*(int *)(param_1 + 0x708) == 0) {
    local_18 = 0x769ffc1ad350;
  }
  else {
    local_18 = 0x779ffc1ad503;
  }
  local_18 = local_18 | 0x431e000000000000;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,1);
  return;
}


