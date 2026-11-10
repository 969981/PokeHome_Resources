/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004748c0; name: FUN_.text__004748c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004748c0(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  lVar3 = 0x288;
  if ((param_2 & 1) == 0) {
    lVar3 = 0x290;
  }
  iVar4 = (int)param_3;
  local_54 = 0;
  if (iVar4 != 0x2000000 && iVar4 != 0x4000000) {
    local_54 = 0x3f800000;
  }
  if (*(long *)((long)param_1 + lVar3) != 0) {
    FUN__text__0042f65c(*_DAT_008a4648,*(long *)((long)param_1 + lVar3),param_3,param_4 & 0xffffffff
                        ,param_4 >> 0x20,0);
    return;
  }
  local_68 = param_1 + 2;
  local_48 = 0x1c;
  if (iVar4 == 0x8000000 || iVar4 == 0x4000000) {
    local_48 = 0x1d;
  }
  plVar1 = param_1 + 0x58;
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)((long)param_1 + 0x2c4);
  }
  local_58 = (undefined4)*plVar1;
  local_50 = (undefined4)param_4;
  uStack_4c = (undefined4)(param_4 >> 0x20);
  local_44 = 0x100;
  local_42 = 0;
  local_60 = param_3;
  lVar3 = FUN__text__0042f18c(*_DAT_008a4648,&local_68,0);
  if ((param_2 & 1) == 0) {
    param_1[0x52] = lVar3;
  }
  else {
    param_1[0x51] = lVar3;
    uVar2 = *(uint *)((long)param_1 + 0x313);
    *(uint *)((long)param_1 + 0x313) =
         uVar2 & 0xf0000000 | uVar2 & 0x7ffffff | (uint)(iVar4 == 0x1000000) << 0x1b;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,0xe,param_4 & 0xffffffff);
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0x28))(local_54,param_1,local_60,1);
    return;
  }
  return;
}


