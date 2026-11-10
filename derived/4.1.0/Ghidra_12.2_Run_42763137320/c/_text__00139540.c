/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00139540; name: FUN_.text__00139540
 */


void FUN__text__00139540(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  code *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  long lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  code *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long lStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_98 [10];
  undefined1 local_44 [4];
  
  lVar1 = param_1 + 0x110;
  FUN__text__0012bca0(lVar1,0);
  local_98[0] = 0x431e769ffc1ad350;
  uVar3 = FUN__text__0012ce7c(lVar1,local_98);
  FUN__text__003a14e8(uVar3,0);
  if (*(code **)(param_1 + 0x8d0) == (code *)0x0) {
    if (*(char *)(param_1 + 0xc24) != '\0') goto LAB__text__001396e8;
  }
  else {
    local_98[0] = CONCAT44(local_98[0]._4_4_,param_2);
    local_44[0] = 1;
    uVar4 = (**(code **)(param_1 + 0x8d0))(param_1 + 0x8f0,local_44,local_98);
    if ((uVar4 & 1) != 0) {
LAB__text__001396e8:
      if (*(code **)(param_1 + 0x650) == (code *)0x0) {
        return;
      }
      local_98[0] = CONCAT44(local_98[0]._4_4_,param_2);
      (**(code **)(param_1 + 0x650))(param_1 + 0x670,local_98);
      return;
    }
  }
  if (*(code **)(param_1 + 2000) != (code *)0x0) {
    local_98[0] = CONCAT44(local_98[0]._4_4_,param_2);
    (**(code **)(param_1 + 2000))(param_1 + 0x7f0,local_98);
  }
  if (*(code **)(param_1 + 0x950) != (code *)0x0) {
    local_98[0] = CONCAT44(local_98[0]._4_4_,param_2);
    local_44[0] = 1;
    iVar2 = (**(code **)(param_1 + 0x950))(param_1 + 0x970,local_44,local_98);
    if ((iVar2 != 0) && (lVar5 = *(long *)(param_1 + 0xc30), lVar5 != 0)) {
      do {
        iVar2 = iVar2 + -1;
        if (lVar5 != 0) {
          FUN__text__00128db0(lVar5,0,1);
          lVar5 = *(long *)(param_1 + 0xc30);
          lVar8 = *(long *)(lVar5 + 0xc30);
          if (lVar8 == 0) {
            *(undefined8 *)(param_1 + 0xc30) = 0;
          }
          else {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            lVar5 = *(long *)(param_1 + 0xc30);
            *(long *)(param_1 + 0xc30) = lVar8;
            if (lVar5 == 0) goto LAB__text__00139660;
          }
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        }
LAB__text__00139660:
        if (iVar2 == 0) break;
        lVar5 = *(long *)(param_1 + 0xc30);
      } while( true );
    }
  }
  if (*(long *)(param_1 + 0xc30) == 0) {
    local_1a0 = FUN__text__0013b4ec;
    local_198 = FUN__text__0013b584;
    local_190 = &LAB__text__0013b588;
    uStack_174 = (undefined4)local_98[0];
    local_188 = &LAB__text__0013b594;
    lStack_180 = param_1;
    local_178 = param_2;
    FUN__text__0012c3b0(lVar1,0x71b5cf,&local_1a0);
    pcVar7 = local_198;
    if (local_198 == (code *)0x0) {
      return;
    }
    plVar6 = &lStack_180;
    local_190 = (undefined1 *)0x0;
    local_188 = (undefined1 *)0x0;
    local_1a0 = (code *)0x0;
    local_198 = (code *)0x0;
  }
  else {
    local_120 = FUN__text__0013b4ec;
    local_118 = FUN__text__0013b584;
    local_110 = &LAB__text__0013b588;
    uStack_f4 = (undefined4)local_98[0];
    local_108 = &LAB__text__0013b594;
    lStack_100 = param_1;
    local_f8 = param_2;
    FUN__text__0012c3b0(lVar1,0x710294,&local_120);
    pcVar7 = local_118;
    if (local_118 == (code *)0x0) {
      return;
    }
    plVar6 = &lStack_100;
    local_110 = (undefined1 *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (code *)0x0;
    local_118 = (code *)0x0;
  }
  (*pcVar7)(plVar6);
  return;
}


