/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446420; name: FUN_.text__00446420
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00446420(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined3 local_6b;
  undefined1 uStack_68;
  undefined3 uStack_67;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  pcVar4 = (char *)(param_1 + 0x28);
  if (*pcVar4 == -0x70 && *(char *)(param_1 + 0x2d) != '\0') {
    FUN__text__0044686c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                        *(long *)(param_1 + 0x18) + 0x18,pcVar4);
    return;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x20);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x48);
  }
  else {
    do {
      if ((int)plVar5[1] == 1) {
        uVar3 = *(undefined8 *)pcVar4;
        local_70 = *(undefined4 *)(param_1 + 0x30);
        local_78._2_6_ = (undefined6)((ulong)uVar3 >> 0x10);
        local_78._0_2_ = CONCAT11(*(undefined1 *)((long)plVar5 + 0x19),(char)uVar3);
        uVar1 = local_78;
        local_78._5_3_ = (undefined3)((ulong)uVar3 >> 0x28);
        local_78._0_5_ = CONCAT14((char)plVar5[3],(int)uVar1);
        FUN__text__0044686c(param_1,plVar5[2],*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                            *(long *)(param_1 + 0x18) + 0x18,&local_78);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x48);
  }
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if (*(int *)(plVar5 + 1) != 1) {
      local_48 = plVar5[2];
      plVar2 = *(long **)(local_48 + 0x1e8);
      if (plVar2 != (long *)0x0) {
        local_78 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
        local_6c = *(undefined1 *)(local_48 + 0x354);
        local_50 = *(undefined4 *)(param_1 + 0x34);
        local_70 = CONCAT22(*(undefined2 *)(param_1 + 0x2a),
                            CONCAT11(*(undefined1 *)(local_48 + 0x351),
                                     *(undefined1 *)(param_1 + 0x28)));
        local_6b = (undefined3)*(undefined4 *)(param_1 + 0x2d);
        uStack_68 = (undefined1)*(undefined4 *)(param_1 + 0x30);
        uStack_67 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
        local_60 = *(undefined8 *)(local_48 + 0x360);
        uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2c);
        uStack_4c = 3;
        local_58 = *(undefined4 *)(local_48 + 0x30);
        (**(code **)(*plVar2 + 0x148))(plVar2,&local_78,local_48 + 0x90,1);
      }
    }
  }
  return;
}


