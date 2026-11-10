/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e8954; name: FUN_.text__001e8954
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001e8954(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_48;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(lVar4 + 8) = param_2[3];
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2));
  if (*(int *)(param_2 + 1) == 0) {
    FUN__text__0013a0d0(*param_2,0,*(undefined4 *)(param_2 + 2));
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60);
  }
  else {
    FUN__text__0013a1b8();
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_3 - 0xbU < 0xfffffff4) {
    param_3 = -1;
  }
  iVar1 = FUN__text__0019c594(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  local_28 = *(undefined8 *)(_DAT_008a0700 + (long)iVar1 * 8);
  local_48 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__001ac1fc(uVar3,param_2 + 4,&local_48,&local_28);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  *(undefined8 *)(lVar4 + 8) = 0;
  return;
}


