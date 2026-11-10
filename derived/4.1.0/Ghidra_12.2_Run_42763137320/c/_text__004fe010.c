/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe010; name: FUN_.text__004fe010
 */


undefined8 FUN__text__004fe010(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_38;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x160);
  if (*(uint *)(param_1 + 0x160) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x158);
    puVar8 = puVar5;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        FUN__text__00400fc0(2,puVar6);
        puVar5 = *(undefined8 **)(param_1 + 0x158);
        uVar4 = (ulong)*(uint *)(param_1 + 0x160);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar5 + uVar4);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    lVar7 = *(long *)(param_1 + 0x178);
    do {
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))();
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != *(long *)(param_1 + 0x178) + (ulong)*(uint *)(param_1 + 0x180) * 0x10);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  local_38 = param_2 + 0x20;
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_2 + 0x1c);
  uVar2 = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined1 *)(param_1 + 0x16d) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    return 1;
  }
  uVar3 = FUN__text__004fe420(param_1,param_1 + 0x138,&local_38);
  return uVar3;
}


