/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a8e64; name: FUN_.text__001a8e64
 */


void FUN__text__001a8e64(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  long local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  long local_38;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x158);
  if (lVar3 == 0) {
    pcVar6 = (char *)(param_1 + (ulong)param_3 * 5 + (ulong)param_4 + 0x14);
    if (*pcVar6 == '\0') {
      return;
    }
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    pcVar6 = (char *)(param_1 + (ulong)param_3 * 5 + (ulong)param_4 + 0x14);
    if (*pcVar6 == '\0') goto LAB__text__001a8fd8;
  }
  local_b0 = param_3;
  uStack_ac = param_4;
  FUN__text__00191328(&local_64,param_1,&local_b0);
  local_38 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__0019485c(uVar4,&local_38,&local_64);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar1 = FUN__text__00306a00(lVar3,0);
  if ((uVar1 & 0xffff) == 0) {
    uVar5 = 0;
  }
  else {
    local_78 = local_64;
    uStack_70 = local_5c;
    local_68 = local_54;
    uVar2 = FUN__text__001a9004(param_2,&local_78);
    uVar5 = 0;
    if ((uVar2 & 1) == 0) {
      uVar5 = uVar1;
    }
  }
  FUN__text__00633e48(&local_b0);
  FUN__text__003069f8(lVar3,uVar5,&local_b0);
  local_b8 = lVar3;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  FUN__text__001951d4(uVar4,&local_b8,&local_64,1);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  *pcVar6 = '\0';
LAB__text__001a8fd8:
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


