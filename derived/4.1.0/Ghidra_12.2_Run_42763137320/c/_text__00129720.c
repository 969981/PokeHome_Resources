/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129720; name: FUN_.text__00129720
 */


bool FUN__text__00129720(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_178 [4];
  undefined8 *local_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 *local_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  
  if (param_2 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    FUN__text__001199b0(local_178);
    puVar3 = (undefined8 *)(**(code **)(*(long *)param_1[0xc2] + 0x10))();
    plVar7 = (long *)*puVar3;
    plVar1 = (long *)puVar3[1];
    while (plVar7 != plVar1) {
      puVar3 = *(undefined8 **)(*plVar7 + 0x60);
      plVar5 = (long *)(**(code **)*puVar3)(puVar3);
      plVar6 = (long *)FUN__text__001280e4();
      if (plVar6 != plVar5) {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
      }
      uVar4 = FUN__text__00129720(puVar3 + -10,param_2);
      plVar7 = plVar7 + 1;
      puVar3 = local_178;
      if ((uVar4 & 1) == 0) {
        puVar3 = param_2;
      }
      param_2 = puVar3;
    }
    *(undefined1 *)((long)param_1 + 0x63a) = 0;
    FUN__text__0012c130(param_1 + 0x22,param_2);
    if (*(char *)((long)param_1 + 0x63a) != '\0') {
      param_2 = local_178;
    }
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
    puVar3 = local_118;
    bVar2 = *(char *)((long)param_1 + 0x63a) != '\0';
    local_118 = (undefined8 *)0x0;
    local_178[0] = 0x8677e8;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*local_110 + 0x18))(local_110,puVar3,uStack_108,local_100);
    }
    puVar3 = local_138;
    local_138 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*local_130 + 0x18))(local_130,puVar3,uStack_128,local_120);
    }
    puVar3 = local_158;
    local_158 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*local_150 + 0x18))(local_150,puVar3,uStack_148,local_140);
    }
  }
  return bVar2;
}


