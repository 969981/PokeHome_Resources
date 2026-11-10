/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601534; name: FUN_.text__00601534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00601534(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [104];
  long local_78 [6];
  long local_48;
  
  if (*(int *)(param_1 + 8) != param_2) {
    FUN__text__00601fe0(local_78,param_2);
    memset(&local_190,0,0x110);
    lVar2 = FUN__text__00602950();
    FUN__text__00113bb0(&local_48,*_DAT_0089f550,0,local_78,0,*(undefined8 *)(lVar2 + 0x2e0),0);
    local_188 = local_48;
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005d8de0(local_48);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = local_188;
    if (*(long *)(local_188 + 0x180) < 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    if (*(long *)(local_188 + 0x180) != 0) {
      memcpy((void *)(param_1 + 0xc),*(void **)(local_188 + 400),0x194);
    }
    local_190 = _DAT_0089f718;
    *(int *)(param_1 + 8) = param_2;
    local_190 = local_190 + 0x10;
    FUN__text__005d9290(lVar2,&local_190);
    lVar2 = local_188;
    local_188 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar1 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar1)(auStack_e0);
    }
    pcVar1 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar1)(auStack_160);
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
    if ((local_78[3] != 0) && (local_78[0] != 0)) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    }
    local_78[0] = 0;
    local_78[1] = 0xcbf29ce484222645;
    local_78[2] = 0x70f683;
    local_78[3] = 0;
    if (local_78[4] != 0) {
      (**(code **)(*(long *)(local_78[4] + 0x48) + 0x18))();
    }
  }
  return;
}


