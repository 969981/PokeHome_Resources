/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f70d0; name: FUN_.text__001f70d0
 */


undefined8 FUN__text__001f70d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_18;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(&local_18,puVar4[0xd],0);
  lVar5 = *(long *)(local_18 + 0x60);
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_18 != 0)) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  local_38 = *(long *)(param_1 + 0x80);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_40 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_18 = 0x6699567399801466;
  FUN__text__001acec4(&local_38,&local_40,&local_18);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_48 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_18 = 0x6695f073997d313d;
  FUN__text__001acec4(&local_48,&local_50,&local_18);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x88);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_58 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xe0) = 0x712750;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_18 = 0x6695eb73997d28be;
  FUN__text__001acec4(&local_58,&local_60,&local_18);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_68 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xf8) = 0x720107;
  *(undefined4 *)(param_1 + 0x100) = 2;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_70 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_18 = 0x6692ea73997af134;
  FUN__text__001acec4(&local_68,&local_70,&local_18);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_78 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x110) = 0x71b725;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  local_80 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_18 = 0x668f64739977d7ab;
  FUN__text__001acec4(&local_78,&local_80,&local_18);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x120);
  *(long *)(param_1 + 0x120) = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return 5;
}


